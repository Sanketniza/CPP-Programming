
  /* -------------------------------------------------------------------------- */
  /*              44 //!            virtual Base Class                          */
  /* -------------------------------------------------------------------------- */
 

                    //!    Theory Part OF virtual Base Class
/* 

              todo:                class A      ( //? Here class A is Virtual Base Class ...) 
                                     |
                               a     |    a
                                     V
                           ---------------------
                           |                   | 
                           |                   |
                        a  |                   | a
               ?         class B              class C   
                           |                   |
                           |                   |                          
                           |                   |                          
          todo:            -------class D-------
                              a             a
 */


  //!  syntax

     class B : virtual public A{  
//Or class B : public virtual A {

     };

     class C : virtual public A{

     };


     