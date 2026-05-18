
int FUN_ram_4204ad72(uint param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_ram_4039cf38(0,5,0);
  if (iVar3 == 0) {
    FUN_ram_42033fd8(6,0x40,2,&DAT_ram_3c0800a4);
  }
  else {
    iVar1 = param_1 * 0x28;
    *(undefined2 *)(iVar3 + 0x16) = 0x18;
    puVar2 = (uint *)(iVar1 + 0x3fcdfc84);
    *(uint **)(iVar3 + 4) = puVar2;
    *puVar2 = *puVar2 & 0xfffff000 | 0x18;
    *(uint **)(iVar3 + 8) = puVar2;
    *(undefined2 *)(iVar3 + 0xc) = 1;
    *(uint *)(*(int *)(iVar3 + 0x24) + 4) =
         *(uint *)(*(int *)(iVar3 + 0x24) + 4) & 0xffffff0f | (param_1 & 0xf) << 4;
    uVar4 = (*(code *)&SUB_ram_40011c70)(0,0);
    *(undefined4 *)(iVar3 + 0x1c) = uVar4;
    FUN_ram_4039b45c(uVar4,*(undefined4 *)(iVar3 + 0x24));
    (*(code *)&SUB_ram_40011bd0)(iVar3);
    *(uint *)(iVar1 + 0x3fcdfc90) =
         *(ushort *)(iVar3 + 0x16) & 0x3fff | *(uint *)(iVar1 + 0x3fcdfc90) & 0x1fffc000;
    *(undefined2 *)(iVar1 + 0x3fcdfc94) = 0;
    *(undefined2 *)(iVar1 + 0x3fcdfc98) = 0x84;
  }
  return iVar3;
}

