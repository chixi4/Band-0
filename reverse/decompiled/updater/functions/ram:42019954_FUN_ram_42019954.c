
int FUN_ram_42019954(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int aiStack_14 [3];
  
  iVar1 = param_1 - (param_1 & 0xffff8000);
  aiStack_14[0] = 0;
  iVar2 = FUN_ram_4201a556(param_1 & 0xffff8000,param_2 + iVar1,0,aiStack_14,param_5 + 0x6bc);
  if (iVar2 == 0) {
    aiStack_14[0] = aiStack_14[0] + iVar1;
  }
  else {
    aiStack_14[0] = 0;
  }
  return aiStack_14[0];
}

