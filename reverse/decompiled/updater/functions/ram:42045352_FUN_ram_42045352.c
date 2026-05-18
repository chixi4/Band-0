
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42045352(int param_1,undefined4 param_2,uint param_3,undefined1 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(_DAT_ram_3fcdfb20 + 0x46);
    uVar2 = 0;
    if ((bVar1 & 1) != 0) {
      if (param_3 < 0x20) {
        uVar7 = 0;
        bVar3 = 0;
        bVar9 = 0;
        uVar6 = 0;
        while( true ) {
          if (*(byte *)(_DAT_ram_3fcdfb20 + 0x110) <= uVar7) break;
          iVar4 = _DAT_ram_3fcdfb20 + uVar7 * 0x24;
          iVar5 = _DAT_ram_3fcdfb20 + uVar7 * 0x24 + 0xa4;
          bVar8 = *(char *)(iVar4 + 0xc5) + 1;
          *(char *)(iVar4 + 0xc5) = *(char *)(iVar4 + 0xc5) + '\x01';
          iVar5 = FUN_ram_4039a1de(param_1,iVar5,0x20);
          if (iVar5 == 0) {
            *(undefined1 *)(iVar4 + 0xc5) = 0;
            *(char *)(iVar4 + 0xc6) = (char)param_2;
            *(undefined1 *)(iVar4 + 199) = param_4;
            FUN_ram_42033fd8(1,8,5,0x3c07f4b8,param_1,param_2);
            bVar3 = bVar1 & 1;
          }
          else if ((bVar3 == 0) && (bVar9 < bVar8)) {
            uVar6 = uVar7;
            bVar9 = bVar8;
          }
          uVar7 = uVar7 + 1 & 0xff;
        }
        uVar2 = 1;
        if (bVar3 == 0) {
          if (*(byte *)(_DAT_ram_3fcdfb20 + 0x110) < 3) {
            FUN_ram_42033fd8(1,8,5,0x3c07f4e0);
            uVar6 = (uint)*(byte *)(_DAT_ram_3fcdfb20 + 0x110);
            *(byte *)(_DAT_ram_3fcdfb20 + 0x110) = *(byte *)(_DAT_ram_3fcdfb20 + 0x110) + 1;
          }
          FUN_ram_40399daa(_DAT_ram_3fcdfb20 + uVar6 * 0x24 + 0xa4,param_1,param_3);
          iVar5 = _DAT_ram_3fcdfb20 + uVar6 * 0x24;
          *(undefined1 *)((param_3 + 1 & 0xff) + iVar5 + 0xa4) = 0;
          *(char *)(iVar5 + 0xc6) = (char)param_2;
          *(undefined1 *)(iVar5 + 0xc5) = 0;
          *(undefined1 *)(iVar5 + 199) = param_4;
          FUN_ram_42033fd8(1,8,5,0x3c07f508,param_1,param_2);
          uVar2 = 1;
        }
      }
      else {
        FUN_ram_42033fd8(1,8,5,0x3c07f488,param_3,param_1,param_2);
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  return 0;
}

