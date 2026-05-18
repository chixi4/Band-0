
int FUN_ram_42028e04(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int aiStack_28 [5];
  byte bStack_14;
  
  (*(code *)&SUB_ram_40010488)(aiStack_28,0);
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420279b4(param_1,0xff,0xffffffff,0);
  thunk_FUN_ram_4202b7f6();
  iVar2 = 2;
  if ((iVar1 == 0) && (iVar2 = FUN_ram_420278f6(param_1), iVar2 == 0)) {
    iVar2 = FUN_ram_4202710e();
    if (iVar2 == 0) {
      aiStack_28[0] = 6;
      iVar2 = aiStack_28[0];
    }
    else {
      *(short *)(iVar2 + 10) = (short)param_1;
      *(undefined1 *)(iVar2 + 0xd) = 0;
      *(byte *)(iVar2 + 8) = *(byte *)(iVar2 + 8) | 1;
      thunk_FUN_ram_4202b7dc();
      FUN_ram_42026fba(iVar2);
      thunk_FUN_ram_4202b7f6();
      bStack_14 = bStack_14 | 1;
      FUN_ram_42028608(param_1,aiStack_28,1);
      iVar2 = aiStack_28[0];
    }
  }
  return iVar2;
}

