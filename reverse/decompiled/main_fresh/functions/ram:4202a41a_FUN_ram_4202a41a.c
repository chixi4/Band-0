
void FUN_ram_4202a41a(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uStack_33;
  ushort auStack_32 [3];
  
  uStack_33 = 0;
  uVar2 = FUN_ram_4202c6a0();
  iVar3 = FUN_ram_4202d4ec();
  if (iVar3 == 0) {
    iVar3 = *param_3;
    *param_3 = 0;
  }
  else {
    iVar4 = FUN_ram_4202d5d8(0x21,0,iVar3);
    if ((iVar4 != 0) && (iVar4 = (*(code *)&SUB_ram_40011a88)(2,0), iVar4 != 0)) {
      while ((1 < *(ushort *)(*param_3 + 0x10) && (*(ushort *)(iVar3 + 0x10) < uVar2))) {
        iVar1 = FUN_ram_42029616(param_3,2,&uStack_33);
        if (iVar1 != 0) {
LAB_ram_4202a556:
          uVar5 = 0;
          goto LAB_ram_4202a558;
        }
        uVar5 = (*(code *)&SUB_ram_40011938)(*(undefined4 *)*param_3);
        (*(code *)&SUB_ram_400119dc)(*param_3,2);
        iVar1 = FUN_ram_42029a16(param_1,uVar5,0,iVar4,&uStack_33);
        if (iVar1 != 0) goto LAB_ram_4202a558;
        uVar6 = (uint)*(ushort *)(iVar4 + 0x10);
        if ((int)uVar2 < (int)(*(ushort *)(iVar3 + 0x10) + 2 + uVar6)) goto LAB_ram_4202a556;
        auStack_32[0] = *(ushort *)(iVar4 + 0x10);
        iVar1 = FUN_ram_403a3150(iVar3,auStack_32,2);
        if (iVar1 != 0) goto LAB_ram_4202a558;
        if (uVar6 != 0) {
          iVar1 = (*(code *)&SUB_ram_400119e4)(iVar3,iVar4,0,uVar6);
          if (iVar1 != 0) goto LAB_ram_4202a558;
          (*(code *)&SUB_ram_400119dc)(iVar4,uVar6);
        }
      }
      uVar5 = 0;
      iVar1 = 0;
LAB_ram_4202a558:
      (*(code *)&SUB_ram_40011a08)(iVar4);
      goto LAB_ram_4202a462;
    }
  }
  uStack_33 = 0x11;
  uVar5 = 0;
  iVar1 = 6;
LAB_ram_4202a462:
  FUN_ram_42029b02(param_1,param_2,iVar1,iVar3,0x20,uStack_33,uVar5);
  return;
}

