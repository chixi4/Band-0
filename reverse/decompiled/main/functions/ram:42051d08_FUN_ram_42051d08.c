
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42051d08(void)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *apuStack_24 [3];
  
  FUN_ram_4205ca0a(3);
  if (_DAT_ram_3fcc52bc != (code *)0x0) {
    (*_DAT_ram_3fcc52bc)(_DAT_ram_3fcc52b8);
  }
LAB_ram_42051d38:
  do {
    iVar3 = FUN_ram_42058722();
    if (iVar3 != -1) goto LAB_ram_42051d5a;
    FUN_ram_4205c824(&DAT_ram_3fcc52b4,apuStack_24,0);
    do {
      puVar1 = apuStack_24[0];
      if (apuStack_24[0] != (uint *)0x0) {
        uVar5 = *apuStack_24[0];
        if (uVar5 == 3) {
          (*(code *)apuStack_24[0][1])(apuStack_24[0][2]);
          uVar4 = 7;
LAB_ram_42051dce:
          FUN_ram_420531f8(uVar4,puVar1);
        }
        else {
          if (uVar5 < 4) {
            if (uVar5 != 1) {
              if (uVar5 != 2) goto LAB_ram_42051d88;
              iVar3 = (*(code *)apuStack_24[0][3])(apuStack_24[0][1],apuStack_24[0][2]);
              if (iVar3 != 0) {
                FUN_ram_42053ac4(puVar1[1]);
              }
              uVar4 = 8;
              goto LAB_ram_42051dce;
            }
            puVar6 = (undefined1 *)apuStack_24[0][2];
            uVar2 = (*(code *)apuStack_24[0][1])(puVar6);
            *puVar6 = uVar2;
          }
          else {
            if (uVar5 == 4) {
LAB_ram_42051d88:
              (*(code *)apuStack_24[0][1])(apuStack_24[0][2]);
              goto LAB_ram_42051d38;
            }
            if (uVar5 != 5) goto LAB_ram_42051d52;
            (*(code *)apuStack_24[0][1])(apuStack_24[0][2]);
          }
          FUN_ram_4205c6fa(puVar1[3]);
        }
        goto LAB_ram_42051d38;
      }
LAB_ram_42051d52:
      iVar3 = FUN_ram_4039bf1e();
LAB_ram_42051d5a:
    } while ((iVar3 != 0) && (iVar3 = FUN_ram_4205c824(&DAT_ram_3fcc52b4,apuStack_24), iVar3 != -1))
    ;
    FUN_ram_420586c8();
  } while( true );
}

