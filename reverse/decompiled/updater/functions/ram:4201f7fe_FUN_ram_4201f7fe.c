
void FUN_ram_4201f7fe(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  uint auStack_14 [2];
  
  pcVar2 = *(code **)(**(int **)(param_1 + 0x50) + 0x14);
  auStack_14[0] = param_2;
  iVar1 = (*pcVar2)(*(int **)(param_1 + 0x50),*(undefined4 *)(param_1 + 8),auStack_14,4,param_5,
                    pcVar2);
  *(uint *)(param_1 + 0xc) = param_2 & -(uint)(iVar1 == 0);
  return;
}

