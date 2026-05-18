
undefined4 FUN_ram_42035988(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [64];
  
  cVar1 = param_2[1];
  FUN_ram_420358aa(auStack_50,param_1);
  FUN_ram_420358aa(auStack_50 + *param_2 * 4,param_1 + cVar1);
  iVar2 = FUN_ram_4203513c(auStack_50,param_2 + 0x44,0x10);
  if (iVar2 == 0) {
    uVar3 = 0xfffffffc;
  }
  else {
    uVar3 = FUN_ram_4203590a(auStack_50,param_2);
  }
  return uVar3;
}

