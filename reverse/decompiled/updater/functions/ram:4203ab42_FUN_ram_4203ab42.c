
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203ab42(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_3fcb3f50;
  if (0x17 < _DAT_ram_3fcb3f50 - 2U) {
    FUN_ram_42033fd8(1,1,2,0x3c07fd7c,_DAT_ram_3fcb3f50,10);
    iVar1 = 10;
  }
  iVar3 = FUN_ram_4204d452();
  uVar2 = 0;
  if (iVar3 == 0) {
    uVar2 = FUN_ram_4204d46a();
  }
  FUN_ram_42033fd8(1,1,3,0x3c07e160,0x3c072bcc);
  FUN_ram_42033fd8(1,1,3,0x3c07e17c,7,0);
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar4 = 0x3c072bc0;
  }
  else {
    uVar4 = 0x3c072bb8;
  }
  FUN_ram_42033fd8(1,1,3,0x3c07e1a0,uVar4);
  if (*(int *)(param_1 + 100) == 0) {
    uVar4 = 0x3c072bc0;
  }
  else {
    uVar4 = 0x3c072bb8;
  }
  FUN_ram_42033fd8(1,1,3,0x3c07e1b8,uVar4);
  thunk_FUN_ram_4204c342((*(ushort *)(*(int *)(gp + -0x2b8) + 0x3f8) / 100) * 0x19000);
  iVar1 = FUN_ram_42049edc(iVar1,uVar2,1);
  if (iVar1 != 0) {
    FUN_ram_42049eb8();
  }
  return iVar1;
}

