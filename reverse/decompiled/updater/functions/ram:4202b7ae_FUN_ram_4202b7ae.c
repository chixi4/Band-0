
undefined4
FUN_ram_4202b7ae(undefined4 param_1,int param_2,uint *param_3,char *param_4,int param_5,
                byte *param_6,byte *param_7)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *pbVar7;
  
  uVar4 = *param_3;
  if (uVar4 < 0x10) {
    pbVar7 = param_7 + param_2;
    for (; param_7 != pbVar7; param_7 = param_7 + 1) {
      if (uVar4 == 0) {
        FUN_ram_4202b3f6(param_1,param_4,param_5);
        pcVar6 = param_4 + 0xf;
        do {
          cVar2 = *pcVar6;
          *pcVar6 = cVar2 + '\x01';
          if (cVar2 != -1) break;
          bVar1 = param_4 != pcVar6;
          pcVar6 = pcVar6 + -1;
        } while (bVar1);
      }
      bVar3 = *param_6;
      param_6 = param_6 + 1;
      *param_7 = *(byte *)(param_5 + uVar4) ^ bVar3;
      uVar4 = uVar4 + 1 & 0xf;
    }
    *param_3 = uVar4;
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffa4;
  }
  return uVar5;
}

