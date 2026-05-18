
void FUN_ram_4203dba6(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_18 [8];
  
  iVar2 = *(int *)(gp + -0x2b8);
  pcVar1 = (char *)FUN_ram_42033916();
  (*(code *)&SUB_ram_40011fd0)(0,auStack_18);
  if (*(char *)(param_1 + 0xab) == *pcVar1) {
    FUN_ram_420330b2(param_1,auStack_18,param_1 + 4,param_1 + 4,iVar2 + 8,*(undefined1 *)(iVar2 + 4)
                     ,0,0);
  }
  else {
    FUN_ram_42033e6c(param_1 + 0xab,0,0,0x4202dba6,0,param_1);
  }
  return;
}

