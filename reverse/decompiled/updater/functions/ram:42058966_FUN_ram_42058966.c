
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42058966(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  short sVar4;
  
  bVar1 = false;
  for (piVar3 = (int *)_DAT_ram_3fcb67ac; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    for (piVar2 = (int *)piVar3[10]; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (*(short *)((int)piVar2 + 10) != 0) {
        sVar4 = *(short *)((int)piVar2 + 10) + -1;
        *(short *)((int)piVar2 + 10) = sVar4;
        if (sVar4 == 0) {
          if (*(char *)((int)piVar2 + 9) == '\x01') {
            if (piVar2[1] != _DAT_ram_3fcb681c) {
              *(undefined1 *)((int)piVar2 + 9) = 2;
              FUN_ram_4205847a(piVar3,piVar2,0x16);
            }
          }
        }
        else {
          bVar1 = true;
        }
      }
    }
  }
  if (bVar1) {
    FUN_ram_4205598a(100,0x42048a16,0);
    return;
  }
  FUN_ram_42055a5a(0x42048a16,0);
  DAT_ram_3fcb6815 = 0;
  return;
}

