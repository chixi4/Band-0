
undefined4
FUN_ram_42067e20(undefined4 param_1,uint param_2,int param_3,uint *param_4,int param_5,byte *param_6
                ,byte *param_7)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  if (param_2 < 2) {
    uVar2 = *param_4;
    uVar3 = 0xffffffdf;
    if (uVar2 < 0x10) {
      pbVar4 = param_7 + param_3;
      if (param_2 == 0) {
        for (; param_7 != pbVar4; param_7 = param_7 + 1) {
          if (uVar2 == 0) {
            FUN_ram_42066f34(param_1,param_5,param_5);
          }
          bVar1 = *param_6;
          *param_7 = *(byte *)(param_5 + uVar2) ^ bVar1;
          param_6 = param_6 + 1;
          *(byte *)(param_5 + uVar2) = bVar1;
          uVar2 = uVar2 + 1 & 0xf;
        }
      }
      else {
        for (; param_7 != pbVar4; param_7 = param_7 + 1) {
          if (uVar2 == 0) {
            FUN_ram_42066f34(param_1,param_5,param_5);
          }
          bVar1 = *(byte *)(param_5 + uVar2) ^ *param_6;
          *param_7 = bVar1;
          param_6 = param_6 + 1;
          *(byte *)(param_5 + uVar2) = bVar1;
          uVar2 = uVar2 + 1 & 0xf;
        }
      }
      *param_4 = uVar2;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffdf;
  }
  return uVar3;
}

