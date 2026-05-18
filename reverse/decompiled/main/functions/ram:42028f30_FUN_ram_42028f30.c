
undefined4
FUN_ram_42028f30(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined2 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 auStack_58 [4];
  undefined2 *puStack_48;
  byte bStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  (*(code *)&SUB_ram_40010488)(auStack_58,0,0x18);
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420279b4(param_1,0xff,0xffffffff,0);
  uVar1 = 2;
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4202710e();
    uVar1 = 6;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0xd) = 6;
      *(short *)(iVar2 + 10) = (short)param_1;
      *(undefined1 *)(iVar2 + 0xf) = param_2;
      bVar3 = *(byte *)(iVar2 + 8) | 9;
      if (param_7 == 0) {
        bVar3 = *(byte *)(iVar2 + 8) | 1;
      }
      *(byte *)(iVar2 + 8) = bVar3;
      FUN_ram_42026fba();
      uStack_40 = (short)param_1;
      uStack_3e = param_4;
      uStack_38 = param_5;
      uStack_34 = param_6;
      FUN_ram_4039c11e(auStack_30,param_3,0x10);
      bStack_44 = bStack_44 | 1;
      puStack_48 = &uStack_40;
      uVar1 = auStack_58[0];
    }
  }
  auStack_58[0] = uVar1;
  thunk_FUN_ram_4202b7f6();
  FUN_ram_42028608(param_1,auStack_58,1);
  return auStack_58[0];
}

