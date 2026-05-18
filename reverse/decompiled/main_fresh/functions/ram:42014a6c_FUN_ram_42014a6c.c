
void FUN_ram_42014a6c(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  do {
    uVar7 = FUN_ram_403919ae();
    iVar4 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    puVar1 = (undefined4 *)(gp + -0x4e0);
    do {
      iVar3 = FUN_ram_42048196(*puVar1);
      if (iVar3 == 0) {
        if (*(char *)(puVar1 + 6) == '\0') {
          *(undefined1 *)(puVar1 + 6) = 1;
          *(undefined8 *)(puVar1 + 4) = uVar7;
          *(undefined1 *)((int)puVar1 + 0x19) = 0;
        }
        else if (*(char *)((int)puVar1 + 0x19) == '\0') {
          uVar5 = (uint)(uVar2 < uVar2 - puVar1[4]);
          uVar6 = iVar4 - puVar1[5];
          if ((0 < (int)(uVar6 - uVar5)) || ((uVar6 == uVar5 && (800000 < uVar2 - puVar1[4])))) {
            FUN_ram_42014a46();
            FUN_ram_42015564();
            uStack_38 = puVar1[2];
            uStack_3c = 1;
            uStack_34 = 1;
            FUN_ram_42018d20(&uStack_3c);
            *(undefined1 *)((int)puVar1 + 0x19) = 1;
          }
        }
      }
      else if ((*(char *)(puVar1 + 6) != '\0') &&
              (*(undefined1 *)(puVar1 + 6) = 0, *(char *)((int)puVar1 + 0x19) == '\0')) {
        uVar5 = (uint)(uVar2 < uVar2 - puVar1[4]);
        uVar6 = iVar4 - puVar1[5];
        if ((0 < (int)(uVar6 - uVar5)) || ((uVar6 == uVar5 && (50000 < uVar2 - puVar1[4])))) {
          FUN_ram_42014a46();
          FUN_ram_42015564();
          uStack_38 = puVar1[1];
          uStack_3c = 1;
          uStack_34 = 0;
          FUN_ram_42018d20(&uStack_3c);
        }
      }
      puVar1 = puVar1 + 8;
    } while (puVar1 != (undefined4 *)(gp + -0x4a0));
    FUN_ram_40398498(1);
  } while( true );
}

