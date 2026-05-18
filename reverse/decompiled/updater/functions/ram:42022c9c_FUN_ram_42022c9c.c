
int FUN_ram_42022c9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                    int param_9,undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  undefined1 local_60;
  undefined1 auStack_5f [13];
  undefined2 uStack_52;
  byte local_50 [16];
  byte local_40 [24];
  
  if (((param_8 < 0x1f) && (param_4 < 0x11)) && (iVar1 = FUN_ram_42021be0(), iVar1 != 0)) {
    local_60 = 1;
    FUN_ram_40399daa(auStack_5f,param_3,0xd);
    uStack_52 = 0;
    FUN_ram_42021c38(iVar1,&local_60,local_40);
    for (uVar2 = 0; param_4 != uVar2; uVar2 = uVar2 + 1) {
      local_50[uVar2] = *(byte *)(param_9 + uVar2) ^ local_40[uVar2];
    }
    FUN_ram_42022a4c(iVar1,param_5,param_6,param_10,&local_60);
    FUN_ram_42022b06(iVar1,param_4,param_3,param_7,param_8,param_6,local_40);
    FUN_ram_420229ca(iVar1,param_10,param_6,local_40);
    FUN_ram_42021c42(iVar1);
    iVar1 = FUN_ram_40399d6c(local_40,local_50,param_4);
    iVar1 = -(uint)(iVar1 != 0);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

