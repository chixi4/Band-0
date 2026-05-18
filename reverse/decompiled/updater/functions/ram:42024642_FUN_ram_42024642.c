
undefined4
FUN_ram_42024642(undefined4 param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5,
                int param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *param_3;
  if (uVar8 < 0x10) {
    for (uVar7 = 0; uVar7 < param_2; uVar7 = uVar7 + uVar5) {
      uVar6 = 0x10 - uVar8;
      if (uVar8 == 0) {
        FUN_ram_42023630(param_1,param_4,param_5);
        puVar1 = param_4 + 3;
        while( true ) {
          iVar3 = (*(code *)&SUB_ram_400108cc)(*puVar1);
          uVar2 = (*(code *)&SUB_ram_400108cc)(iVar3 + 1);
          *(char *)((int)puVar1 + 1) = (char)((uint)uVar2 >> 8);
          *(char *)puVar1 = (char)uVar2;
          *(char *)((int)puVar1 + 2) = (char)((uint)uVar2 >> 0x10);
          *(char *)((int)puVar1 + 3) = (char)((uint)uVar2 >> 0x18);
          if ((iVar3 + 1 != 0) || (param_4 == puVar1)) break;
          puVar1 = puVar1 + -1;
        }
        uVar6 = 0x10;
      }
      uVar5 = param_2 - uVar7;
      if (uVar6 < param_2 - uVar7) {
        uVar5 = uVar6;
      }
      uVar6 = 0;
      do {
        iVar4 = uVar7 + uVar6;
        iVar3 = uVar8 + uVar6;
        uVar6 = uVar6 + 1;
        *(byte *)(param_7 + iVar4) = *(byte *)(iVar4 + param_6) ^ *(byte *)(iVar3 + param_5);
      } while (uVar5 != uVar6);
      uVar8 = 0;
    }
    uVar2 = 0;
    *param_3 = param_2 + *param_3 & 0xf;
  }
  else {
    uVar2 = 0xffffffdf;
  }
  return uVar2;
}

