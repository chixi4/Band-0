
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420496d8(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int aiStack_14 [3];
  
  if (_DAT_ram_3fcc51e0 != 0) {
    return 0;
  }
  iVar1 = param_1 - (param_1 & 0xffff8000);
  aiStack_14[0] = 0;
  iVar2 = FUN_ram_4204a320(param_1 & 0xffff8000,param_2 + iVar1,0,aiStack_14,&DAT_ram_3fcc51e0);
  if (iVar2 == 0) {
    aiStack_14[0] = aiStack_14[0] + iVar1;
  }
  else {
    aiStack_14[0] = 0;
  }
  return aiStack_14[0];
}

