
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201d3f6(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 auStack_88 [4];
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [68];
  
  FUN_ram_4201eeb2(0);
  iVar4 = FUN_ram_4201605e();
  if (iVar4 == 0) {
    pcVar5 = 
    "P/ngcAP+OBz/MgBBgcAAGBkAEQcZAHIA/zgc/+f8SwAREMgA0geceDngcAAPuB3g57wZAAL6APMCDxx4eeBwB4e4HeHnnjzg98cZAPEGP/8efPngeAePOB3z55884PP/wAAw4QBx/x+/+eB+A2QAIY+8GQAheADhAPMBH5/54D4D/jgcf+eHvODx/TIAsgHwB48AAB4AeAAAvwETA2QAAWUBBwIAFAd9AAcUAAECADID/4CvAAEOAAcCAB8BGQAFIQD+JgAOMgAA5Q8BcQICCwAJAgAPxQ3/UQnmAwMCAAF3AQ8ZAAEvA5/SDwgj/vg/AAgCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYfP5kQAQ8XEQoPfAABP////JQRCA/GEQYfAH0AAgEiAw8CAK1QAAAAAAA="
    ;
    uVar7 = 0xd4;
  }
  else {
    pcVar5 = 
    "AGM4AAAHgDwNAK4A/MAP/hwAAABwGQAvH/8ZAAQoHg8ZAARKAPEGAPzAPAccA8AOcAB4OeAPB4AAB4B4HQDxlfzAPAB/j/H//gH+O/g/x4+8/8H9wAD+AAD8wB4Af5/5//4D/z/4f+ePPP/j/8ADAwAA/MAf4H++ef/+B88/fPnnnjz78+/ABgGAAPzAD/wcPDngcAeHPDzw57w88PeDwAcBgAD8wAf+HAA54HAHwDw8AOf4POD3g8AABwAA/MAA/xwP+eBwA/g4HD/n8Dzg94PAABwAAPzAAA+cP/ngcAP+OBz/MgBBgcAAGBkAEQcZAHIA/zgc/+f8SwAREMgA0geceDngcAAPuB3g57wZAAL6APMCDxx4eeBwB4e4HeHnnjzg98cZAPEGP/8efPngeAePOB3z55884PP/wAAw4QBx/x+/+eB+A2QAIY+8GQAheADhAPMBH5/54D4D/jgcf+eHvODx/TIAsgHwB48AAB4AeAAAvwETA2QAAWUBBwIAFAd9AAcUAAECADID/4CvAAEOAAcCAB8BGQAFIQD+JgAOMgAA5Q8BcQICCwAJAgAPxQ3/UQnmAwMCAAF3AQ8ZAAEvA5/SDwgj/vg/AAgCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYfP5kQAQ8XEQoPfAABP////JQRCA/GEQYfAH0AAgEiAw8CAK1QAAAAAAA="
    ;
    uVar7 = 0x120;
  }
  iVar4 = thunk_FUN_ram_42020df4(pcVar5,uVar7,0x3fcbb338,0x113,auStack_88);
  if (iVar4 == 0) {
    FUN_ram_4201f2b0(8,8,0x58,0x19,0x3fcbb338);
  }
  pcVar5 = "";
  iVar4 = 0;
  do {
    iVar1 = _DAT_ram_3fcc510c;
    if ((uint)(iVar4 - _DAT_ram_3fcc5108) < 5) {
      iVar2 = (iVar4 - _DAT_ram_3fcc5108) * 0x20;
      iVar6 = FUN_ram_4201605e();
      if (iVar6 == 0) {
        puVar3 = *(undefined1 **)pcVar5;
      }
      else {
        puVar3 = *(undefined1 **)(pcVar5 + 4);
      }
      if (pcVar5[0xc] != '\0') {
        if (iVar6 == 0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = &DAT_ram_3c0c1164;
        }
        (*(code *)&SUB_ram_400106ac)(auStack_70,0x40,pcVar8,puVar3);
        puVar3 = auStack_70;
      }
      if (iVar1 == iVar4) {
        FUN_ram_4201d342();
        uStack_7c = 0xff00;
      }
      else {
        FUN_ram_4201d2a2(param_1,8,iVar2 + 0x26,0xb8,0x1c);
        uStack_7c = 0xff03;
      }
      uStack_74 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_84 = 0x14;
      uStack_82 = (short)((uint)((iVar2 + 0x2c) * 0x10000) >> 0x10);
      FUN_ram_4201f3b0(puVar3,&uStack_84);
    }
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 0x10;
  } while (iVar4 != 0xd);
  return;
}

