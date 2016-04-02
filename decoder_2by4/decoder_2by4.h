/**
* decoder_2b4.h
* author : davise_me
* date :  01/04/2016
*/

SC_MODULE (encoder)
{//set of encoder boolean switches for 2inputs and 4 decoder outputs
    sc_in <sc_uint<2> > input;
    sc_in <bool> enable;
    
    sc_out <sc_uint<4> > output;
    
    void proc_encoder();
    
    SC_CTOR (encoder)
    {//constructor method
        SC_METHOD (proc_encoder);
        sensitive << input << enable;
    }
};
