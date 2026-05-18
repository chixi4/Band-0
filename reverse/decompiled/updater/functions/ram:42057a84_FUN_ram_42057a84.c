
undefined4
FUN_ram_42057a84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_ram_42051d86(0xe,0x1c,0x280);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    puVar1 = *(undefined1 **)(iVar3 + 4);
    uVar2 = FUN_ram_4205073e(param_8);
    puVar1[7] = (char)((ushort)uVar2 >> 8);
    puVar1[6] = (char)uVar2;
    FUN_ram_40399daa(puVar1 + 8,param_4,6);
    FUN_ram_40399daa(puVar1 + 0x12,param_6,6);
    FUN_ram_40399daa(puVar1 + 0xe,param_5,4);
    FUN_ram_40399daa(puVar1 + 0x18,param_7,4);
    puVar1[1] = 1;
    puVar1[2] = 8;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[4] = 6;
    puVar1[5] = 4;
    FUN_ram_42059422(param_1,iVar3,param_2,param_3,0x806);
    FUN_ram_42051d02(iVar3);
    uVar4 = 0;
  }
  return uVar4;
}

