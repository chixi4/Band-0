
void FUN_ram_4202c210(void)

{
  uint unaff_s0;
  byte *unaff_s1;
  int iVar1;
  byte *unaff_s2;
  int unaff_s3;
  
  while( true ) {
    if (unaff_s0 != 0) {
      thunk_FUN_ram_4202b7dc();
      iVar1 = FUN_ram_420365de(*(undefined2 *)(unaff_s1 + 1));
      if (iVar1 != 0) {
        if (*(ushort *)(iVar1 + 0x48) < unaff_s0) {
          FUN_ram_4202bb54(0xc);
        }
        else {
          *(ushort *)(iVar1 + 0x48) = *(ushort *)(iVar1 + 0x48) - (short)unaff_s0;
        }
        FUN_ram_42033294(unaff_s0);
      }
      thunk_FUN_ram_4202b7f6();
    }
    unaff_s3 = unaff_s3 + 1;
    if ((int)(uint)*unaff_s2 <= unaff_s3) break;
    unaff_s1 = unaff_s2 + unaff_s3 * 4;
    unaff_s0 = (uint)*(ushort *)(unaff_s1 + 3);
  }
  FUN_ram_4202b83e();
  FUN_ram_4202c1f0(0);
  return;
}

