
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039270c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)&SUB_ram_40010a54)(_DAT_ram_60040058 & 0xff);
  uVar1 = (*(code *)&SUB_ram_40010a8c)((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x11,0);
  uVar2 = (*(code *)&SUB_ram_40010a54)
                    (*(undefined4 *)((uint)*(byte *)(gp + -0x760) * 0x14 + 0x3fcb8748));
  uVar2 = (*(code *)&SUB_ram_40010a8c)((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x80208020);
  uVar1 = (*(code *)&SUB_ram_40010a9c)
                    ((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,
                     (int)((ulonglong)uVar2 >> 0x20));
  (*(code *)&SUB_ram_40010a9c)((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x110011,0x4000a);
  (*(code *)&SUB_ram_40010a34)();
  return;
}

