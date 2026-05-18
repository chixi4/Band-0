
undefined4
FUN_ram_420245ce(undefined4 param_1,int param_2,uint *param_3,int param_4,byte *param_5,
                byte *param_6)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  uVar2 = *param_3;
  if (uVar2 < 0x10) {
    pbVar4 = param_6 + param_2;
    for (; param_6 != pbVar4; param_6 = param_6 + 1) {
      if (uVar2 == 0) {
        FUN_ram_42023630(param_1,param_4,param_4);
      }
      bVar1 = *param_5;
      param_5 = param_5 + 1;
      *param_6 = *(byte *)(param_4 + uVar2) ^ bVar1;
      uVar2 = uVar2 + 1 & 0xf;
    }
    *param_3 = uVar2;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffdf;
  }
  return uVar3;
}

