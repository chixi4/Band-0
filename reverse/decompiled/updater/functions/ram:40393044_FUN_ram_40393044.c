
void FUN_ram_40393044(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_ram_40392fce(2);
  puVar6 = (undefined4 *)&DAT_ram_3fcb0f9c;
  FUN_ram_42033fd8(1,0x20,3,0x3c07eec4,param_1,param_2);
  do {
    FUN_ram_42033fd8(1,0x20,3,0x3c07eed4,*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6[4],puVar6[5]);
    puVar3 = puVar6 + 10;
    puVar1 = puVar6 + 9;
    puVar2 = puVar6 + 8;
    puVar4 = puVar6 + 6;
    puVar5 = puVar6 + 7;
    puVar6 = puVar6 + 0xb;
    FUN_ram_42033fd8(1,0x20,3,0x3c07eeec,*puVar4,*puVar5,*puVar2,*puVar1,*puVar3);
  } while (puVar6 != (undefined4 *)&DAT_ram_3fcb1020);
  return;
}

