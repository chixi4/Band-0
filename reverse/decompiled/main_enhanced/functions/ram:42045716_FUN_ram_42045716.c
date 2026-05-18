
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42045716(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined4 extraout_a4;
  
  if (param_1 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x31,&DAT_ram_3c0f70a4,0,0,param_5,*(code **)(_DAT_ram_3fcdfecc + 0x110));
    param_5 = extraout_a4;
  }
  if (param_2 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x32,&DAT_ram_3c0f70a4,0,0,param_5,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  FUN_ram_420456a8(param_1,param_2,param_3);
  return;
}

