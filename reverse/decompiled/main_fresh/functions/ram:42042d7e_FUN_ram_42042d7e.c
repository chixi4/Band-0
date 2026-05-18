
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042d7e(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0xb) != '\x02') {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0xb1a,&DAT_ram_3c0f6e84,0,0,*(char *)(param_1 + 0xb),
               *(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  FUN_ram_4039c11e(param_2,param_1 + 0x1f0,10);
  return;
}

