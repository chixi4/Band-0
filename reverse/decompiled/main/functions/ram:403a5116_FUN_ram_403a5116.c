
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_ram_403a5116(undefined4 param_1,int param_2,undefined1 *param_3,undefined4 param_4,
                undefined4 param_5)

{
  if (param_2 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x287,&DAT_ram_3c0f6d40,0,0,param_5,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x8f0))
            (param_2,*(undefined2 *)(param_2 + 0x1c),*(undefined1 *)(param_2 + 0x1a),param_1,0x1000,
             *(code **)(_DAT_ram_3fcdfecc + 0x8f0));
  *param_3 = *(undefined1 *)(param_2 + 0x1b);
  return *(undefined1 *)(param_2 + 0x1a);
}

