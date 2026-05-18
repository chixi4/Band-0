
int FUN_ram_4202cff2(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [88];
  
  uStack_7c = 0;
  if (param_1 == 6) {
LAB_ram_4202d080:
    puVar3 = (undefined1 *)((int)&uStack_80 + 3);
LAB_ram_4202d050:
    uStack_80 = 0;
    uStack_84 = 0;
    for (iVar1 = 0; *puVar3 = (char)iVar1, iVar1 != 0x100; iVar1 = iVar1 + 1) {
      iVar2 = FUN_ram_4202cd92(param_1,&uStack_84,auStack_78);
      if (iVar2 != 0) {
        if (iVar2 != 5) {
          return iVar2;
        }
        break;
      }
      if ((param_2 != (code *)0x0) && (iVar2 = (*param_2)(param_1,auStack_78,param_3), iVar2 != 0))
      break;
    }
    iVar1 = 0;
  }
  else {
    if (param_1 < 7) {
      if (param_1 < 3) {
        if (0 < param_1) goto LAB_ram_4202d080;
      }
      else if (param_1 == 3) {
        puVar3 = (undefined1 *)((int)&uStack_7c + 2);
        goto LAB_ram_4202d050;
      }
    }
    else if ((param_1 == 7) || (param_1 == 8)) goto LAB_ram_4202d080;
    iVar1 = 3;
  }
  return iVar1;
}

