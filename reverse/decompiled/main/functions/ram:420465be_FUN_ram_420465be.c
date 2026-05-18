
undefined4 FUN_ram_420465be(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = param_1[1];
  iVar2 = iVar6 * 4 + 0x11;
  iVar1 = FUN_ram_4039c08e(1);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4039c08e(1,(iVar2 * iVar2 + 7 >> 3) + 1);
    if (iVar2 != 0) {
      uVar3 = param_1[2];
      if ((uVar3 != 2) && (uVar3 != 3)) {
        uVar3 = (uint)(uVar3 == 1);
      }
      iVar6 = FUN_ram_4204795e(param_2,iVar2,iVar1,uVar3,1,iVar6,0xffffffff);
      uVar5 = 0xffffffff;
      if ((iVar6 != 0) && (pcVar4 = (code *)*param_1, pcVar4 != (code *)0x0)) {
        if (param_1[3] == 0) {
          (*pcVar4)(iVar1);
        }
        else {
          (*pcVar4)(iVar1);
        }
        uVar5 = 0;
      }
      thunk_FUN_ram_40390634(iVar1);
      thunk_FUN_ram_40390634(iVar2);
      return uVar5;
    }
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0x101;
}

