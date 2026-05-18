
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208191a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar1 = _DAT_ram_3fcc2fd8;
  if (0x17 < _DAT_ram_3fcc2fd8 - 2U) {
    FUN_ram_4207a038(1,1,2,&DAT_ram_3c101d7c,_DAT_ram_3fcc2fd8,10);
    iVar1 = 10;
  }
  iVar3 = FUN_ram_42095ef0();
  uVar2 = 0;
  if (iVar3 == 0) {
    uVar2 = FUN_ram_42095f08();
  }
  FUN_ram_4207a038(1,1,3,&DAT_ram_3c0ffaf8,&DAT_ram_3c0c4728);
  FUN_ram_4207a038(1,1,3,&DAT_ram_3c0ffb14,7,0);
  if (*(int *)(param_1 + 0x60) == 0) {
    puVar4 = &DAT_ram_3c0c471c;
  }
  else {
    puVar4 = &DAT_ram_3c0c4714;
  }
  FUN_ram_4207a038(1,1,3,&DAT_ram_3c0ffb38,puVar4);
  if (*(int *)(param_1 + 100) == 0) {
    puVar4 = &DAT_ram_3c0c471c;
  }
  else {
    puVar4 = &DAT_ram_3c0c4714;
  }
  FUN_ram_4207a038(1,1,3,&DAT_ram_3c0ffb50,puVar4);
  thunk_FUN_ram_42094d76((*(ushort *)(*(int *)(gp + -0xb4) + 0x3f8) / 100) * 0x19000);
  iVar1 = FUN_ram_420928f0(iVar1,uVar2,1);
  if (iVar1 != 0) {
    FUN_ram_420928cc();
  }
  return iVar1;
}

