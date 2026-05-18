
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203cdb6(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  
  iVar2 = FUN_ram_4203bf94();
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0x18);
    if (puVar3 == (undefined1 *)0x0) {
      FUN_ram_4203bf68();
      FUN_ram_42033fd8(6,2,1,0x3c07d72c);
      iVar2 = 0x101;
    }
    else if (DAT_ram_3fcb3fc8 == '\0') {
      DAT_ram_3fcb3fc8 = 1;
      FUN_ram_4203bf68();
      FUN_ram_42040c66();
      *puVar3 = 2;
      *(undefined4 *)(puVar3 + 4) = 0x4202adc8;
      puVar3[8] = 0;
      iVar2 = FUN_ram_4203b75a(puVar3);
      if (iVar2 != 0x3001) {
        if (iVar2 == 0x3002) {
          iVar2 = 0;
        }
        else {
          uVar1 = 0;
          do {
            puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0x18);
            if (puVar3 == (undefined1 *)0x0) {
              uVar6 = 0x3c07d748;
              uVar5 = 0x40;
              uVar4 = 6;
              goto LAB_ram_4203ceac;
            }
            *puVar3 = 2;
            puVar3[8] = 1;
            *(undefined4 *)(puVar3 + 4) = 0x4202adc8;
            iVar2 = FUN_ram_4203b75a();
            if (iVar2 == 0) goto LAB_ram_4203cf12;
            uVar1 = uVar1 + 1;
            pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x9c);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xa0))(10);
            (*pcVar7)();
            if (uVar1 % 500 == 0) {
              FUN_ram_42033fd8(6,0x40,2,0x3c07fde8,uVar1,_DAT_ram_60047ca0);
            }
          } while (uVar1 != 500);
          FUN_ram_42033fd8(6,0x40,2,0x3c07fe0c);
LAB_ram_4203cf12:
          puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0x18);
          if (puVar3 == (undefined1 *)0x0) {
            uVar6 = 0x3c07d76c;
            uVar5 = 2;
            uVar4 = 1;
LAB_ram_4203ceac:
            FUN_ram_42033fd8(uVar4,uVar5,1,uVar6);
            iVar2 = 0x101;
          }
          else {
            *puVar3 = 2;
            puVar3[8] = 2;
            *(undefined4 *)(puVar3 + 4) = 0x4202adc8;
            iVar2 = FUN_ram_4203b75a();
          }
        }
      }
      FUN_ram_4203bf94();
      DAT_ram_3fcb3fc8 = '\0';
      FUN_ram_4203bf68();
    }
    else {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      FUN_ram_4203bf68();
      iVar2 = 0x3014;
    }
  }
  return iVar2;
}

