
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201c8e6(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  short sStack_30;
  undefined2 uStack_2e;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  iVar1 = FUN_ram_4201f03c();
  if (iVar1 != 0) {
    FUN_ram_42018dcc();
    return;
  }
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_ram_4201605e();
  iVar5 = _DAT_ram_3fcc50c4;
  if (_DAT_ram_3fcc50c8 == 0) {
    if (iVar2 == 0) {
      puVar9 = &DAT_ram_3c0dce44;
    }
    else {
      puVar9 = &DAT_ram_3c0dce34;
    }
    uStack_34 = 0;
    iVar1 = FUN_ram_42021020(*(undefined4 *)(puVar9 + _DAT_ram_3fcc50b8 * 8),
                             *(undefined4 *)((int)(puVar9 + _DAT_ram_3fcc50b8 * 8) + 4),iVar1,
                             &uStack_34);
    if (iVar1 == 0) goto LAB_ram_4201ca44;
    uVar3 = 0;
LAB_ram_4201c94c:
    FUN_ram_4201eeb2(uVar3);
  }
  else {
    if (_DAT_ram_3fcc50c8 == 1) {
      uStack_34 = 0;
      uVar3 = FUN_ram_4201ee6a();
      iVar1 = FUN_ram_42021020("AScAAHcAdQAAfwAAACQTCAICAC4fgDQID1wIAREBQggBAAQGAgBTf+AAAAuGAgQCAD0P/0DUCB8D/AgAMQA///8ECQIAMwF//lMHDwIA/3tQAAAAAAA="
                               ,0x21c,uVar3,&uStack_34);
      if (iVar1 != 0) {
        FUN_ram_4201eeb2(3);
      }
      iVar1 = iVar5 * 0xc;
      FUN_ram_4201c4d2(0x19,0x96,0x41,(&DAT_ram_3c0dcd54)[iVar5 * 3],0x24,0x4200c216,0x4200c24c);
      if (iVar2 == 0) {
        uVar8 = *(undefined4 *)(&DAT_ram_3c0dcd58 + iVar1);
        uVar11 = 0x4200c24c;
        uVar10 = 0x4200c216;
        uVar3 = 0x24;
        uVar7 = 0x6f;
      }
      else {
        uVar8 = *(undefined4 *)(&DAT_ram_3c0dcd5c + iVar1);
        uVar11 = 0x4200c1e6;
        uVar10 = 0x4200c1b6;
        uVar3 = 0x10;
        uVar7 = 0x7a;
      }
      uVar6 = 0x96;
      uVar4 = 0x19;
    }
    else {
      if (_DAT_ram_3fcc50c8 == 2) {
        if (iVar2 == 0) {
          puVar9 = &DAT_ram_3c0dce24;
        }
        else {
          puVar9 = &UNK_ram_3c0dce14;
        }
        uVar3 = 1;
        if (_DAT_ram_3fcc50ac < 2) {
          uVar4 = *(undefined4 *)((int)(puVar9 + _DAT_ram_3fcc50ac * 8) + 4);
          uVar7 = *(undefined4 *)(puVar9 + _DAT_ram_3fcc50ac * 8);
          uStack_34 = 0;
          uVar6 = FUN_ram_4201ee6a();
          iVar1 = FUN_ram_42021020(uVar7,uVar4,uVar6,&uStack_34);
          if (iVar1 == 0) goto LAB_ram_4201ca44;
        }
        goto LAB_ram_4201c94c;
      }
      uStack_38 = 0;
      iVar5 = FUN_ram_4201c394();
      iVar5 = (iVar5 * 0x3c + _DAT_ram_3fcc50bc) * 0xc;
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(&DAT_ram_3c0dced8 + iVar5);
      }
      else {
        uVar3 = *(undefined4 *)(&DAT_ram_3c0dcedc + iVar5);
      }
      iVar1 = FUN_ram_42021020("AAO8AtQBwDAH8AD/gB//AB+A5AK04DAH4AA/wB/+AB/4AmEA4TAP8AAEATM/ABxIAyHjmJcEER9cAwJIA/EAAPGcA/wAAEAfAAB+ADGPXANBAHHMAKIBNQAA/KwDMXDOAN8BNQAB/NQDIzjmOgYH/ANBPGMAPw4BJQfwJARBHDOAD0QCUh/wAc44ZAAyHDmAiwYlf8B0BFEOGMAD/6kCMYADGBsCAcQEMQH/+NAGIQc43wHxAAAAB45wAH//gAL//AAOcG0AqAAAA4A4AB//wB8UBYgDwBgAA/+AHzwFwgHgDgAA/8Af/wAAcA8E4gAAAOAGAAAfgB/4AADgSwQDtAVIB8AfgLQFiHgBwAAPwB8A3AVzPADwAAeAHzUGAgIAsx4AcAAP//8AABwATwWoAAAPABwAB///AFQGMg+AjygAB3wGpAPBw8AH//8AA8fvBQHMBljwD///AMwGMgH4fPQGIjwfdQDXAAAAAHgeD4AAAAHweBwHkT4Hg/AAAB/B4C8AAgIAkx+D4P/QC/4PwVIBAVYBdsDwD///6A8bBwK8Byp//LwHEQDLAScAAHcAdQAAfwAAACQTCAICAC4fgDQID1wIAREBQggBAAQGAgBTf+AAAAuGAgQCAD0P/0DUCB8D/AgAMQA///8ECQIAMwF//lMHDwIA/3tQAAAAAAA="
                               ,0x234,iVar1,&uStack_38);
      if (iVar1 != 0) {
        FUN_ram_4201eeb2(3);
      }
      uStack_34 = CONCAT22(0x1e,(-(ushort)(iVar2 != 0) & 3) + 0x19);
      uStack_2b = 0xff;
      uStack_22 = 1;
      uStack_2e = 0x7c;
      sStack_30 = (-(ushort)(iVar2 != 0) & 0xffee) + 0x90;
      uStack_24 = 0x401;
      uStack_28 = 0;
      uStack_2c = 0;
      FUN_ram_4201f3b0(uVar3,&uStack_34);
      iVar1 = FUN_ram_4201c394();
      uVar11 = 0x4200c24c;
      uVar10 = 0x4200c216;
      uVar3 = 0x24;
      uVar7 = 0x92;
      uVar6 = 200;
      uVar8 = (&DAT_ram_3c0dcd54)[iVar1 * 3];
      uVar4 = 0;
    }
    FUN_ram_4201c4d2(uVar4,uVar6,uVar7,uVar8,uVar3,uVar10,uVar11);
  }
LAB_ram_4201ca44:
  if (*(char *)(gp + -0x77c) != '\0') {
    FUN_ram_4201ef22();
    *(undefined1 *)(gp + -0x77c) = 0;
    return;
  }
  FUN_ram_4201f108(0,199);
  return;
}

