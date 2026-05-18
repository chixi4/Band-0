
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420388cc(char *param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == '\0') {
    uVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xa70))();
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xa94))
                      (param_1,*(undefined2 *)(param_1 + 0xc),
                       *(undefined2 *)(*(int *)(param_1 + 0x3c) + 0x10),uVar1,
                       *(undefined2 *)(param_1 + 0xe),param_1[0xe4],param_1[0xe5],
                       *(code **)(_DAT_ram_3fcdfecc + 0xa94));
    if (iVar2 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x904))(*(undefined4 *)(param_1 + 0x3c));
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      *(undefined2 *)(param_1 + 0xda) = param_2;
      return 0x45;
    }
  }
  else {
    uVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xa70))();
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xa94))
                      (param_1,*(undefined2 *)(param_1 + 0xc),
                       *(undefined2 *)(*(int *)(param_1 + 0x40) + 0x10),uVar1,
                       *(undefined2 *)(param_1 + 0xe),param_1[0xe4],param_1[0xe5],
                       *(code **)(_DAT_ram_3fcdfecc + 0xa94));
    if (iVar2 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x904))(*(undefined4 *)(param_1 + 0x40));
      iVar2 = _DAT_ram_3fcdfecc;
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      (**(code **)(iVar2 + 0x544))(param_1,0x400);
      return 0x45;
    }
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x72c))();
  if (iVar2 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x548))(param_1,0x80);
  }
  return 0;
}

