
void FUN_ram_420507da(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)&DAT_ram_3fcb57f8;
  do {
    if (((code *)*puVar1 != (code *)0x0) && (*(byte *)(puVar1 + 2) == param_1)) {
      (*(code *)*puVar1)(param_1 * 0x114 + 0x3fcb583a,param_2,puVar1[1]);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 3;
  } while (puVar1 != (undefined4 *)0x3fcb5828);
  iVar2 = 0x3fcb5828;
  uVar3 = 0;
  while (((param_1 == uVar3 || (*(char *)(iVar2 + 0xc) != '\x02')) ||
         (*(char *)(iVar2 + 0x11) != (&DAT_ram_3fcb5839)[param_1 * 0x114]))) {
    uVar3 = uVar3 + 1 & 0xff;
    iVar2 = iVar2 + 0x114;
    if (uVar3 == 4) {
LAB_ram_42050860:
      iVar2 = param_1 * 0x114;
      if ((byte)(&DAT_ram_3fcb5839)[iVar2] < 4) {
        FUN_ram_4205611a(*(undefined4 *)
                          (&DAT_ram_3fcb5c78 + (uint)(byte)(&DAT_ram_3fcb5839)[iVar2] * 4));
        *(undefined4 *)(&DAT_ram_3fcb5c78 + (uint)(byte)(&DAT_ram_3fcb5839)[iVar2] * 4) = 0;
        (&DAT_ram_3fcb5839)[iVar2] = 4;
      }
      return;
    }
  }
  (&DAT_ram_3fcb5839)[param_1 * 0x114] = 4;
  goto LAB_ram_42050860;
}

