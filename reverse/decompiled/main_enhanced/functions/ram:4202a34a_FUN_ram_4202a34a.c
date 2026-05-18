
void FUN_ram_4202a34a(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  uVar2 = FUN_ram_4202c6a0();
  iVar3 = FUN_ram_4202d4ec();
  if (iVar3 == 0) {
    iVar3 = *param_3;
    *param_3 = 0;
  }
  else {
    iVar4 = FUN_ram_4202d5d8(0xf,0,iVar3);
    if (iVar4 != 0) {
      do {
        if ((*(ushort *)(*param_3 + 0x10) < 2) || (uVar2 <= *(ushort *)(iVar3 + 0x10))) {
          uVar1 = 0;
          iVar4 = 0;
          break;
        }
        uVar5 = FUN_ram_42029616(param_3,2,&uStack_21);
        iVar4 = (int)uVar5;
        if (iVar4 != 0) {
          uVar1 = 0;
          break;
        }
        uVar1 = (*(code *)&SUB_ram_40011938)
                          (*(undefined4 *)*param_3,(int)((ulonglong)uVar5 >> 0x20),0);
        (*(code *)&SUB_ram_400119dc)(*param_3,2);
        iVar4 = FUN_ram_42029a16(param_1,uVar1,0,iVar3,&uStack_21);
      } while (iVar4 == 0);
      goto LAB_ram_4202a38c;
    }
  }
  uStack_21 = 0x11;
  uVar1 = 0;
  iVar4 = 6;
LAB_ram_4202a38c:
  FUN_ram_42029b02(param_1,param_2,iVar4,iVar3,0xe,uStack_21,uVar1);
  return;
}

