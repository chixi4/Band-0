
int FUN_ram_4202db3e(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  bool bVar4;
  byte bStack_31;
  undefined4 uStack_30;
  ushort uStack_2c;
  ushort uStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  undefined4 uStack_24;
  
  iVar1 = FUN_ram_4202d598(param_3,8);
  if (iVar1 == 0) {
    iVar1 = 10;
    if ((*(short *)(*param_3 + 0x10) == 8) &&
       (iVar1 = FUN_ram_42036d04(param_1,&bStack_31), iVar1 == 0)) {
      if ((~bStack_31 & 1) == 0) {
        puVar3 = *(ushort **)*param_3;
        uStack_2c = *puVar3;
        uStack_2a = puVar3[1];
        uStack_28 = puVar3[2];
        uStack_26 = puVar3[3];
        uStack_24 = 0;
        if (((((ushort)(uStack_2c - 6) < 0xc7b) && ((ushort)(uStack_2a - 6) < 0xc7b)) &&
            (uStack_2c <= uStack_2a)) &&
           (((uStack_28 < 500 && ((ushort)(uStack_26 - 10) < 0xc77)) &&
            (iVar1 = FUN_ram_4202e5d2(param_1,&uStack_2c), iVar1 == 0)))) {
          iVar1 = FUN_ram_4202f488(param_1,&uStack_2c);
          bVar4 = iVar1 != 0;
        }
        else {
          bVar4 = true;
        }
        iVar2 = FUN_ram_4203698e(0x13,*(undefined1 *)(param_2 + 1),2,&uStack_30);
        iVar1 = 0;
        if (iVar2 != 0) {
          *(bool *)iVar2 = bVar4;
          *(undefined1 *)(iVar2 + 1) = 0;
          FUN_ram_42036924(param_1,uStack_30);
        }
      }
      else {
        iVar1 = 0x10;
      }
    }
  }
  return iVar1;
}

