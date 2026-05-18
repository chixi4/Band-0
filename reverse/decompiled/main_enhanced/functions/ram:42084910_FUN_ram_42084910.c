
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42084910(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  
  iVar2 = FUN_ram_4208387a();
  if (iVar2 == 0) {
    return 0x3001;
  }
  if (DAT_ram_3fcc41a9 < 2) {
    return 0x3002;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  uVar6 = (uint)DAT_ram_3fcc3054;
  if ((uVar6 + 1 & 0xff) == 0x80) {
    DAT_ram_3fcc3054 = 0;
  }
  else {
    DAT_ram_3fcc3054 = (byte)(uVar6 + 1);
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  FUN_ram_4208f5ee(uVar6);
  if (param_1 == 0) {
    puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 5;
      *(undefined4 *)(puVar3 + 4) = 0x42071e1c;
      *(undefined2 *)(puVar3 + 8) = 1;
      puVar3[10] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      goto LAB_ram_42084a10;
    }
  }
  else {
    if ((*(char *)(param_1 + 8) != '\0') && (iVar2 = FUN_ram_4208ba1c(), iVar2 == 0)) {
      FUN_ram_4207a038(1,4,1,&DAT_ram_3c0feef0,*(undefined1 *)(param_1 + 8),
                       *(undefined4 *)(*(int *)(gp + -0xb4) + 0x518));
      return 0x102;
    }
    puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x44);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 5;
      *(undefined4 *)(puVar3 + 4) = 0x42071e1c;
      *(undefined2 *)(puVar3 + 8) = 0;
      puVar3[10] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      FUN_ram_4039c11e(puVar3 + 0x14,param_1,0x2c);
LAB_ram_42084a10:
      iVar2 = FUN_ram_42082b56(puVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (param_2 == 0) {
        return 0;
      }
      uVar4 = FUN_ram_4208480e(param_1);
      uVar1 = 0;
      while( true ) {
        uVar5 = FUN_ram_4208f64e();
        if ((char)uVar5 < '\0') {
          return 0;
        }
        if (uVar6 != uVar5) break;
        pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x9c);
        uVar1 = uVar1 + 1 & 0xff;
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xa0))(100);
        (*pcVar7)();
        if (uVar1 == uVar4) {
          FUN_ram_4207a038(1,10,5,
                           "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..." /* TRUNCATED STRING LITERAL */
                          );
          return 0x300c;
        }
      }
      FUN_ram_4207a038(1,10,2,&DAT_ram_3c101e24);
      return -1;
    }
  }
  return 0x101;
}

