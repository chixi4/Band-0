
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042cba(int param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0xb) != '\x01') {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0xaf6,&DAT_ram_3c0f6e5c,0,0,*(char *)(param_1 + 0xb),
               *(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  *param_2 = *(undefined1 *)(param_1 + 0x1ec);
  param_2[1] = *(undefined1 *)(param_1 + 0x1ed);
  param_2[2] = *(undefined1 *)(param_1 + 0x1ee);
  return;
}

