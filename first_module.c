#include <linux/init,h<
#include <linux/module.h>

int first_module_init(void){
	printk(KERN_ALERT "Inside the %s function\n" __FUNCTION__);
	return 0;
}
void first_module_exit(void){
	printk(KERN_ALERT "Inside the %S function\n", __FUNCTION__);
}

module_init(first_module_init);
module_exit(ex01_simple_module_exit);

