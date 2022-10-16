
#include <linux/init.h>
#include <linux/module.h> 
#include <linux/kernel.h> 

MODULE_LICENSE("LICENSE");

static int __init my_hello_init(void){
    printk(KERN_INFO "Hola mundo!!!");
    return 0;
}

static void __exit my_hello_exit(void){
    printk(KERN_INFO "Chao mundo!!!");
}

module_init(my_hello_init);
module_exit(my_hello_exit);
