
void FUN_ram_4204d60e(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iStack_e4;
  undefined1 auStack_e0 [2];
  byte bStack_de;
  ushort uStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  char acStack_40 [3];
  byte bStack_3d;
  undefined1 auStack_38 [24];
  
  iVar5 = *(int *)(param_1 + 0x10);
  do {
    if (iVar5 == 0) {
      piVar6 = (int *)*param_2;
      while (piVar6 != (int *)0x0) {
        if ((piVar6[8] == piVar6[7]) && (piVar6[9] == (uint)*(byte *)((int)piVar6 + 0x19))) {
          piVar6 = (int *)piVar6[1];
        }
        else {
          iVar5 = *(int *)(param_1 + 0x10);
          while ((iVar5 != 0 &&
                 ((((iVar4 = *(int *)(iVar5 + 0xc), iVar4 == -0x10 || (iVar4 == 0)) || (iVar4 == -1)
                   ) || (iVar4 = FUN_ram_4204d0c6(iVar5,(char)piVar6[6],0x48,piVar6 + 2,0xff,
                                                  *(undefined1 *)((int)piVar6 + 0x1a)), iVar4 != 0))
                 ))) {
            iVar5 = *(int *)(iVar5 + 4);
          }
          iVar5 = *piVar6;
          piVar7 = (int *)piVar6[1];
          if (iVar5 == 0) {
            *param_2 = (int)piVar7;
          }
          else {
            *(int **)(iVar5 + 4) = piVar7;
          }
          if (piVar7 == (int *)0x0) {
            param_2[1] = iVar5;
          }
          else {
            *piVar7 = iVar5;
          }
          param_2[2] = param_2[2] + -1;
          thunk_FUN_ram_40390634(piVar6);
          piVar6 = piVar7;
        }
      }
      return;
    }
    iStack_e4 = 0;
    while (iVar4 = FUN_ram_4204cd30(iVar5,0xff,0x42,0,&iStack_e4,auStack_e0,0xff), iVar4 == 0) {
      iVar4 = *param_2;
      FUN_ram_4039c11e(auStack_c0,auStack_e0,0x20);
      FUN_ram_4039c11e(auStack_a0,auStack_c0,0x20);
      FUN_ram_4039c11e(auStack_60,auStack_a0,0x20);
      FUN_ram_4039c11e(acStack_40,auStack_60,0x20);
      FUN_ram_4039c11e(auStack_80,acStack_40,0x20);
      FUN_ram_4039c11e(auStack_60,auStack_80,0x20);
      FUN_ram_4039c11e(acStack_40,auStack_60,0x20);
      bVar2 = bStack_3d;
      cVar1 = acStack_40[0];
      for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        iVar3 = FUN_ram_4039c5aa(auStack_38,iVar4 + 8,0xf);
        if (((iVar3 == 0) && (*(char *)(iVar4 + 0x18) == cVar1)) &&
           ((*(byte *)(iVar4 + 0x1a) <= bVar2 &&
            (bVar2 < (byte)((-(*(byte *)(iVar4 + 0x1a) != 0) & 0x7fU) + 0x80))))) {
          *(uint *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + (uint)uStack_c8;
          *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
          break;
        }
      }
      iStack_e4 = iStack_e4 + (uint)bStack_de;
    }
    iVar5 = *(int *)(iVar5 + 4);
  } while( true );
}

