/*
* @param driver module for testing our two by four module
* @param super class decoder_2by4.h
* author: davis seme 
* date :  01/04/2016
*
*/


#include "decoder_2by4.h"

SC_MODULE (driver)
{
    sc_out <sc_uint<2> > d_input;
    sc_out <bool> d_enable;
    
    void proc_driver()
    {
        sc_uint<2> pattern;
        pattern = 0;
        
        while (1)
        {
        // Test-bench
        pattern = 0;
        d_enable = false;
        d_input = pattern;
        
        wait(1, SC_NS);
        
        pattern = 0;
        d_enable = true;
        d_input = pattern;
            
        wait(1, SC_NS);

        pattern = 1;
        d_enable = true;
        d_input = pattern;
        
        wait(1, SC_NS);

        pattern = 2;
        d_enable = true;
        d_input = pattern;
        
        wait(1, SC_NS);

        pattern = 3;
        d_enable = true;
        d_input = pattern;
        
        wait(1, SC_NS);

        pattern = 3;
        d_enable = false;
        d_input = pattern;
            
        wait(1, SC_NS);

        sc_stop(); // Stops the simulation
       }
    }

    SC_CTOR(driver)
    {
        SC_THREAD (proc_driver);
    }
};

SC_MODULE (monitor)
{
    sc_in <bool> m_enable;
    sc_in <sc_uint<2> > m_input;
    sc_in <sc_uint<4> > m_output;
    
    void prc_monitor()
    {
        cout << "At time: " << sc_time_stamp() << ": " << "enable , input = " << m_enable << " " << m_input << "\t" << "output = " << m_output << endl;
    }
    
    SC_CTOR(monitor) {
        SC_METHOD(prc_monitor);
        sensitive << m_enable << m_input;
    }
};


int sc_main (int argc, char * argv[])
{
    sc_signal <bool> t_enable;
    sc_signal <sc_uint<2> > t_input;
    sc_signal <sc_uint<4> > t_output;
    
    // DRIVER
    driver DRIVER ("DRIVER");
    DRIVER.d_enable    (t_enable);
    DRIVER.d_input     (t_input);
    
    // MONITOR
    monitor MONITOR ("MONITOR");
    MONITOR.m_enable (t_enable);
    MONITOR.m_input (t_input);
    MONITOR.m_output (t_output);
    
    // MAIN MODULE
    encoder ENCODER ("encoder");
    ENCODER.enable (t_enable);
    ENCODER.input (t_input);
    ENCODER.output (t_output);

    // Dumping signals into .vcd file
    sc_trace_file *trace = sc_create_vcd_trace_file ("decoder");
    
    sc_trace (trace, t_enable                         , "enable");
    sc_trace (trace, t_input                          , "input");
    sc_trace (trace, t_output                         , "output");

    sc_start(100, SC_NS);
    
    sc_close_vcd_trace_file(trace);

    return 0;
}

