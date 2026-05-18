
void FUN_ram_42022b06(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     uint param_5,ushort param_6,undefined4 param_7)

{
  byte local_50;
  undefined1 auStack_4f [13];
  ushort uStack_42;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  local_50 = (byte)((param_2 - 2U >> 1) << 3) | (param_5 != 0) << 6 | 1;
  FUN_ram_40399daa(auStack_4f,param_3,0xd);
  uStack_42 = param_6 >> 8 | param_6 << 8;
  FUN_ram_42021c38(param_1,&local_50,param_7);
  if (param_5 != 0) {
    auStack_40[0] = 0;
    auStack_40[1] = (undefined1)param_5;
    FUN_ram_40399daa(auStack_40 + 2,param_4,param_5);
    (*(code *)&SUB_ram_40010488)(auStack_40 + param_5 + 2,0,0x1e - param_5);
    FUN_ram_420229a8(auStack_40,param_7);
    FUN_ram_42021c38(param_1,auStack_40,param_7);
    if (0xe < param_5) {
      FUN_ram_420229a8(auStack_30,param_7);
      FUN_ram_42021c38(param_1,auStack_30,param_7);
    }
  }
  return;
}

