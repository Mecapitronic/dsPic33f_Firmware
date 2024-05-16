/*-------------------------------------------------------------------------
* dsPIC33FJ128MC804 processor header MODIFIED
*-------------------------------------------------------------------------*/

#ifndef __33FJ128MC804_H
#define __33FJ128MC804_H

 volatile unsigned int  WREG0 ;
 volatile unsigned int  WREG1 ;
 volatile unsigned int  WREG2 ;
 volatile unsigned int  WREG3 ;
 volatile unsigned int  WREG4 ;
 volatile unsigned int  WREG5 ;
 volatile unsigned int  WREG6 ;
 volatile unsigned int  WREG7 ;
 volatile unsigned int  WREG8 ;
 volatile unsigned int  WREG9 ;
 volatile unsigned int  WREG10 ;
 volatile unsigned int  WREG11 ;
 volatile unsigned int  WREG12 ;
 volatile unsigned int  WREG13 ;
 volatile unsigned int  WREG14 ;
 volatile unsigned int  WREG15 ;
 volatile unsigned int  SPLIM ;
 volatile unsigned int  ACCAL ;
 volatile unsigned int  ACCAH ;
 volatile unsigned char ACCAU ;
 volatile unsigned int  ACCBL ;
 volatile unsigned int  ACCBH ;
 volatile unsigned char ACCBU ;
 volatile unsigned int  PCL ;
 volatile unsigned char __PCH ;
 volatile unsigned char TBLPAG ;
 volatile unsigned char PSVPAG ;
 volatile unsigned int  RCOUNT ;
 volatile unsigned int  DCOUNT ;
 volatile unsigned int  DOSTARTL ;
 volatile unsigned int  DOSTARTH ;
 volatile unsigned int  DOENDL ;
 volatile unsigned int  DOENDH ;
 volatile unsigned int  SR ;
 typedef struct tagSRBITS {
	union {
		struct {
			unsigned C : 1;
			unsigned Z : 1;
			unsigned OV : 1;
			unsigned N : 1;
			unsigned RA : 1;
			unsigned IPL : 3;
			unsigned DC : 1;
			unsigned DA : 1;
			unsigned SAB : 1;
			unsigned OAB : 1;
			unsigned SB : 1;
			unsigned SA : 1;
			unsigned OB : 1;
			unsigned OA : 1;
		};
		struct {
			unsigned : 5;
			unsigned IPL0 : 1;
			unsigned IPL1 : 1;
			unsigned IPL2 : 1;
		};
	};
} SRBITS;
 volatile SRBITS SRbits ;

 volatile unsigned int  CORCON ;
 typedef struct tagCORCONBITS {
	union {
		struct {
			unsigned IF : 1;
			unsigned RND : 1;
			unsigned PSV : 1;
			unsigned IPL3 : 1;
			unsigned ACCSAT : 1;
			unsigned SATDW : 1;
			unsigned SATB : 1;
			unsigned SATA : 1;
			unsigned DL : 3;
			unsigned EDT : 1;
			unsigned US : 1;
		};
		struct {
			unsigned : 8;
			unsigned DL0 : 1;
			unsigned DL1 : 1;
			unsigned DL2 : 1;
		};
	};
} CORCONBITS;
 volatile CORCONBITS CORCONbits ;

 volatile unsigned int  MODCON ;
 typedef struct tagMODCONBITS {
	union {
		struct {
			unsigned XWM : 4;
			unsigned YWM : 4;
			unsigned BWM : 4;
			unsigned : 2;
			unsigned YMODEN : 1;
			unsigned XMODEN : 1;
		};
		struct {
			unsigned XWM0 : 1;
			unsigned XWM1 : 1;
			unsigned XWM2 : 1;
			unsigned XWM3 : 1;
			unsigned YWM0 : 1;
			unsigned YWM1 : 1;
			unsigned YWM2 : 1;
			unsigned YWM3 : 1;
			unsigned BWM0 : 1;
			unsigned BWM1 : 1;
			unsigned BWM2 : 1;
			unsigned BWM3 : 1;
		};
	};
} MODCONBITS;
 volatile MODCONBITS MODCONbits ;

 volatile unsigned int  XMODSRT ;
 volatile unsigned int  XMODEND ;
 volatile unsigned int  YMODSRT ;
 volatile unsigned int  YMODEND ;
 volatile unsigned int  XBREV ;
 typedef struct tagXBREVBITS {
	union {
		struct {
			unsigned XB : 15;
			unsigned BREN : 1;
		};
		struct {
			unsigned XB0 : 1;
			unsigned XB1 : 1;
			unsigned XB2 : 1;
			unsigned XB3 : 1;
			unsigned XB4 : 1;
			unsigned XB5 : 1;
			unsigned XB6 : 1;
			unsigned XB7 : 1;
			unsigned XB8 : 1;
			unsigned XB9 : 1;
			unsigned XB10 : 1;
			unsigned XB11 : 1;
			unsigned XB12 : 1;
			unsigned XB13 : 1;
			unsigned XB14 : 1;
		};
	};
} XBREVBITS;
 volatile XBREVBITS XBREVbits ;

 volatile unsigned int  DISICNT ;
 volatile unsigned int  CNEN1 ;
typedef struct tagCNEN1BITS {
	unsigned CN0IE : 1;
	unsigned CN1IE : 1;
	unsigned CN2IE : 1;
	unsigned CN3IE : 1;
	unsigned CN4IE : 1;
	unsigned CN5IE : 1;
	unsigned CN6IE : 1;
	unsigned CN7IE : 1;
	unsigned CN8IE : 1;
	unsigned CN9IE : 1;
	unsigned CN10IE : 1;
	unsigned CN11IE : 1;
	unsigned CN12IE : 1;
	unsigned CN13IE : 1;
	unsigned CN14IE : 1;
	unsigned CN15IE : 1;
} CNEN1BITS;
 volatile CNEN1BITS CNEN1bits ;

 volatile unsigned int  CNEN2 ;
typedef struct tagCNEN2BITS {
	unsigned CN16IE : 1;
	unsigned CN17IE : 1;
	unsigned CN18IE : 1;
	unsigned CN19IE : 1;
	unsigned CN20IE : 1;
	unsigned CN21IE : 1;
	unsigned CN22IE : 1;
	unsigned CN23IE : 1;
	unsigned CN24IE : 1;
	unsigned CN25IE : 1;
	unsigned CN26IE : 1;
	unsigned CN27IE : 1;
	unsigned CN28IE : 1;
	unsigned CN29IE : 1;
	unsigned CN30IE : 1;
} CNEN2BITS;
 volatile CNEN2BITS CNEN2bits ;

 volatile unsigned int  CNPU1 ;
typedef struct tagCNPU1BITS {
	unsigned CN0PUE : 1;
	unsigned CN1PUE : 1;
	unsigned CN2PUE : 1;
	unsigned CN3PUE : 1;
	unsigned CN4PUE : 1;
	unsigned CN5PUE : 1;
	unsigned CN6PUE : 1;
	unsigned CN7PUE : 1;
	unsigned CN8PUE : 1;
	unsigned CN9PUE : 1;
	unsigned CN10PUE : 1;
	unsigned CN11PUE : 1;
	unsigned CN12PUE : 1;
	unsigned CN13PUE : 1;
	unsigned CN14PUE : 1;
	unsigned CN15PUE : 1;
} CNPU1BITS;
 volatile CNPU1BITS CNPU1bits ;

 volatile unsigned int  CNPU2 ;
typedef struct tagCNPU2BITS {
	unsigned CN16PUE : 1;
	unsigned CN17PUE : 1;
	unsigned CN18PUE : 1;
	unsigned CN19PUE : 1;
	unsigned CN20PUE : 1;
	unsigned CN21PUE : 1;
	unsigned CN22PUE : 1;
	unsigned CN23PUE : 1;
	unsigned CN24PUE : 1;
	unsigned CN25PUE : 1;
	unsigned CN26PUE : 1;
	unsigned CN27PUE : 1;
	unsigned CN28PUE : 1;
	unsigned CN29PUE : 1;
	unsigned CN30PUE : 1;
} CNPU2BITS;
 volatile CNPU2BITS CNPU2bits ;

 volatile unsigned int  INTCON1 ;
typedef struct tagINTCON1BITS {
	unsigned : 1;
	unsigned OSCFAIL : 1;
	unsigned STKERR : 1;
	unsigned ADDRERR : 1;
	unsigned MATHERR : 1;
	unsigned DMACERR : 1;
	unsigned DIV0ERR : 1;
	unsigned SFTACERR : 1;
	unsigned COVTE : 1;
	unsigned OVBTE : 1;
	unsigned OVATE : 1;
	unsigned COVBERR : 1;
	unsigned COVAERR : 1;
	unsigned OVBERR : 1;
	unsigned OVAERR : 1;
	unsigned NSTDIS : 1;
} INTCON1BITS;
 volatile INTCON1BITS INTCON1bits ;

 volatile unsigned int  INTCON2 ;
typedef struct tagINTCON2BITS {
	unsigned INT0EP : 1;
	unsigned INT1EP : 1;
	unsigned INT2EP : 1;
	unsigned : 11;
	unsigned DISI : 1;
	unsigned ALTIVT : 1;
} INTCON2BITS;
 volatile INTCON2BITS INTCON2bits ;

 volatile unsigned int  IFS0 ;
typedef struct tagIFS0BITS {
	unsigned INT0IF : 1;
	unsigned IC1IF : 1;
	unsigned OC1IF : 1;
	unsigned T1IF : 1;
	unsigned DMA0IF : 1;
	unsigned IC2IF : 1;
	unsigned OC2IF : 1;
	unsigned T2IF : 1;
	unsigned T3IF : 1;
	unsigned SPI1EIF : 1;
	unsigned SPI1IF : 1;
	unsigned U1RXIF : 1;
	unsigned U1TXIF : 1;
	unsigned AD1IF : 1;
	unsigned DMA1IF : 1;
} IFS0BITS;
 volatile IFS0BITS IFS0bits ;

 volatile unsigned int  IFS1 ;
 typedef struct tagIFS1BITS {
	union {
		struct {
			unsigned SI2C1IF : 1;
			unsigned MI2C1IF : 1;
			unsigned CMIF : 1;
			unsigned CNIF : 1;
			unsigned INT1IF : 1;
			unsigned : 1;
			unsigned IC7IF : 1;
			unsigned IC8IF : 1;
			unsigned DMA2IF : 1;
			unsigned OC3IF : 1;
			unsigned OC4IF : 1;
			unsigned T4IF : 1;
			unsigned T5IF : 1;
			unsigned INT2IF : 1;
			unsigned U2RXIF : 1;
			unsigned U2TXIF : 1;
		};
		struct {
			unsigned SI2CIF : 1;
		};
	};
} IFS1BITS;
 volatile IFS1BITS IFS1bits ;

 volatile unsigned int  IFS2 ;
typedef struct tagIFS2BITS {
	unsigned SPI2EIF : 1;
	unsigned SPI2IF : 1;
	unsigned C1RXIF : 1;
	unsigned C1IF : 1;
	unsigned DMA3IF : 1;
	unsigned : 8;
	unsigned PMPIF : 1;
	unsigned DMA4IF : 1;
} IFS2BITS;
 volatile IFS2BITS IFS2bits ;

 volatile unsigned int  IFS3 ;
typedef struct tagIFS3BITS {
	unsigned : 9;
	unsigned PWM1IF : 1;
	unsigned QEI1IF : 1;
	unsigned : 2;
	unsigned DMA5IF : 1;
	unsigned RTCIF : 1;
	unsigned FLTA1IF : 1;
} IFS3BITS;
 volatile IFS3BITS IFS3bits ;

 volatile unsigned int  IFS4 ;
typedef struct tagIFS4BITS {
	unsigned : 1;
	unsigned U1EIF : 1;
	unsigned U2EIF : 1;
	unsigned CRCIF : 1;
	unsigned DMA6IF : 1;
	unsigned DMA7IF : 1;
	unsigned C1TXIF : 1;
	unsigned : 2;
	unsigned PWM2IF : 1;
	unsigned FLTA2IF : 1;
	unsigned QEI2IF : 1;
	unsigned : 2;
	unsigned DAC1RIF : 1;
	unsigned DAC1LIF : 1;
} IFS4BITS;
 volatile IFS4BITS IFS4bits ;

 volatile unsigned int  IEC0 ;
typedef struct tagIEC0BITS {
	unsigned INT0IE : 1;
	unsigned IC1IE : 1;
	unsigned OC1IE : 1;
	unsigned T1IE : 1;
	unsigned DMA0IE : 1;
	unsigned IC2IE : 1;
	unsigned OC2IE : 1;
	unsigned T2IE : 1;
	unsigned T3IE : 1;
	unsigned SPI1EIE : 1;
	unsigned SPI1IE : 1;
	unsigned U1RXIE : 1;
	unsigned U1TXIE : 1;
	unsigned AD1IE : 1;
	unsigned DMA1IE : 1;
} IEC0BITS;
 volatile IEC0BITS IEC0bits ;

 volatile unsigned int  IEC1 ;
 typedef struct tagIEC1BITS {
	union {
		struct {
			unsigned SI2C1IE : 1;
			unsigned MI2C1IE : 1;
			unsigned CMIE : 1;
			unsigned CNIE : 1;
			unsigned INT1IE : 1;
			unsigned : 1;
			unsigned IC7IE : 1;
			unsigned IC8IE : 1;
			unsigned DMA2IE : 1;
			unsigned OC3IE : 1;
			unsigned OC4IE : 1;
			unsigned T4IE : 1;
			unsigned T5IE : 1;
			unsigned INT2IE : 1;
			unsigned U2RXIE : 1;
			unsigned U2TXIE : 1;
		};
		struct {
			unsigned SI2CIE : 1;
		};
	};
} IEC1BITS;
 volatile IEC1BITS IEC1bits ;

 volatile unsigned int  IEC2 ;
typedef struct tagIEC2BITS {
	unsigned SPI2EIE : 1;
	unsigned SPI2IE : 1;
	unsigned C1RXIE : 1;
	unsigned C1IE : 1;
	unsigned DMA3IE : 1;
	unsigned : 8;
	unsigned PMPIE : 1;
	unsigned DMA4IE : 1;
} IEC2BITS;
 volatile IEC2BITS IEC2bits ;

 volatile unsigned int  IEC3 ;
typedef struct tagIEC3BITS {
	unsigned : 9;
	unsigned PWM1IE : 1;
	unsigned QEI1IE : 1;
	unsigned : 2;
	unsigned DMA5IE : 1;
	unsigned RTCIE : 1;
	unsigned FLTA1IE : 1;
} IEC3BITS;
 volatile IEC3BITS IEC3bits ;

 volatile unsigned int  IEC4 ;
typedef struct tagIEC4BITS {
	unsigned : 1;
	unsigned U1EIE : 1;
	unsigned U2EIE : 1;
	unsigned CRCIE : 1;
	unsigned DMA6IE : 1;
	unsigned DMA7IE : 1;
	unsigned C1TXIE : 1;
	unsigned : 2;
	unsigned PWM2IE : 1;
	unsigned FLTA2IE : 1;
	unsigned QEI2IE : 1;
	unsigned : 2;
	unsigned DAC1RIE : 1;
	unsigned DAC1LIE : 1;
} IEC4BITS;
 volatile IEC4BITS IEC4bits ;

 volatile unsigned int  IPC0 ;
 typedef struct tagIPC0BITS {
	union {
		struct {
			unsigned INT0IP : 3;
			unsigned : 1;
			unsigned IC1IP : 3;
			unsigned : 1;
			unsigned OC1IP : 3;
			unsigned : 1;
			unsigned T1IP : 3;
		};
		struct {
			unsigned INT0IP0 : 1;
			unsigned INT0IP1 : 1;
			unsigned INT0IP2 : 1;
			unsigned : 1;
			unsigned IC1IP0 : 1;
			unsigned IC1IP1 : 1;
			unsigned IC1IP2 : 1;
			unsigned : 1;
			unsigned OC1IP0 : 1;
			unsigned OC1IP1 : 1;
			unsigned OC1IP2 : 1;
			unsigned : 1;
			unsigned T1IP0 : 1;
			unsigned T1IP1 : 1;
			unsigned T1IP2 : 1;
		};
	};
} IPC0BITS;
 volatile IPC0BITS IPC0bits ;

 volatile unsigned int  IPC1 ;
 typedef struct tagIPC1BITS {
	union {
		struct {
			unsigned DMA0IP : 3;
			unsigned : 1;
			unsigned IC2IP : 3;
			unsigned : 1;
			unsigned OC2IP : 3;
			unsigned : 1;
			unsigned T2IP : 3;
		};
		struct {
			unsigned DMA0IP0 : 1;
			unsigned DMA0IP1 : 1;
			unsigned DMA0IP2 : 1;
			unsigned : 1;
			unsigned IC2IP0 : 1;
			unsigned IC2IP1 : 1;
			unsigned IC2IP2 : 1;
			unsigned : 1;
			unsigned OC2IP0 : 1;
			unsigned OC2IP1 : 1;
			unsigned OC2IP2 : 1;
			unsigned : 1;
			unsigned T2IP0 : 1;
			unsigned T2IP1 : 1;
			unsigned T2IP2 : 1;
		};
	};
} IPC1BITS;
 volatile IPC1BITS IPC1bits ;

 volatile unsigned int  IPC2 ;
 typedef struct tagIPC2BITS {
	union {
		struct {
			unsigned T3IP : 3;
			unsigned : 1;
			unsigned SPI1EIP : 3;
			unsigned : 1;
			unsigned SPI1IP : 3;
			unsigned : 1;
			unsigned U1RXIP : 3;
		};
		struct {
			unsigned T3IP0 : 1;
			unsigned T3IP1 : 1;
			unsigned T3IP2 : 1;
			unsigned : 1;
			unsigned SPI1EIP0 : 1;
			unsigned SPI1EIP1 : 1;
			unsigned SPI1EIP2 : 1;
			unsigned : 1;
			unsigned SPI1IP0 : 1;
			unsigned SPI1IP1 : 1;
			unsigned SPI1IP2 : 1;
			unsigned : 1;
			unsigned U1RXIP0 : 1;
			unsigned U1RXIP1 : 1;
			unsigned U1RXIP2 : 1;
		};
	};
} IPC2BITS;
 volatile IPC2BITS IPC2bits ;

 volatile unsigned int  IPC3 ;
 typedef struct tagIPC3BITS {
	union {
		struct {
			unsigned U1TXIP : 3;
			unsigned : 1;
			unsigned AD1IP : 3;
			unsigned : 1;
			unsigned DMA1IP : 3;
		};
		struct {
			unsigned U1TXIP0 : 1;
			unsigned U1TXIP1 : 1;
			unsigned U1TXIP2 : 1;
			unsigned : 1;
			unsigned AD1IP0 : 1;
			unsigned AD1IP1 : 1;
			unsigned AD1IP2 : 1;
			unsigned : 1;
			unsigned DMA1IP0 : 1;
			unsigned DMA1IP1 : 1;
			unsigned DMA1IP2 : 1;
		};
	};
} IPC3BITS;
 volatile IPC3BITS IPC3bits ;

 volatile unsigned int  IPC4 ;
 typedef struct tagIPC4BITS {
	union {
		struct {
			unsigned SI2C1IP : 3;
			unsigned : 1;
			unsigned MI2C1IP : 3;
			unsigned : 1;
			unsigned CMIP : 3;
			unsigned : 1;
			unsigned CNIP : 3;
		};
		struct {
			unsigned SI2C1IP0 : 1;
			unsigned SI2C1IP1 : 1;
			unsigned SI2C1IP2 : 1;
			unsigned : 1;
			unsigned MI2C1IP0 : 1;
			unsigned MI2C1IP1 : 1;
			unsigned MI2C1IP2 : 1;
			unsigned : 1;
			unsigned CMIP0 : 1;
			unsigned CMIP1 : 1;
			unsigned CMIP2 : 1;
			unsigned : 1;
			unsigned CNIP0 : 1;
			unsigned CNIP1 : 1;
			unsigned CNIP2 : 1;
		};
	};
} IPC4BITS;
 volatile IPC4BITS IPC4bits ;

 volatile unsigned int  IPC5 ;
 typedef struct tagIPC5BITS {
	union {
		struct {
			unsigned INT1IP : 3;
			unsigned : 5;
			unsigned IC7IP : 3;
			unsigned : 1;
			unsigned IC8IP : 3;
		};
		struct {
			unsigned INT1IP0 : 1;
			unsigned INT1IP1 : 1;
			unsigned INT1IP2 : 1;
			unsigned : 5;
			unsigned IC7IP0 : 1;
			unsigned IC7IP1 : 1;
			unsigned IC7IP2 : 1;
			unsigned : 1;
			unsigned IC8IP0 : 1;
			unsigned IC8IP1 : 1;
			unsigned IC8IP2 : 1;
		};
	};
} IPC5BITS;
 volatile IPC5BITS IPC5bits ;

 volatile unsigned int  IPC6 ;
 typedef struct tagIPC6BITS {
	union {
		struct {
			unsigned DMA2IP : 3;
			unsigned : 1;
			unsigned OC3IP : 3;
			unsigned : 1;
			unsigned OC4IP : 3;
			unsigned : 1;
			unsigned T4IP : 3;
		};
		struct {
			unsigned DMA2IP0 : 1;
			unsigned DMA2IP1 : 1;
			unsigned DMA2IP2 : 1;
			unsigned : 1;
			unsigned OC3IP0 : 1;
			unsigned OC3IP1 : 1;
			unsigned OC3IP2 : 1;
			unsigned : 1;
			unsigned OC4IP0 : 1;
			unsigned OC4IP1 : 1;
			unsigned OC4IP2 : 1;
			unsigned : 1;
			unsigned T4IP0 : 1;
			unsigned T4IP1 : 1;
			unsigned T4IP2 : 1;
		};
	};
} IPC6BITS;
 volatile IPC6BITS IPC6bits ;

 volatile unsigned int  IPC7 ;
 typedef struct tagIPC7BITS {
	union {
		struct {
			unsigned T5IP : 3;
			unsigned : 1;
			unsigned INT2IP : 3;
			unsigned : 1;
			unsigned U2RXIP : 3;
			unsigned : 1;
			unsigned U2TXIP : 3;
		};
		struct {
			unsigned T5IP0 : 1;
			unsigned T5IP1 : 1;
			unsigned T5IP2 : 1;
			unsigned : 1;
			unsigned INT2IP0 : 1;
			unsigned INT2IP1 : 1;
			unsigned INT2IP2 : 1;
			unsigned : 1;
			unsigned U2RXIP0 : 1;
			unsigned U2RXIP1 : 1;
			unsigned U2RXIP2 : 1;
			unsigned : 1;
			unsigned U2TXIP0 : 1;
			unsigned U2TXIP1 : 1;
			unsigned U2TXIP2 : 1;
		};
	};
} IPC7BITS;
 volatile IPC7BITS IPC7bits ;

 volatile unsigned int  IPC8 ;
 typedef struct tagIPC8BITS {
	union {
		struct {
			unsigned SPI2EIP : 3;
			unsigned : 1;
			unsigned SPI2IP : 3;
			unsigned : 1;
			unsigned C1RXIP : 3;
			unsigned : 1;
			unsigned C1IP : 3;
		};
		struct {
			unsigned SPI2EIP0 : 1;
			unsigned SPI2EIP1 : 1;
			unsigned SPI2EIP2 : 1;
			unsigned : 1;
			unsigned SPI2IP0 : 1;
			unsigned SPI2IP1 : 1;
			unsigned SPI2IP2 : 1;
			unsigned : 1;
			unsigned C1RXIP0 : 1;
			unsigned C1RXIP1 : 1;
			unsigned C1RXIP2 : 1;
			unsigned : 1;
			unsigned C1IP0 : 1;
			unsigned C1IP1 : 1;
			unsigned C1IP2 : 1;
		};
	};
} IPC8BITS;
 volatile IPC8BITS IPC8bits ;

 volatile unsigned int  IPC9 ;
 typedef struct tagIPC9BITS {
	union {
		struct {
			unsigned DMA3IP : 3;
		};
		struct {
			unsigned DMA3IP0 : 1;
			unsigned DMA3IP1 : 1;
			unsigned DMA3IP2 : 1;
		};
	};
} IPC9BITS;
 volatile IPC9BITS IPC9bits ;

 volatile unsigned int  IPC11 ;
 typedef struct tagIPC11BITS {
	union {
		struct {
			unsigned : 4;
			unsigned PMPIP : 3;
			unsigned : 1;
			unsigned DMA4IP : 3;
		};
		struct {
			unsigned : 4;
			unsigned PMPIP0 : 1;
			unsigned PMPIP1 : 1;
			unsigned PMPIP2 : 1;
			unsigned : 1;
			unsigned DMA4IP0 : 1;
			unsigned DMA4IP1 : 1;
			unsigned DMA4IP2 : 1;
		};
	};
} IPC11BITS;
 volatile IPC11BITS IPC11bits ;

 volatile unsigned int  IPC14 ;
 typedef struct tagIPC14BITS {
	union {
		struct {
			unsigned : 4;
			unsigned PWM1IP : 3;
			unsigned : 1;
			unsigned QEI1IP : 3;
		};
		struct {
			unsigned : 4;
			unsigned PWM1IP0 : 1;
			unsigned PWM1IP1 : 1;
			unsigned PWM1IP2 : 1;
			unsigned : 1;
			unsigned QEI1IP0 : 1;
			unsigned QEI1IP1 : 1;
			unsigned QEI1IP2 : 1;
		};
	};
} IPC14BITS;
 volatile IPC14BITS IPC14bits ;

 volatile unsigned int  IPC15 ;
 typedef struct tagIPC15BITS {
	union {
		struct {
			unsigned : 4;
			unsigned DMA5IP : 3;
			unsigned : 1;
			unsigned RTCIP : 3;
			unsigned : 1;
			unsigned FLTA1IP : 3;
		};
		struct {
			unsigned : 4;
			unsigned DMA5IP0 : 1;
			unsigned DMA5IP1 : 1;
			unsigned DMA5IP2 : 1;
			unsigned : 1;
			unsigned RTCIP0 : 1;
			unsigned RTCIP1 : 1;
			unsigned RTCIP2 : 1;
			unsigned : 1;
			unsigned FLTA1IP0 : 1;
			unsigned FLTA1IP1 : 1;
			unsigned FLTA1IP2 : 1;
		};
	};
} IPC15BITS;
 volatile IPC15BITS IPC15bits ;

 volatile unsigned int  IPC16 ;
 typedef struct tagIPC16BITS {
	union {
		struct {
			unsigned : 4;
			unsigned U1EIP : 3;
			unsigned : 1;
			unsigned U2EIP : 3;
			unsigned : 1;
			unsigned CRCIP : 3;
		};
		struct {
			unsigned : 4;
			unsigned U1EIP0 : 1;
			unsigned U1EIP1 : 1;
			unsigned U1EIP2 : 1;
			unsigned : 1;
			unsigned U2EIP0 : 1;
			unsigned U2EIP1 : 1;
			unsigned U2EIP2 : 1;
			unsigned : 1;
			unsigned CRCIP0 : 1;
			unsigned CRCIP1 : 1;
			unsigned CRCIP2 : 1;
		};
	};
} IPC16BITS;
 volatile IPC16BITS IPC16bits ;

 volatile unsigned int  IPC17 ;
 typedef struct tagIPC17BITS {
	union {
		struct {
			unsigned DMA6IP : 3;
			unsigned : 1;
			unsigned DMA7IP : 3;
			unsigned : 1;
			unsigned C1TXIP : 3;
		};
		struct {
			unsigned DMA6IP0 : 1;
			unsigned DMA6IP1 : 1;
			unsigned DMA6IP2 : 1;
			unsigned : 1;
			unsigned DMA7IP0 : 1;
			unsigned DMA7IP1 : 1;
			unsigned DMA7IP2 : 1;
			unsigned : 1;
			unsigned C1TXIP0 : 1;
			unsigned C1TXIP1 : 1;
			unsigned C1TXIP2 : 1;
		};
	};
} IPC17BITS;
 volatile IPC17BITS IPC17bits ;

 volatile unsigned int  IPC18 ;
 typedef struct tagIPC18BITS {
	union {
		struct {
			unsigned : 4;
			unsigned PWM2IP : 3;
			unsigned : 1;
			unsigned FLTA2IP : 3;
			unsigned : 1;
			unsigned QEI2IP : 3;
		};
		struct {
			unsigned : 4;
			unsigned PWM2IP0 : 1;
			unsigned PWM2IP1 : 1;
			unsigned PWM2IP2 : 1;
			unsigned : 1;
			unsigned FLTA2IP0 : 1;
			unsigned FLTA2IP1 : 1;
			unsigned FLTA2IP2 : 1;
			unsigned : 1;
			unsigned QEI2IP0 : 1;
			unsigned QEI2IP1 : 1;
			unsigned QEI2IP2 : 1;
		};
	};
} IPC18BITS;
 volatile IPC18BITS IPC18bits ;

 volatile unsigned int  IPC19 ;
 typedef struct tagIPC19BITS {
	union {
		struct {
			unsigned : 8;
			unsigned DAC1RIP : 3;
			unsigned : 1;
			unsigned DAC1LIP : 3;
		};
		struct {
			unsigned : 8;
			unsigned DAC1RIP0 : 1;
			unsigned DAC1RIP1 : 1;
			unsigned DAC1RIP2 : 1;
			unsigned : 1;
			unsigned DAC1LIP0 : 1;
			unsigned DAC1LIP1 : 1;
			unsigned DAC1LIP2 : 1;
		};
	};
} IPC19BITS;
 volatile IPC19BITS IPC19bits ;

 volatile unsigned int  INTTREG ;
 typedef struct tagINTTREGBITS {
	union {
		struct {
			unsigned VECNUM : 7;
			unsigned : 1;
			unsigned ILR : 4;
		};
		struct {
			unsigned VECNUM0 : 1;
			unsigned VECNUM1 : 1;
			unsigned VECNUM2 : 1;
			unsigned VECNUM3 : 1;
			unsigned VECNUM4 : 1;
			unsigned VECNUM5 : 1;
			unsigned VECNUM6 : 1;
			unsigned : 1;
			unsigned ILR0 : 1;
			unsigned ILR1 : 1;
			unsigned ILR2 : 1;
			unsigned ILR3 : 1;
		};
	};
} INTTREGBITS;
 volatile INTTREGBITS INTTREGbits ;

 volatile unsigned int  TMR1 ;
 volatile unsigned int  PR1 ;
 volatile unsigned int  T1CON ;
 typedef struct tagT1CONBITS {
	union {
		struct {
			unsigned : 1;
			unsigned TCS : 1;
			unsigned TSYNC : 1;
			unsigned : 1;
			unsigned TCKPS : 2;
			unsigned TGATE : 1;
			unsigned : 6;
			unsigned TSIDL : 1;
			unsigned : 1;
			unsigned TON : 1;
		};
		struct {
			unsigned : 4;
			unsigned TCKPS0 : 1;
			unsigned TCKPS1 : 1;
		};
	};
} T1CONBITS;
 volatile T1CONBITS T1CONbits ;

 volatile unsigned int  TMR2 ;
 volatile unsigned int  TMR3HLD ;
 volatile unsigned int  TMR3 ;
 volatile unsigned int  PR2 ;
 volatile unsigned int  PR3 ;
 volatile unsigned int  T2CON ;
 typedef struct tagT2CONBITS {
	union {
		struct {
			unsigned : 1;
			unsigned TCS : 1;
			unsigned : 1;
			unsigned T32 : 1;
			unsigned TCKPS : 2;
			unsigned TGATE : 1;
			unsigned : 6;
			unsigned TSIDL : 1;
			unsigned : 1;
			unsigned TON : 1;
		};
		struct {
			unsigned : 4;
			unsigned TCKPS0 : 1;
			unsigned TCKPS1 : 1;
		};
	};
} T2CONBITS;
 volatile T2CONBITS T2CONbits ;

 volatile unsigned int  T3CON ;
 typedef struct tagT3CONBITS {
	union {
		struct {
			unsigned : 1;
			unsigned TCS : 1;
			unsigned : 2;
			unsigned TCKPS : 2;
			unsigned TGATE : 1;
			unsigned : 6;
			unsigned TSIDL : 1;
			unsigned : 1;
			unsigned TON : 1;
		};
		struct {
			unsigned : 4;
			unsigned TCKPS0 : 1;
			unsigned TCKPS1 : 1;
		};
	};
} T3CONBITS;
 volatile T3CONBITS T3CONbits ;

 volatile unsigned int  TMR4 ;
 volatile unsigned int  TMR5HLD ;
 volatile unsigned int  TMR5 ;
 volatile unsigned int  PR4 ;
 volatile unsigned int  PR5 ;
 volatile unsigned int  T4CON ;
 typedef struct tagT4CONBITS {
	union {
		struct {
			unsigned : 1;
			unsigned TCS : 1;
			unsigned : 1;
			unsigned T32 : 1;
			unsigned TCKPS : 2;
			unsigned TGATE : 1;
			unsigned : 6;
			unsigned TSIDL : 1;
			unsigned : 1;
			unsigned TON : 1;
		};
		struct {
			unsigned : 4;
			unsigned TCKPS0 : 1;
			unsigned TCKPS1 : 1;
		};
	};
} T4CONBITS;
 volatile T4CONBITS T4CONbits ;

 volatile unsigned int  T5CON ;
 typedef struct tagT5CONBITS {
	union {
		struct {
			unsigned : 1;
			unsigned TCS : 1;
			unsigned : 2;
			unsigned TCKPS : 2;
			unsigned TGATE : 1;
			unsigned : 6;
			unsigned TSIDL : 1;
			unsigned : 1;
			unsigned TON : 1;
		};
		struct {
			unsigned : 4;
			unsigned TCKPS0 : 1;
			unsigned TCKPS1 : 1;
		};
	};
} T5CONBITS;
 volatile T5CONBITS T5CONbits ;


/* Generic structure of entire SFR area for Input Capture modules */
typedef struct tagIC {
	unsigned int icxbuf;
	unsigned int icxcon;
} IC, *PIC;

/* SFR blocks for Input Capture modules */
 volatile IC IC1 ;
 volatile IC IC2 ;
 volatile IC IC3 ;
 volatile IC IC4 ;
 volatile IC IC5 ;
 volatile IC IC6 ;
 volatile IC IC7 ;
 volatile IC IC8 ;

 volatile unsigned int  IC1BUF ;
 volatile unsigned int  IC1CON ;
 typedef struct tagIC1CONBITS {
	union {
		struct {
			unsigned ICM : 3;
			unsigned ICBNE : 1;
			unsigned ICOV : 1;
			unsigned ICI : 2;
			unsigned ICTMR : 1;
			unsigned : 5;
			unsigned ICSIDL : 1;
		};
		struct {
			unsigned ICM0 : 1;
			unsigned ICM1 : 1;
			unsigned ICM2 : 1;
			unsigned : 2;
			unsigned ICI0 : 1;
			unsigned ICI1 : 1;
		};
	};
} IC1CONBITS;
 volatile IC1CONBITS IC1CONbits ;

 volatile unsigned int  IC2BUF ;
 volatile unsigned int  IC2CON ;
 typedef struct tagIC2CONBITS {
	union {
		struct {
			unsigned ICM : 3;
			unsigned ICBNE : 1;
			unsigned ICOV : 1;
			unsigned ICI : 2;
			unsigned ICTMR : 1;
			unsigned : 5;
			unsigned ICSIDL : 1;
		};
		struct {
			unsigned ICM0 : 1;
			unsigned ICM1 : 1;
			unsigned ICM2 : 1;
			unsigned : 2;
			unsigned ICI0 : 1;
			unsigned ICI1 : 1;
		};
	};
} IC2CONBITS;
 volatile IC2CONBITS IC2CONbits ;

 volatile unsigned int  IC7BUF ;
 volatile unsigned int  IC7CON ;
 typedef struct tagIC7CONBITS {
	union {
		struct {
			unsigned ICM : 3;
			unsigned ICBNE : 1;
			unsigned ICOV : 1;
			unsigned ICI : 2;
			unsigned ICTMR : 1;
			unsigned : 5;
			unsigned ICSIDL : 1;
		};
		struct {
			unsigned ICM0 : 1;
			unsigned ICM1 : 1;
			unsigned ICM2 : 1;
			unsigned : 2;
			unsigned ICI0 : 1;
			unsigned ICI1 : 1;
		};
	};
} IC7CONBITS;
 volatile IC7CONBITS IC7CONbits ;

 volatile unsigned int  IC8BUF ;
 volatile unsigned int  IC8CON ;
 typedef struct tagIC8CONBITS {
	union {
		struct {
			unsigned ICM : 3;
			unsigned ICBNE : 1;
			unsigned ICOV : 1;
			unsigned ICI : 2;
			unsigned ICTMR : 1;
			unsigned : 5;
			unsigned ICSIDL : 1;
		};
		struct {
			unsigned ICM0 : 1;
			unsigned ICM1 : 1;
			unsigned ICM2 : 1;
			unsigned : 2;
			unsigned ICI0 : 1;
			unsigned ICI1 : 1;
		};
	};
} IC8CONBITS;
 volatile IC8CONBITS IC8CONbits ;


/* Generic structure of entire SFR area for Output Compare modules */
typedef struct tagOC {
	unsigned int ocxrs;
	unsigned int ocxr;
	unsigned int ocxcon;
} OC, *POC;

/* SFR blocks for Output Compare modules */
 volatile OC OC1 ;
 volatile OC OC2 ;
 volatile OC OC3 ;
 volatile OC OC4 ;
 volatile OC OC5 ;
 volatile OC OC6 ;
 volatile OC OC7 ;
 volatile OC OC8 ;

 volatile unsigned int  OC1RS ;
 volatile unsigned int  OC1R ;
 volatile unsigned int  OC1CON ;
 typedef struct tagOC1CONBITS {
	union {
		struct {
			unsigned OCM : 3;
			unsigned OCTSEL : 1;
			unsigned OCFLT : 1;
			unsigned : 8;
			unsigned OCSIDL : 1;
		};
		struct {
			unsigned OCM0 : 1;
			unsigned OCM1 : 1;
			unsigned OCM2 : 1;
		};
	};
} OC1CONBITS;
 volatile OC1CONBITS OC1CONbits ;

 volatile unsigned int  OC2RS ;
 volatile unsigned int  OC2R ;
 volatile unsigned int  OC2CON ;
 typedef struct tagOC2CONBITS {
	union {
		struct {
			unsigned OCM : 3;
			unsigned OCTSEL : 1;
			unsigned OCFLT : 1;
			unsigned : 8;
			unsigned OCSIDL : 1;
		};
		struct {
			unsigned OCM0 : 1;
			unsigned OCM1 : 1;
			unsigned OCM2 : 1;
		};
	};
} OC2CONBITS;
 volatile OC2CONBITS OC2CONbits ;

 volatile unsigned int  OC3RS ;
 volatile unsigned int  OC3R ;
 volatile unsigned int  OC3CON ;
 typedef struct tagOC3CONBITS {
	union {
		struct {
			unsigned OCM : 3;
			unsigned OCTSEL : 1;
			unsigned OCFLT : 1;
			unsigned : 8;
			unsigned OCSIDL : 1;
		};
		struct {
			unsigned OCM0 : 1;
			unsigned OCM1 : 1;
			unsigned OCM2 : 1;
		};
	};
} OC3CONBITS;
 volatile OC3CONBITS OC3CONbits ;

 volatile unsigned int  OC4RS ;
 volatile unsigned int  OC4R ;
 volatile unsigned int  OC4CON ;
 typedef struct tagOC4CONBITS {
	union {
		struct {
			unsigned OCM : 3;
			unsigned OCTSEL : 1;
			unsigned OCFLT : 1;
			unsigned : 8;
			unsigned OCSIDL : 1;
		};
		struct {
			unsigned OCM0 : 1;
			unsigned OCM1 : 1;
			unsigned OCM2 : 1;
		};
	};
} OC4CONBITS;
 volatile OC4CONBITS OC4CONbits ;

 volatile unsigned int  P1TCON ;
 typedef struct tagP1TCONBITS {
	union {
		struct {
			unsigned PTMOD : 2;
			unsigned PTCKPS : 2;
			unsigned PTOPS : 4;
			unsigned : 5;
			unsigned PTSIDL : 1;
			unsigned : 1;
			unsigned PTEN : 1;
		};
		struct {
			unsigned PTMOD0 : 1;
			unsigned PTMOD1 : 1;
			unsigned PTCKPS0 : 1;
			unsigned PTCKPS1 : 1;
			unsigned PTOPS0 : 1;
			unsigned PTOPS1 : 1;
			unsigned PTOPS2 : 1;
			unsigned PTOPS3 : 1;
		};
	};
} P1TCONBITS;
 volatile P1TCONBITS P1TCONbits ;

 volatile unsigned int  PTCON ;
 typedef struct tagPTCONBITS {
	union {
		struct {
			unsigned PTMOD : 2;
			unsigned PTCKPS : 2;
			unsigned PTOPS : 4;
			unsigned : 5;
			unsigned PTSIDL : 1;
			unsigned : 1;
			unsigned PTEN : 1;
		};
		struct {
			unsigned PTMOD0 : 1;
			unsigned PTMOD1 : 1;
			unsigned PTCKPS0 : 1;
			unsigned PTCKPS1 : 1;
			unsigned PTOPS0 : 1;
			unsigned PTOPS1 : 1;
			unsigned PTOPS2 : 1;
			unsigned PTOPS3 : 1;
		};
	};
} PTCONBITS;
 volatile PTCONBITS PTCONbits ;

 volatile unsigned int  P1TMR ;
typedef struct tagP1TMRBITS {
	unsigned PTMR : 15;
	unsigned PTDIR : 1;
} P1TMRBITS;
 volatile P1TMRBITS P1TMRbits ;

 volatile unsigned int  PTMR ;
typedef struct tagPTMRBITS {
	unsigned PTMR : 15;
	unsigned PTDIR : 1;
} PTMRBITS;
 volatile PTMRBITS PTMRbits ;

 volatile unsigned int  P1TPER ;
typedef struct tagP1TPERBITS {
	unsigned PTPER : 15;
} P1TPERBITS;
 volatile P1TPERBITS P1TPERbits ;

 volatile unsigned int  PTPER ;
typedef struct tagPTPERBITS {
	unsigned PTPER : 15;
} PTPERBITS;
 volatile PTPERBITS PTPERbits ;

 volatile unsigned int  P1SECMP ;
typedef struct tagP1SECMPBITS {
	unsigned SEVTCMP : 15;
	unsigned SEVTDIR : 1;
} P1SECMPBITS;
 volatile P1SECMPBITS P1SECMPbits ;

 volatile unsigned int  SEVTCMP ;
typedef struct tagSEVTCMPBITS {
	unsigned SEVTCMP : 15;
	unsigned SEVTDIR : 1;
} SEVTCMPBITS;
 volatile SEVTCMPBITS SEVTCMPbits ;

 volatile unsigned int  PWM1CON1 ;
typedef struct tagPWM1CON1BITS {
	unsigned PEN1L : 1;
	unsigned PEN2L : 1;
	unsigned PEN3L : 1;
	unsigned : 1;
	unsigned PEN1H : 1;
	unsigned PEN2H : 1;
	unsigned PEN3H : 1;
	unsigned : 1;
	unsigned PMOD1 : 1;
	unsigned PMOD2 : 1;
	unsigned PMOD3 : 1;
} PWM1CON1BITS;
 volatile PWM1CON1BITS PWM1CON1bits ;

 volatile unsigned int  PWMCON1 ;
typedef struct tagPWMCON1BITS {
	unsigned PEN1L : 1;
	unsigned PEN2L : 1;
	unsigned PEN3L : 1;
	unsigned : 1;
	unsigned PEN1H : 1;
	unsigned PEN2H : 1;
	unsigned PEN3H : 1;
	unsigned : 1;
	unsigned PMOD1 : 1;
	unsigned PMOD2 : 1;
	unsigned PMOD3 : 1;
} PWMCON1BITS;
 volatile PWMCON1BITS PWMCON1bits ;

 volatile unsigned int  PWM1CON2 ;
 typedef struct tagPWM1CON2BITS {
	union {
		struct {
			unsigned UDIS : 1;
			unsigned OSYNC : 1;
			unsigned IUE : 1;
			unsigned : 5;
			unsigned SEVOPS : 4;
		};
		struct {
			unsigned : 8;
			unsigned SEVOPS0 : 1;
			unsigned SEVOPS1 : 1;
			unsigned SEVOPS2 : 1;
			unsigned SEVOPS3 : 1;
		};
	};
} PWM1CON2BITS;
 volatile PWM1CON2BITS PWM1CON2bits ;

 volatile unsigned int  PWMCON2 ;
 typedef struct tagPWMCON2BITS {
	union {
		struct {
			unsigned UDIS : 1;
			unsigned OSYNC : 1;
			unsigned IUE : 1;
			unsigned : 5;
			unsigned SEVOPS : 4;
		};
		struct {
			unsigned : 8;
			unsigned SEVOPS0 : 1;
			unsigned SEVOPS1 : 1;
			unsigned SEVOPS2 : 1;
			unsigned SEVOPS3 : 1;
		};
	};
} PWMCON2BITS;
 volatile PWMCON2BITS PWMCON2bits ;

 volatile unsigned int  DTCON1 ;
 typedef struct tagDTCON1BITS {
	union {
		struct {
			unsigned DTA : 6;
			unsigned DTAPS : 2;
			unsigned DTB : 6;
			unsigned DTBPS : 2;
		};
		struct {
			unsigned DTA0 : 1;
			unsigned DTA1 : 1;
			unsigned DTA2 : 1;
			unsigned DTA3 : 1;
			unsigned DTA4 : 1;
			unsigned DTA5 : 1;
			unsigned DTAPS0 : 1;
			unsigned DTAPS1 : 1;
			unsigned DTB0 : 1;
			unsigned DTB1 : 1;
			unsigned DTB2 : 1;
			unsigned DTB3 : 1;
			unsigned DTB4 : 1;
			unsigned DTB5 : 1;
			unsigned DTBPS0 : 1;
			unsigned DTBPS1 : 1;
		};
	};
} DTCON1BITS;
 volatile DTCON1BITS DTCON1bits ;

 volatile unsigned int  P1DTCON1 ;
 typedef struct tagP1DTCON1BITS {
	union {
		struct {
			unsigned DTA : 6;
			unsigned DTAPS : 2;
			unsigned DTB : 6;
			unsigned DTBPS : 2;
		};
		struct {
			unsigned DTA0 : 1;
			unsigned DTA1 : 1;
			unsigned DTA2 : 1;
			unsigned DTA3 : 1;
			unsigned DTA4 : 1;
			unsigned DTA5 : 1;
			unsigned DTAPS0 : 1;
			unsigned DTAPS1 : 1;
			unsigned DTB0 : 1;
			unsigned DTB1 : 1;
			unsigned DTB2 : 1;
			unsigned DTB3 : 1;
			unsigned DTB4 : 1;
			unsigned DTB5 : 1;
			unsigned DTBPS0 : 1;
			unsigned DTBPS1 : 1;
		};
	};
} P1DTCON1BITS;
 volatile P1DTCON1BITS P1DTCON1bits ;

 volatile unsigned int  DTCON2 ;
typedef struct tagDTCON2BITS {
	unsigned DTS1I : 1;
	unsigned DTS1A : 1;
	unsigned DTS2I : 1;
	unsigned DTS2A : 1;
	unsigned DTS3I : 1;
	unsigned DTS3A : 1;
} DTCON2BITS;
 volatile DTCON2BITS DTCON2bits ;

 volatile unsigned int  P1DTCON2 ;
typedef struct tagP1DTCON2BITS {
	unsigned DTS1I : 1;
	unsigned DTS1A : 1;
	unsigned DTS2I : 1;
	unsigned DTS2A : 1;
	unsigned DTS3I : 1;
	unsigned DTS3A : 1;
} P1DTCON2BITS;
 volatile P1DTCON2BITS P1DTCON2bits ;

 volatile unsigned int  FLTACON ;
typedef struct tagFLTACONBITS {
	unsigned FAEN1 : 1;
	unsigned FAEN2 : 1;
	unsigned FAEN3 : 1;
	unsigned : 4;
	unsigned FLTAM : 1;
	unsigned FAOV1L : 1;
	unsigned FAOV1H : 1;
	unsigned FAOV2L : 1;
	unsigned FAOV2H : 1;
	unsigned FAOV3L : 1;
	unsigned FAOV3H : 1;
} FLTACONBITS;
 volatile FLTACONBITS FLTACONbits ;

 volatile unsigned int  P1FLTACON ;
typedef struct tagP1FLTACONBITS {
	unsigned FAEN1 : 1;
	unsigned FAEN2 : 1;
	unsigned FAEN3 : 1;
	unsigned : 4;
	unsigned FLTAM : 1;
	unsigned FAOV1L : 1;
	unsigned FAOV1H : 1;
	unsigned FAOV2L : 1;
	unsigned FAOV2H : 1;
	unsigned FAOV3L : 1;
	unsigned FAOV3H : 1;
} P1FLTACONBITS;
 volatile P1FLTACONBITS P1FLTACONbits ;

 volatile unsigned int  OVDCON ;
typedef struct tagOVDCONBITS {
	unsigned POUT1L : 1;
	unsigned POUT1H : 1;
	unsigned POUT2L : 1;
	unsigned POUT2H : 1;
	unsigned POUT3L : 1;
	unsigned POUT3H : 1;
	unsigned : 2;
	unsigned POVD1L : 1;
	unsigned POVD1H : 1;
	unsigned POVD2L : 1;
	unsigned POVD2H : 1;
	unsigned POVD3L : 1;
	unsigned POVD3H : 1;
} OVDCONBITS;
 volatile OVDCONBITS OVDCONbits ;

 volatile unsigned int  P1OVDCON ;
typedef struct tagP1OVDCONBITS {
	unsigned POUT1L : 1;
	unsigned POUT1H : 1;
	unsigned POUT2L : 1;
	unsigned POUT2H : 1;
	unsigned POUT3L : 1;
	unsigned POUT3H : 1;
	unsigned : 2;
	unsigned POVD1L : 1;
	unsigned POVD1H : 1;
	unsigned POVD2L : 1;
	unsigned POVD2H : 1;
	unsigned POVD3L : 1;
	unsigned POVD3H : 1;
} P1OVDCONBITS;
 volatile P1OVDCONBITS P1OVDCONbits ;

 volatile unsigned int  P1DC1 ;
 volatile unsigned int  PDC1;
 volatile unsigned int  P1DC2 ;
 volatile unsigned int  PDC2;
 volatile unsigned int  P1DC3 ;
 volatile unsigned int  PDC3 ;
 volatile unsigned int  QEI1CON ;
 typedef struct tagQEI1CONBITS {
	union {
		struct {
			unsigned UPDN_SRC : 1;
			unsigned TQCS : 1;
			unsigned POSRES : 1;
			unsigned TQCKPS : 2;
			unsigned TQGATE : 1;
			unsigned PCDOUT : 1;
			unsigned SWPAB : 1;
			unsigned QEIM : 3;
			unsigned UPDN : 1;
			unsigned INDX : 1;
			unsigned QEISIDL : 1;
			unsigned : 1;
			unsigned CNTERR : 1;
		};
		struct {
			unsigned : 3;
			unsigned TQCKPS0 : 1;
			unsigned TQCKPS1 : 1;
			unsigned : 3;
			unsigned QEIM0 : 1;
			unsigned QEIM1 : 1;
			unsigned QEIM2 : 1;
		};
	};
} QEI1CONBITS;
 volatile QEI1CONBITS QEI1CONbits ;

 volatile unsigned int  QEICON ;
 typedef struct tagQEICONBITS {
	union {
		struct {
			unsigned UPDN_SRC : 1;
			unsigned TQCS : 1;
			unsigned POSRES : 1;
			unsigned TQCKPS : 2;
			unsigned TQGATE : 1;
			unsigned PCDOUT : 1;
			unsigned SWPAB : 1;
			unsigned QEIM : 3;
			unsigned UPDN : 1;
			unsigned INDX : 1;
			unsigned QEISIDL : 1;
			unsigned : 1;
			unsigned CNTERR : 1;
		};
		struct {
			unsigned : 3;
			unsigned TQCKPS0 : 1;
			unsigned TQCKPS1 : 1;
			unsigned : 3;
			unsigned QEIM0 : 1;
			unsigned QEIM1 : 1;
			unsigned QEIM2 : 1;
		};
	};
} QEICONBITS;
 volatile QEICONBITS QEICONbits ;

 volatile unsigned int  DFLT1CON ;
 typedef struct tagDFLT1CONBITS {
	union {
		struct {
			unsigned : 4;
			unsigned QECK : 3;
			unsigned QEOUT : 1;
			unsigned CEID : 1;
			unsigned IMV : 2;
		};
		struct {
			unsigned : 4;
			unsigned QECK0 : 1;
			unsigned QECK1 : 1;
			unsigned QECK2 : 1;
			unsigned : 2;
			unsigned IMV0 : 1;
			unsigned IMV1 : 1;
		};
	};
} DFLT1CONBITS;
 volatile DFLT1CONBITS DFLT1CONbits ;

 volatile unsigned int  DFLTCON ;
 typedef struct tagDFLTCONBITS {
	union {
		struct {
			unsigned : 4;
			unsigned QECK : 3;
			unsigned QEOUT : 1;
			unsigned CEID : 1;
			unsigned IMV : 2;
		};
		struct {
			unsigned : 4;
			unsigned QECK0 : 1;
			unsigned QECK1 : 1;
			unsigned QECK2 : 1;
			unsigned : 2;
			unsigned IMV0 : 1;
			unsigned IMV1 : 1;
		};
	};
} DFLTCONBITS;
 volatile DFLTCONBITS DFLTCONbits ;

 volatile unsigned int  POS1CNT ;
 volatile unsigned int  POSCNT ;
 volatile unsigned int  MAX1CNT ;
 volatile unsigned int  MAXCNT ;
 volatile unsigned int  QEI2CON ;
 typedef struct tagQEI2CONBITS {
	union {
		struct {
			unsigned UPDN_SRC : 1;
			unsigned TQCS : 1;
			unsigned POSRES : 1;
			unsigned TQCKPS : 2;
			unsigned TQGATE : 1;
			unsigned PCDOUT : 1;
			unsigned SWPAB : 1;
			unsigned QEIM : 3;
			unsigned UPDN : 1;
			unsigned INDX : 1;
			unsigned QEISIDL : 1;
			unsigned : 1;
			unsigned CNTERR : 1;
		};
		struct {
			unsigned : 3;
			unsigned TQCKPS0 : 1;
			unsigned TQCKPS1 : 1;
			unsigned : 3;
			unsigned QEIM0 : 1;
			unsigned QEIM1 : 1;
			unsigned QEIM2 : 1;
		};
	};
} QEI2CONBITS;
 volatile QEI2CONBITS QEI2CONbits ;

 volatile unsigned int  DFLT2CON ;
 typedef struct tagDFLT2CONBITS {
	union {
		struct {
			unsigned : 4;
			unsigned QECK : 3;
			unsigned QEOUT : 1;
			unsigned CEID : 1;
			unsigned IMV : 2;
		};
		struct {
			unsigned : 4;
			unsigned QECK0 : 1;
			unsigned QECK1 : 1;
			unsigned QECK2 : 1;
			unsigned : 2;
			unsigned IMV0 : 1;
			unsigned IMV1 : 1;
		};
	};
} DFLT2CONBITS;
 volatile DFLT2CONBITS DFLT2CONbits ;

 volatile unsigned int  POS2CNT ;
 volatile unsigned int  MAX2CNT ;
 volatile unsigned int  I2C1RCV ;
 volatile unsigned int  I2CRCV ;
 volatile unsigned int  I2C1TRN ;
 volatile unsigned int  I2CTRN ;
 volatile unsigned int  I2C1BRG ;
 volatile unsigned int  I2C1CON ;
typedef struct tagI2C1CONBITS {
	unsigned SEN : 1;
	unsigned RSEN : 1;
	unsigned PEN : 1;
	unsigned RCEN : 1;
	unsigned ACKEN : 1;
	unsigned ACKDT : 1;
	unsigned STREN : 1;
	unsigned GCEN : 1;
	unsigned SMEN : 1;
	unsigned DISSLW : 1;
	unsigned A10M : 1;
	unsigned IPMIEN : 1;
	unsigned SCLREL : 1;
	unsigned I2CSIDL : 1;
	unsigned : 1;
	unsigned I2CEN : 1;
} I2C1CONBITS;
 volatile I2C1CONBITS I2C1CONbits ;

 volatile unsigned int  I2CCON ;
typedef struct tagI2CCONBITS {
	unsigned SEN : 1;
	unsigned RSEN : 1;
	unsigned PEN : 1;
	unsigned RCEN : 1;
	unsigned ACKEN : 1;
	unsigned ACKDT : 1;
	unsigned STREN : 1;
	unsigned GCEN : 1;
	unsigned SMEN : 1;
	unsigned DISSLW : 1;
	unsigned A10M : 1;
	unsigned IPMIEN : 1;
	unsigned SCLREL : 1;
	unsigned I2CSIDL : 1;
	unsigned : 1;
	unsigned I2CEN : 1;
} I2CCONBITS;
 volatile I2CCONBITS I2CCONbits ;

 volatile unsigned int  I2C1STAT ;
typedef struct tagI2C1STATBITS {
	unsigned TBF : 1;
	unsigned RBF : 1;
	unsigned R_W : 1;
	unsigned S : 1;
	unsigned P : 1;
	unsigned D_A : 1;
	unsigned I2COV : 1;
	unsigned IWCOL : 1;
	unsigned ADD10 : 1;
	unsigned GCSTAT : 1;
	unsigned BCL : 1;
	unsigned : 3;
	unsigned TRSTAT : 1;
	unsigned ACKSTAT : 1;
} I2C1STATBITS;
 volatile I2C1STATBITS I2C1STATbits ;

 volatile unsigned int  I2CSTAT ;
typedef struct tagI2CSTATBITS {
	unsigned TBF : 1;
	unsigned RBF : 1;
	unsigned R_W : 1;
	unsigned S : 1;
	unsigned P : 1;
	unsigned D_A : 1;
	unsigned I2COV : 1;
	unsigned IWCOL : 1;
	unsigned ADD10 : 1;
	unsigned GCSTAT : 1;
	unsigned BCL : 1;
	unsigned : 3;
	unsigned TRSTAT : 1;
	unsigned ACKSTAT : 1;
} I2CSTATBITS;
 volatile I2CSTATBITS I2CSTATbits ;

 volatile unsigned int  I2C1ADD ;
 volatile unsigned int  I2CADD ;
 volatile unsigned int  I2C1MSK ;

/* Generic structure of entire SFR area for each UART module */
typedef struct tagUART {
	unsigned int uxmode;
	unsigned int uxsta;
	unsigned int uxtxreg;
	unsigned int uxrxreg;
	unsigned int uxbrg;
} UART, *PUART;

#define UxMODEBITS U1MODEBITS
#define UxSTABITS U1STABITS
#define UxTXREGBITS U1TXREGBITS
#define UxRXREGBITS U1RXREGBITS
#define UxBRGBITS U1BRGBITS

/* SFR blocks for each UART module */
 volatile UART UART1 ;
 volatile UART UART2 ;

 volatile unsigned int  U1MODE ;
 typedef struct tagU1MODEBITS {
	union {
		struct {
			unsigned STSEL : 1;
			unsigned PDSEL : 2;
			unsigned BRGH : 1;
			unsigned URXINV : 1;
			unsigned ABAUD : 1;
			unsigned LPBACK : 1;
			unsigned WAKE : 1;
			unsigned UEN : 2;
			unsigned : 1;
			unsigned RTSMD : 1;
			unsigned IREN : 1;
			unsigned USIDL : 1;
			unsigned : 1;
			unsigned UARTEN : 1;
		};
		struct {
			unsigned : 1;
			unsigned PDSEL0 : 1;
			unsigned PDSEL1 : 1;
			unsigned : 5;
			unsigned UEN0 : 1;
			unsigned UEN1 : 1;
		};
	};
} U1MODEBITS;
 volatile U1MODEBITS U1MODEbits ;

 volatile unsigned int  U1STA ;
 typedef struct tagU1STABITS {
	union {
		struct {
			unsigned URXDA : 1;
			unsigned OERR : 1;
			unsigned FERR : 1;
			unsigned PERR : 1;
			unsigned RIDLE : 1;
			unsigned ADDEN : 1;
			unsigned URXISEL : 2;
			unsigned TRMT : 1;
			unsigned UTXBF : 1;
			unsigned UTXEN : 1;
			unsigned UTXBRK : 1;
			unsigned : 1;
			unsigned UTXISEL0 : 1;
			unsigned UTXINV : 1;
			unsigned UTXISEL1 : 1;
		};
		struct {
			unsigned : 6;
			unsigned URXISEL0 : 1;
			unsigned URXISEL1 : 1;
		};
	};
} U1STABITS;
 volatile U1STABITS U1STAbits ;

 volatile unsigned int  U1TXREG ;
typedef struct tagU1TXREGBITS {
	unsigned UTXREG0 : 1;
	unsigned UTXREG1 : 1;
	unsigned UTXREG2 : 1;
	unsigned UTXREG3 : 1;
	unsigned UTXREG4 : 1;
	unsigned UTXREG5 : 1;
	unsigned UTXREG6 : 1;
	unsigned UTXREG7 : 1;
	unsigned UTXREG8 : 1;
} U1TXREGBITS;
 volatile U1TXREGBITS U1TXREGbits ;

 volatile unsigned int  U1RXREG ;
typedef struct tagU1RXREGBITS {
	unsigned URXREG0 : 1;
	unsigned URXREG1 : 1;
	unsigned URXREG2 : 1;
	unsigned URXREG3 : 1;
	unsigned URXREG4 : 1;
	unsigned URXREG5 : 1;
	unsigned URXREG6 : 1;
	unsigned URXREG7 : 1;
	unsigned URXREG8 : 1;
} U1RXREGBITS;
 volatile U1RXREGBITS U1RXREGbits ;

 volatile unsigned int  U1BRG ;
 volatile unsigned int  U2MODE ;
 typedef struct tagU2MODEBITS {
	union {
		struct {
			unsigned STSEL : 1;
			unsigned PDSEL : 2;
			unsigned BRGH : 1;
			unsigned URXINV : 1;
			unsigned ABAUD : 1;
			unsigned LPBACK : 1;
			unsigned WAKE : 1;
			unsigned UEN : 2;
			unsigned : 1;
			unsigned RTSMD : 1;
			unsigned IREN : 1;
			unsigned USIDL : 1;
			unsigned : 1;
			unsigned UARTEN : 1;
		};
		struct {
			unsigned : 1;
			unsigned PDSEL0 : 1;
			unsigned PDSEL1 : 1;
			unsigned : 5;
			unsigned UEN0 : 1;
			unsigned UEN1 : 1;
		};
	};
} U2MODEBITS;
 volatile U2MODEBITS U2MODEbits ;

 volatile unsigned int  U2STA ;
 typedef struct tagU2STABITS {
	union {
		struct {
			unsigned URXDA : 1;
			unsigned OERR : 1;
			unsigned FERR : 1;
			unsigned PERR : 1;
			unsigned RIDLE : 1;
			unsigned ADDEN : 1;
			unsigned URXISEL : 2;
			unsigned TRMT : 1;
			unsigned UTXBF : 1;
			unsigned UTXEN : 1;
			unsigned UTXBRK : 1;
			unsigned : 1;
			unsigned UTXISEL0 : 1;
			unsigned UTXINV : 1;
			unsigned UTXISEL1 : 1;
		};
		struct {
			unsigned : 6;
			unsigned URXISEL0 : 1;
			unsigned URXISEL1 : 1;
		};
	};
} U2STABITS;
 volatile U2STABITS U2STAbits ;

 volatile unsigned int  U2TXREG ;
typedef struct tagU2TXREGBITS {
	unsigned UTXREG0 : 1;
	unsigned UTXREG1 : 1;
	unsigned UTXREG2 : 1;
	unsigned UTXREG3 : 1;
	unsigned UTXREG4 : 1;
	unsigned UTXREG5 : 1;
	unsigned UTXREG6 : 1;
	unsigned UTXREG7 : 1;
	unsigned UTXREG8 : 1;
} U2TXREGBITS;
 volatile U2TXREGBITS U2TXREGbits ;

 volatile unsigned char  U2RXREG ;
typedef struct tagU2RXREGBITS {
	unsigned URXREG0 : 1;
	unsigned URXREG1 : 1;
	unsigned URXREG2 : 1;
	unsigned URXREG3 : 1;
	unsigned URXREG4 : 1;
	unsigned URXREG5 : 1;
	unsigned URXREG6 : 1;
	unsigned URXREG7 : 1;
	unsigned URXREG8 : 1;
} U2RXREGBITS;
 volatile U2RXREGBITS U2RXREGbits ;

 volatile unsigned int  U2BRG ;

/* Generic structure of entire SFR area for each SPI_module */
typedef struct tagSPI {
	unsigned int spixstat;
	unsigned int spixcon1;
	unsigned int spixcon2;
	unsigned int unused;
	unsigned int spixbuf;
} SPI, *PSPI;

#define SPIxSTATBITS SPI1STATBITS
#define SPIxCONBITS SPI1CONBITS

/* SFR blocks for each SPI_module */
 volatile SPI SPI1 ;
 volatile SPI SPI2 ;

 volatile unsigned int  SPI1STAT ;
typedef struct tagSPI1STATBITS {
	unsigned SPIRBF : 1;
	unsigned SPITBF : 1;
	unsigned : 4;
	unsigned SPIROV : 1;
	unsigned : 6;
	unsigned SPISIDL : 1;
	unsigned : 1;
	unsigned SPIEN : 1;
} SPI1STATBITS;
 volatile SPI1STATBITS SPI1STATbits ;

 volatile unsigned int  SPI1CON1 ;
 typedef struct tagSPI1CON1BITS {
	union {
		struct {
			unsigned PPRE : 2;
			unsigned SPRE : 3;
			unsigned MSTEN : 1;
			unsigned CKP : 1;
			unsigned SSEN : 1;
			unsigned CKE : 1;
			unsigned SMP : 1;
			unsigned MODE16 : 1;
			unsigned DISSDO : 1;
			unsigned DISSCK : 1;
		};
		struct {
			unsigned PPRE0 : 1;
			unsigned PPRE1 : 1;
			unsigned SPRE0 : 1;
			unsigned SPRE1 : 1;
			unsigned SPRE2 : 1;
		};
	};
} SPI1CON1BITS;
 volatile SPI1CON1BITS SPI1CON1bits ;

 volatile unsigned int  SPI1CON2 ;
typedef struct tagSPI1CON2BITS {
	unsigned : 1;
	unsigned FRMDLY : 1;
	unsigned : 11;
	unsigned FRMPOL : 1;
	unsigned SPIFSD : 1;
	unsigned FRMEN : 1;
} SPI1CON2BITS;
 volatile SPI1CON2BITS SPI1CON2bits ;

 volatile unsigned int  SPI1BUF ;
 volatile unsigned int  SPI2STAT ;
typedef struct tagSPI2STATBITS {
	unsigned SPIRBF : 1;
	unsigned SPITBF : 1;
	unsigned : 4;
	unsigned SPIROV : 1;
	unsigned : 6;
	unsigned SPISIDL : 1;
	unsigned : 1;
	unsigned SPIEN : 1;
} SPI2STATBITS;
 volatile SPI2STATBITS SPI2STATbits ;

 volatile unsigned int  SPI2CON1 ;
 typedef struct tagSPI2CON1BITS {
	union {
		struct {
			unsigned PPRE : 2;
			unsigned SPRE : 3;
			unsigned MSTEN : 1;
			unsigned CKP : 1;
			unsigned SSEN : 1;
			unsigned CKE : 1;
			unsigned SMP : 1;
			unsigned MODE16 : 1;
			unsigned DISSDO : 1;
			unsigned DISSCK : 1;
		};
		struct {
			unsigned PPRE0 : 1;
			unsigned PPRE1 : 1;
			unsigned SPRE0 : 1;
			unsigned SPRE1 : 1;
			unsigned SPRE2 : 1;
		};
	};
} SPI2CON1BITS;
 volatile SPI2CON1BITS SPI2CON1bits ;

 volatile unsigned int  SPI2CON2 ;
typedef struct tagSPI2CON2BITS {
	unsigned : 1;
	unsigned FRMDLY : 1;
	unsigned : 11;
	unsigned FRMPOL : 1;
	unsigned SPIFSD : 1;
	unsigned FRMEN : 1;
} SPI2CON2BITS;
 volatile SPI2CON2BITS SPI2CON2bits ;

 volatile unsigned int  SPI2BUF ;
 volatile unsigned int  TRISA ;
typedef struct tagTRISABITS {
	unsigned TRISA0 : 1;
	unsigned TRISA1 : 1;
	unsigned TRISA2 : 1;
	unsigned TRISA3 : 1;
	unsigned TRISA4 : 1;
	unsigned : 2;
	unsigned TRISA7 : 1;
	unsigned TRISA8 : 1;
	unsigned TRISA9 : 1;
	unsigned TRISA10 : 1;
} TRISABITS;
 volatile TRISABITS TRISAbits ;

 volatile unsigned int  PORTA ;
typedef struct tagPORTABITS {
	unsigned RA0 : 1;
	unsigned RA1 : 1;
	unsigned RA2 : 1;
	unsigned RA3 : 1;
	unsigned RA4 : 1;
	unsigned : 2;
	unsigned RA7 : 1;
	unsigned RA8 : 1;
	unsigned RA9 : 1;
	unsigned RA10 : 1;
} PORTABITS;
 volatile PORTABITS PORTAbits ;

 volatile unsigned int  LATA ;
typedef struct tagLATABITS {
	unsigned LATA0 : 1;
	unsigned LATA1 : 1;
	unsigned LATA2 : 1;
	unsigned LATA3 : 1;
	unsigned LATA4 : 1;
	unsigned : 2;
	unsigned LATA7 : 1;
	unsigned LATA8 : 1;
	unsigned LATA9 : 1;
	unsigned LATA10 : 1;
} LATABITS;
 volatile LATABITS LATAbits ;

 volatile unsigned int  ODCA ;
typedef struct tagODCABITS {
	unsigned ODCA0 : 1;
	unsigned ODCA1 : 1;
	unsigned ODCA2 : 1;
	unsigned ODCA3 : 1;
	unsigned ODCA4 : 1;
	unsigned : 2;
	unsigned ODCA7 : 1;
	unsigned ODCA8 : 1;
	unsigned ODCA9 : 1;
	unsigned ODCA10 : 1;
} ODCABITS;
 volatile ODCABITS ODCAbits ;

 volatile unsigned int  TRISB ;
typedef struct tagTRISBBITS {
	unsigned TRISB0 : 1;
	unsigned TRISB1 : 1;
	unsigned TRISB2 : 1;
	unsigned TRISB3 : 1;
	unsigned TRISB4 : 1;
	unsigned TRISB5 : 1;
	unsigned TRISB6 : 1;
	unsigned TRISB7 : 1;
	unsigned TRISB8 : 1;
	unsigned TRISB9 : 1;
	unsigned TRISB10 : 1;
	unsigned TRISB11 : 1;
	unsigned TRISB12 : 1;
	unsigned TRISB13 : 1;
	unsigned TRISB14 : 1;
	unsigned TRISB15 : 1;
} TRISBBITS;
 volatile TRISBBITS TRISBbits ;

 volatile unsigned int  PORTB ;
typedef struct tagPORTBBITS {
	unsigned RB0 : 1;
	unsigned RB1 : 1;
	unsigned RB2 : 1;
	unsigned RB3 : 1;
	unsigned RB4 : 1;
	unsigned RB5 : 1;
	unsigned RB6 : 1;
	unsigned RB7 : 1;
	unsigned RB8 : 1;
	unsigned RB9 : 1;
	unsigned RB10 : 1;
	unsigned RB11 : 1;
	unsigned RB12 : 1;
	unsigned RB13 : 1;
	unsigned RB14 : 1;
	unsigned RB15 : 1;
} PORTBBITS;
 volatile PORTBBITS PORTBbits ;

 volatile unsigned int  LATB ;
typedef struct tagLATBBITS {
	unsigned LATB0 : 1;
	unsigned LATB1 : 1;
	unsigned LATB2 : 1;
	unsigned LATB3 : 1;
	unsigned LATB4 : 1;
	unsigned LATB5 : 1;
	unsigned LATB6 : 1;
	unsigned LATB7 : 1;
	unsigned LATB8 : 1;
	unsigned LATB9 : 1;
	unsigned LATB10 : 1;
	unsigned LATB11 : 1;
	unsigned LATB12 : 1;
	unsigned LATB13 : 1;
	unsigned LATB14 : 1;
	unsigned LATB15 : 1;
} LATBBITS;
 volatile LATBBITS LATBbits ;

 volatile unsigned int  ODCB ;
typedef struct tagODCBBITS {
	unsigned ODCB0 : 1;
	unsigned ODCB1 : 1;
	unsigned ODCB2 : 1;
	unsigned ODCB3 : 1;
	unsigned ODCB4 : 1;
	unsigned ODCB5 : 1;
	unsigned ODCB6 : 1;
	unsigned ODCB7 : 1;
	unsigned ODCB8 : 1;
	unsigned ODCB9 : 1;
	unsigned ODCB10 : 1;
	unsigned ODCB11 : 1;
	unsigned ODCB12 : 1;
	unsigned ODCB13 : 1;
	unsigned ODCB14 : 1;
	unsigned ODCB15 : 1;
} ODCBBITS;
 volatile ODCBBITS ODCBbits ;

 volatile unsigned int  TRISC ;
typedef struct tagTRISCBITS {
	unsigned TRISC0 : 1;
	unsigned TRISC1 : 1;
	unsigned TRISC2 : 1;
	unsigned TRISC3 : 1;
	unsigned TRISC4 : 1;
	unsigned TRISC5 : 1;
	unsigned TRISC6 : 1;
	unsigned TRISC7 : 1;
	unsigned TRISC8 : 1;
	unsigned TRISC9 : 1;
} TRISCBITS;
 volatile TRISCBITS TRISCbits ;

 volatile unsigned int  PORTC ;
typedef struct tagPORTCBITS {
	unsigned RC0 : 1;
	unsigned RC1 : 1;
	unsigned RC2 : 1;
	unsigned RC3 : 1;
	unsigned RC4 : 1;
	unsigned RC5 : 1;
	unsigned RC6 : 1;
	unsigned RC7 : 1;
	unsigned RC8 : 1;
	unsigned RC9 : 1;
} PORTCBITS;
 volatile PORTCBITS PORTCbits ;

 volatile unsigned int  LATC ;
typedef struct tagLATCBITS {
	unsigned LATC0 : 1;
	unsigned LATC1 : 1;
	unsigned LATC2 : 1;
	unsigned LATC3 : 1;
	unsigned LATC4 : 1;
	unsigned LATC5 : 1;
	unsigned LATC6 : 1;
	unsigned LATC7 : 1;
	unsigned LATC8 : 1;
	unsigned LATC9 : 1;
} LATCBITS;
 volatile LATCBITS LATCbits ;

 volatile unsigned int  ODCC ;
typedef struct tagODCCBITS {
	unsigned ODCC0 : 1;
	unsigned ODCC1 : 1;
	unsigned ODCC2 : 1;
	unsigned ODCC3 : 1;
	unsigned ODCC4 : 1;
	unsigned ODCC5 : 1;
	unsigned ODCC6 : 1;
	unsigned ODCC7 : 1;
	unsigned ODCC8 : 1;
	unsigned ODCC9 : 1;
} ODCCBITS;
 volatile ODCCBITS ODCCbits ;

 volatile unsigned int  PADCFG1 ;
typedef struct tagPADCFG1BITS {
	unsigned PMPTTL : 1;
	unsigned RTSECSEL : 1;
} PADCFG1BITS;
 volatile PADCFG1BITS PADCFG1bits ;

 volatile unsigned int  ADC1BUF0 ;
 volatile unsigned int  ADCBUF0 ;
 volatile unsigned int  AD1CON1 ;
 typedef struct tagAD1CON1BITS {
	union {
		struct {
			unsigned DONE : 1;
			unsigned SAMP : 1;
			unsigned ASAM : 1;
			unsigned SIMSAM : 1;
			unsigned : 1;
			unsigned SSRC : 3;
			unsigned FORM : 2;
			unsigned AD12B : 1;
			unsigned : 1;
			unsigned ADDMABM : 1;
			unsigned ADSIDL : 1;
			unsigned : 1;
			unsigned ADON : 1;
		};
		struct {
			unsigned : 5;
			unsigned SSRC0 : 1;
			unsigned SSRC1 : 1;
			unsigned SSRC2 : 1;
			unsigned FORM0 : 1;
			unsigned FORM1 : 1;
		};
	};
} AD1CON1BITS;
 volatile AD1CON1BITS AD1CON1bits ;

 volatile unsigned int  AD1CON2 ;
 typedef struct tagAD1CON2BITS {
	union {
		struct {
			unsigned ALTS : 1;
			unsigned BUFM : 1;
			unsigned SMPI : 4;
			unsigned : 1;
			unsigned BUFS : 1;
			unsigned CHPS : 2;
			unsigned CSCNA : 1;
			unsigned : 2;
			unsigned VCFG : 3;
		};
		struct {
			unsigned : 2;
			unsigned SMPI0 : 1;
			unsigned SMPI1 : 1;
			unsigned SMPI2 : 1;
			unsigned SMPI3 : 1;
			unsigned : 2;
			unsigned CHPS0 : 1;
			unsigned CHPS1 : 1;
			unsigned : 3;
			unsigned VCFG0 : 1;
			unsigned VCFG1 : 1;
			unsigned VCFG2 : 1;
		};
	};
} AD1CON2BITS;
 volatile AD1CON2BITS AD1CON2bits ;

 volatile unsigned int  AD1CON3 ;
 typedef struct tagAD1CON3BITS {
	union {
		struct {
			unsigned ADCS : 8;
			unsigned SAMC : 5;
			unsigned : 2;
			unsigned ADRC : 1;
		};
		struct {
			unsigned ADCS0 : 1;
			unsigned ADCS1 : 1;
			unsigned ADCS2 : 1;
			unsigned ADCS3 : 1;
			unsigned ADCS4 : 1;
			unsigned ADCS5 : 1;
			unsigned ADCS6 : 1;
			unsigned ADCS7 : 1;
			unsigned SAMC0 : 1;
			unsigned SAMC1 : 1;
			unsigned SAMC2 : 1;
			unsigned SAMC3 : 1;
			unsigned SAMC4 : 1;
		};
	};
} AD1CON3BITS;
 volatile AD1CON3BITS AD1CON3bits ;

 volatile unsigned int  AD1CHS123 ;
 typedef struct tagAD1CHS123BITS {
	union {
		struct {
			unsigned CH123SA : 1;
			unsigned CH123NA : 2;
			unsigned : 5;
			unsigned CH123SB : 1;
			unsigned CH123NB : 2;
		};
		struct {
			unsigned : 1;
			unsigned CH123NA0 : 1;
			unsigned CH123NA1 : 1;
			unsigned : 6;
			unsigned CH123NB0 : 1;
			unsigned CH123NB1 : 1;
		};
	};
} AD1CHS123BITS;
 volatile AD1CHS123BITS AD1CHS123bits ;

 volatile unsigned int  AD1CHS0 ;
 typedef struct tagAD1CHS0BITS {
	union {
		struct {
			unsigned CH0SA : 5;
			unsigned : 2;
			unsigned CH0NA : 1;
			unsigned CH0SB : 5;
			unsigned : 2;
			unsigned CH0NB : 1;
		};
		struct {
			unsigned CH0SA0 : 1;
			unsigned CH0SA1 : 1;
			unsigned CH0SA2 : 1;
			unsigned CH0SA3 : 1;
			unsigned CH0SA4 : 1;
			unsigned : 3;
			unsigned CH0SB0 : 1;
			unsigned CH0SB1 : 1;
			unsigned CH0SB2 : 1;
			unsigned CH0SB3 : 1;
			unsigned CH0SB4 : 1;
		};
	};
} AD1CHS0BITS;
 volatile AD1CHS0BITS AD1CHS0bits ;

 volatile unsigned int  AD1PCFGL ;
typedef struct tagAD1PCFGLBITS {
	unsigned PCFG0 : 1;
	unsigned PCFG1 : 1;
	unsigned PCFG2 : 1;
	unsigned PCFG3 : 1;
	unsigned PCFG4 : 1;
	unsigned PCFG5 : 1;
	unsigned PCFG6 : 1;
	unsigned PCFG7 : 1;
	unsigned PCFG8 : 1;
} AD1PCFGLBITS;
 volatile AD1PCFGLBITS AD1PCFGLbits ;

 volatile unsigned int  ADPCFG ;
typedef struct tagADPCFGBITS {
	unsigned PCFG0 : 1;
	unsigned PCFG1 : 1;
	unsigned PCFG2 : 1;
	unsigned PCFG3 : 1;
	unsigned PCFG4 : 1;
	unsigned PCFG5 : 1;
	unsigned PCFG6 : 1;
	unsigned PCFG7 : 1;
	unsigned PCFG8 : 1;
} ADPCFGBITS;
 volatile ADPCFGBITS ADPCFGbits ;

 volatile unsigned int  AD1CSSL ;
typedef struct tagAD1CSSLBITS {
	unsigned CSS0 : 1;
	unsigned CSS1 : 1;
	unsigned CSS2 : 1;
	unsigned CSS3 : 1;
	unsigned CSS4 : 1;
	unsigned CSS5 : 1;
	unsigned CSS6 : 1;
	unsigned CSS7 : 1;
	unsigned CSS8 : 1;
} AD1CSSLBITS;
 volatile AD1CSSLBITS AD1CSSLbits ;

 volatile unsigned int  AD1CON4 ;
 typedef struct tagAD1CON4BITS {
	union {
		struct {
			unsigned DMABL : 3;
		};
		struct {
			unsigned DMABL0 : 1;
			unsigned DMABL1 : 1;
			unsigned DMABL2 : 1;
		};
	};
} AD1CON4BITS;
 volatile AD1CON4BITS AD1CON4bits ;

 volatile unsigned int  DMA0CON ;
 typedef struct tagDMA0CONBITS {
	union {
		struct {
			unsigned MODE : 2;
			unsigned : 2;
			unsigned AMODE : 2;
			unsigned : 5;
			unsigned NULLW : 1;
			unsigned HALF : 1;
			unsigned DIR : 1;
			unsigned SIZE : 1;
			unsigned CHEN : 1;
		};
		struct {
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 2;
			unsigned AMODE0 : 1;
			unsigned AMODE1 : 1;
		};
	};
} DMA0CONBITS;
 volatile DMA0CONBITS DMA0CONbits ;

 volatile unsigned int  DMA0REQ ;
 typedef struct tagDMA0REQBITS {
	union {
		struct {
			unsigned IRQSEL : 7;
			unsigned : 8;
			unsigned FORCE : 1;
		};
		struct {
			unsigned IRQSEL0 : 1;
			unsigned IRQSEL1 : 1;
			unsigned IRQSEL2 : 1;
			unsigned IRQSEL3 : 1;
			unsigned IRQSEL4 : 1;
			unsigned IRQSEL5 : 1;
			unsigned IRQSEL6 : 1;
		};
	};
} DMA0REQBITS;
 volatile DMA0REQBITS DMA0REQbits ;

 volatile unsigned int  DMA0STA ;
 volatile unsigned int  DMA0STB ;
 volatile unsigned int  DMA0PAD ;
 volatile unsigned int  DMA0CNT ;
 volatile unsigned int  DMA1CON ;
 typedef struct tagDMA1CONBITS {
	union {
		struct {
			unsigned MODE : 2;
			unsigned : 2;
			unsigned AMODE : 2;
			unsigned : 5;
			unsigned NULLW : 1;
			unsigned HALF : 1;
			unsigned DIR : 1;
			unsigned SIZE : 1;
			unsigned CHEN : 1;
		};
		struct {
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 2;
			unsigned AMODE0 : 1;
			unsigned AMODE1 : 1;
		};
	};
} DMA1CONBITS;
 volatile DMA1CONBITS DMA1CONbits ;

 volatile unsigned int  DMA1REQ ;
 typedef struct tagDMA1REQBITS {
	union {
		struct {
			unsigned IRQSEL : 7;
			unsigned : 8;
			unsigned FORCE : 1;
		};
		struct {
			unsigned IRQSEL0 : 1;
			unsigned IRQSEL1 : 1;
			unsigned IRQSEL2 : 1;
			unsigned IRQSEL3 : 1;
			unsigned IRQSEL4 : 1;
			unsigned IRQSEL5 : 1;
			unsigned IRQSEL6 : 1;
		};
	};
} DMA1REQBITS;
 volatile DMA1REQBITS DMA1REQbits ;

 volatile unsigned int  DMA1STA ;
 volatile unsigned int  DMA1STB ;
 volatile unsigned int  DMA1PAD ;
 volatile unsigned int  DMA1CNT ;
 volatile unsigned int  DMA2CON ;
 typedef struct tagDMA2CONBITS {
	union {
		struct {
			unsigned MODE : 2;
			unsigned : 2;
			unsigned AMODE : 2;
			unsigned : 5;
			unsigned NULLW : 1;
			unsigned HALF : 1;
			unsigned DIR : 1;
			unsigned SIZE : 1;
			unsigned CHEN : 1;
		};
		struct {
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 2;
			unsigned AMODE0 : 1;
			unsigned AMODE1 : 1;
		};
	};
} DMA2CONBITS;
 volatile DMA2CONBITS DMA2CONbits ;

 volatile unsigned int  DMA2REQ ;
 typedef struct tagDMA2REQBITS {
	union {
		struct {
			unsigned IRQSEL : 7;
			unsigned : 8;
			unsigned FORCE : 1;
		};
		struct {
			unsigned IRQSEL0 : 1;
			unsigned IRQSEL1 : 1;
			unsigned IRQSEL2 : 1;
			unsigned IRQSEL3 : 1;
			unsigned IRQSEL4 : 1;
			unsigned IRQSEL5 : 1;
			unsigned IRQSEL6 : 1;
		};
	};
} DMA2REQBITS;
 volatile DMA2REQBITS DMA2REQbits ;

 volatile unsigned int  DMA2STA ;
 volatile unsigned int  DMA2STB ;
 volatile unsigned int  DMA2PAD ;
 volatile unsigned int  DMA2CNT ;
 volatile unsigned int  DMA3CON ;
 typedef struct tagDMA3CONBITS {
	union {
		struct {
			unsigned MODE : 2;
			unsigned : 2;
			unsigned AMODE : 2;
			unsigned : 5;
			unsigned NULLW : 1;
			unsigned HALF : 1;
			unsigned DIR : 1;
			unsigned SIZE : 1;
			unsigned CHEN : 1;
		};
		struct {
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 2;
			unsigned AMODE0 : 1;
			unsigned AMODE1 : 1;
		};
	};
} DMA3CONBITS;
 volatile DMA3CONBITS DMA3CONbits ;

 volatile unsigned int  DMA3REQ ;
 typedef struct tagDMA3REQBITS {
	union {
		struct {
			unsigned IRQSEL : 7;
			unsigned : 8;
			unsigned FORCE : 1;
		};
		struct {
			unsigned IRQSEL0 : 1;
			unsigned IRQSEL1 : 1;
			unsigned IRQSEL2 : 1;
			unsigned IRQSEL3 : 1;
			unsigned IRQSEL4 : 1;
			unsigned IRQSEL5 : 1;
			unsigned IRQSEL6 : 1;
		};
	};
} DMA3REQBITS;
 volatile DMA3REQBITS DMA3REQbits ;

 volatile unsigned int  DMA3STA ;
 volatile unsigned int  DMA3STB ;
 volatile unsigned int  DMA3PAD ;
 volatile unsigned int  DMA3CNT ;
 volatile unsigned int  DMA4CON ;
 typedef struct tagDMA4CONBITS {
	union {
		struct {
			unsigned MODE : 2;
			unsigned : 2;
			unsigned AMODE : 2;
			unsigned : 5;
			unsigned NULLW : 1;
			unsigned HALF : 1;
			unsigned DIR : 1;
			unsigned SIZE : 1;
			unsigned CHEN : 1;
		};
		struct {
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 2;
			unsigned AMODE0 : 1;
			unsigned AMODE1 : 1;
		};
	};
} DMA4CONBITS;
 volatile DMA4CONBITS DMA4CONbits ;

 volatile unsigned int  DMA4REQ ;
 typedef struct tagDMA4REQBITS {
	union {
		struct {
			unsigned IRQSEL : 7;
			unsigned : 8;
			unsigned FORCE : 1;
		};
		struct {
			unsigned IRQSEL0 : 1;
			unsigned IRQSEL1 : 1;
			unsigned IRQSEL2 : 1;
			unsigned IRQSEL3 : 1;
			unsigned IRQSEL4 : 1;
			unsigned IRQSEL5 : 1;
			unsigned IRQSEL6 : 1;
		};
	};
} DMA4REQBITS;
 volatile DMA4REQBITS DMA4REQbits ;

 volatile unsigned int  DMA4STA ;
 volatile unsigned int  DMA4STB ;
 volatile unsigned int  DMA4PAD ;
 volatile unsigned int  DMA4CNT ;
 volatile unsigned int  DMA5CON ;
 typedef struct tagDMA5CONBITS {
	union {
		struct {
			unsigned MODE : 2;
			unsigned : 2;
			unsigned AMODE : 2;
			unsigned : 5;
			unsigned NULLW : 1;
			unsigned HALF : 1;
			unsigned DIR : 1;
			unsigned SIZE : 1;
			unsigned CHEN : 1;
		};
		struct {
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 2;
			unsigned AMODE0 : 1;
			unsigned AMODE1 : 1;
		};
	};
} DMA5CONBITS;
 volatile DMA5CONBITS DMA5CONbits ;

 volatile unsigned int  DMA5REQ ;
 typedef struct tagDMA5REQBITS {
	union {
		struct {
			unsigned IRQSEL : 7;
			unsigned : 8;
			unsigned FORCE : 1;
		};
		struct {
			unsigned IRQSEL0 : 1;
			unsigned IRQSEL1 : 1;
			unsigned IRQSEL2 : 1;
			unsigned IRQSEL3 : 1;
			unsigned IRQSEL4 : 1;
			unsigned IRQSEL5 : 1;
			unsigned IRQSEL6 : 1;
		};
	};
} DMA5REQBITS;
 volatile DMA5REQBITS DMA5REQbits ;

 volatile unsigned int  DMA5STA ;
 volatile unsigned int  DMA5STB ;
 volatile unsigned int  DMA5PAD ;
 volatile unsigned int  DMA5CNT ;
 volatile unsigned int  DMA6CON ;
 typedef struct tagDMA6CONBITS {
	union {
		struct {
			unsigned MODE : 2;
			unsigned : 2;
			unsigned AMODE : 2;
			unsigned : 5;
			unsigned NULLW : 1;
			unsigned HALF : 1;
			unsigned DIR : 1;
			unsigned SIZE : 1;
			unsigned CHEN : 1;
		};
		struct {
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 2;
			unsigned AMODE0 : 1;
			unsigned AMODE1 : 1;
		};
	};
} DMA6CONBITS;
 volatile DMA6CONBITS DMA6CONbits ;

 volatile unsigned int  DMA6REQ ;
 typedef struct tagDMA6REQBITS {
	union {
		struct {
			unsigned IRQSEL : 7;
			unsigned : 8;
			unsigned FORCE : 1;
		};
		struct {
			unsigned IRQSEL0 : 1;
			unsigned IRQSEL1 : 1;
			unsigned IRQSEL2 : 1;
			unsigned IRQSEL3 : 1;
			unsigned IRQSEL4 : 1;
			unsigned IRQSEL5 : 1;
			unsigned IRQSEL6 : 1;
		};
	};
} DMA6REQBITS;
 volatile DMA6REQBITS DMA6REQbits ;

 volatile unsigned int  DMA6STA ;
 volatile unsigned int  DMA6STB ;
 volatile unsigned int  DMA6PAD ;
 volatile unsigned int  DMA6CNT ;
 volatile unsigned int  DMA7CON ;
 typedef struct tagDMA7CONBITS {
	union {
		struct {
			unsigned MODE : 2;
			unsigned : 2;
			unsigned AMODE : 2;
			unsigned : 5;
			unsigned NULLW : 1;
			unsigned HALF : 1;
			unsigned DIR : 1;
			unsigned SIZE : 1;
			unsigned CHEN : 1;
		};
		struct {
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 2;
			unsigned AMODE0 : 1;
			unsigned AMODE1 : 1;
		};
	};
} DMA7CONBITS;
 volatile DMA7CONBITS DMA7CONbits ;

 volatile unsigned int  DMA7REQ ;
 typedef struct tagDMA7REQBITS {
	union {
		struct {
			unsigned IRQSEL : 7;
			unsigned : 8;
			unsigned FORCE : 1;
		};
		struct {
			unsigned IRQSEL0 : 1;
			unsigned IRQSEL1 : 1;
			unsigned IRQSEL2 : 1;
			unsigned IRQSEL3 : 1;
			unsigned IRQSEL4 : 1;
			unsigned IRQSEL5 : 1;
			unsigned IRQSEL6 : 1;
		};
	};
} DMA7REQBITS;
 volatile DMA7REQBITS DMA7REQbits ;

 volatile unsigned int  DMA7STA ;
 volatile unsigned int  DMA7STB ;
 volatile unsigned int  DMA7PAD ;
 volatile unsigned int  DMA7CNT ;
 volatile unsigned int  DMACS0 ;
 typedef struct tagDMACS0BITS {
	union {
		struct {
			unsigned XWCOL : 8;
			unsigned PWCOL : 8;
		};
		struct {
			unsigned XWCOL0 : 1;
			unsigned XWCOL1 : 1;
			unsigned XWCOL2 : 1;
			unsigned XWCOL3 : 1;
			unsigned XWCOL4 : 1;
			unsigned XWCOL5 : 1;
			unsigned XWCOL6 : 1;
			unsigned XWCOL7 : 1;
			unsigned PWCOL0 : 1;
			unsigned PWCOL1 : 1;
			unsigned PWCOL2 : 1;
			unsigned PWCOL3 : 1;
			unsigned PWCOL4 : 1;
			unsigned PWCOL5 : 1;
			unsigned PWCOL6 : 1;
			unsigned PWCOL7 : 1;
		};
	};
} DMACS0BITS;
 volatile DMACS0BITS DMACS0bits ;

 volatile unsigned int  DMACS1 ;
 typedef struct tagDMACS1BITS {
	union {
		struct {
			unsigned PPST0 : 1;
			unsigned PPST1 : 1;
			unsigned PPST2 : 1;
			unsigned PPST3 : 1;
			unsigned PPST4 : 1;
			unsigned PPST5 : 1;
			unsigned PPST6 : 1;
			unsigned PPST7 : 1;
			unsigned LSTCH : 4;
		};
		struct {
			unsigned PPST : 8;
			unsigned LSTCH0 : 1;
			unsigned LSTCH1 : 1;
			unsigned LSTCH2 : 1;
			unsigned LSTCH3 : 1;
		};
	};
} DMACS1BITS;
 volatile DMACS1BITS DMACS1bits ;

 volatile unsigned int  DSADR ;
 volatile unsigned int  DAC1CON ;
 typedef struct tagDAC1CONBITS {
	union {
		struct {
			unsigned DACFDIV : 7;
			unsigned : 1;
			unsigned FORM : 1;
			unsigned : 3;
			unsigned AMPON : 1;
			unsigned DACSIDL : 1;
			unsigned : 1;
			unsigned DACEN : 1;
		};
		struct {
			unsigned DACFDIV0 : 1;
			unsigned DACFDIV1 : 1;
			unsigned DACFDIV2 : 1;
			unsigned DACFDIV3 : 1;
			unsigned DACFDIV4 : 1;
			unsigned DACFDIV5 : 1;
			unsigned DACFDIV6 : 1;
		};
	};
} DAC1CONBITS;
 volatile DAC1CONBITS DAC1CONbits ;

 volatile unsigned int  DAC1STAT ;
typedef struct tagDAC1STATBITS {
	unsigned REMPTY : 1;
	unsigned RFULL : 1;
	unsigned RITYPE : 1;
	unsigned : 2;
	unsigned RMVOEN : 1;
	unsigned : 1;
	unsigned ROEN : 1;
	unsigned LEMPTY : 1;
	unsigned LFULL : 1;
	unsigned LITYPE : 1;
	unsigned : 2;
	unsigned LMVOEN : 1;
	unsigned : 1;
	unsigned LOEN : 1;
} DAC1STATBITS;
 volatile DAC1STATBITS DAC1STATbits ;

 volatile unsigned int  DAC1DFLT ;
 volatile unsigned int  DAC1RDAT ;
 volatile unsigned int  DAC1LDAT ;
 volatile unsigned int  C1CTRL1 ;
 typedef struct tagC1CTRL1BITS {
	union {
		struct {
			unsigned WIN : 1;
			unsigned : 2;
			unsigned CANCAP : 1;
			unsigned : 1;
			unsigned OPMODE : 3;
			unsigned REQOP : 3;
			unsigned CANCKS : 1;
			unsigned ABAT : 1;
			unsigned CSIDL : 1;
		};
		struct {
			unsigned : 5;
			unsigned OPMODE0 : 1;
			unsigned OPMODE1 : 1;
			unsigned OPMODE2 : 1;
			unsigned REQOP0 : 1;
			unsigned REQOP1 : 1;
			unsigned REQOP2 : 1;
		};
	};
} C1CTRL1BITS;
 volatile C1CTRL1BITS C1CTRL1bits ;

 volatile unsigned int  C1CTRL2 ;
 typedef struct tagC1CTRL2BITS {
	union {
		struct {
			unsigned DNCNT : 5;
		};
		struct {
			unsigned DNCNT0 : 1;
			unsigned DNCNT1 : 1;
			unsigned DNCNT2 : 1;
			unsigned DNCNT3 : 1;
			unsigned DNCNT4 : 1;
		};
	};
} C1CTRL2BITS;
 volatile C1CTRL2BITS C1CTRL2bits ;

 volatile unsigned int  C1VEC ;
 typedef struct tagC1VECBITS {
	union {
		struct {
			unsigned ICODE : 7;
			unsigned : 1;
			unsigned FILHIT : 5;
		};
		struct {
			unsigned ICODE0 : 1;
			unsigned ICODE1 : 1;
			unsigned ICODE2 : 1;
			unsigned ICODE3 : 1;
			unsigned ICODE4 : 1;
			unsigned ICODE5 : 1;
			unsigned ICODE6 : 1;
			unsigned : 1;
			unsigned FILHIT0 : 1;
			unsigned FILHIT1 : 1;
			unsigned FILHIT2 : 1;
			unsigned FILHIT3 : 1;
			unsigned FILHIT4 : 1;
		};
	};
} C1VECBITS;
 volatile C1VECBITS C1VECbits ;

 volatile unsigned int  C1FCTRL ;
 typedef struct tagC1FCTRLBITS {
	union {
		struct {
			unsigned FSA : 5;
			unsigned : 8;
			unsigned DMABS : 3;
		};
		struct {
			unsigned FSA0 : 1;
			unsigned FSA1 : 1;
			unsigned FSA2 : 1;
			unsigned FSA3 : 1;
			unsigned FSA4 : 1;
			unsigned : 8;
			unsigned DMABS0 : 1;
			unsigned DMABS1 : 1;
			unsigned DMABS2 : 1;
		};
	};
} C1FCTRLBITS;
 volatile C1FCTRLBITS C1FCTRLbits ;

 volatile unsigned int  C1FIFO ;
 typedef struct tagC1FIFOBITS {
	union {
		struct {
			unsigned FNRB : 6;
			unsigned : 2;
			unsigned FBP : 6;
		};
		struct {
			unsigned FNRB0 : 1;
			unsigned FNRB1 : 1;
			unsigned FNRB2 : 1;
			unsigned FNRB3 : 1;
			unsigned FNRB4 : 1;
			unsigned FNRB5 : 1;
			unsigned : 2;
			unsigned FBP0 : 1;
			unsigned FBP1 : 1;
			unsigned FBP2 : 1;
			unsigned FBP3 : 1;
			unsigned FBP4 : 1;
			unsigned FBP5 : 1;
		};
	};
} C1FIFOBITS;
 volatile C1FIFOBITS C1FIFObits ;

 volatile unsigned int  C1INTF ;
typedef struct tagC1INTFBITS {
	unsigned TBIF : 1;
	unsigned RBIF : 1;
	unsigned RBOVIF : 1;
	unsigned FIFOIF : 1;
	unsigned : 1;
	unsigned ERRIF : 1;
	unsigned WAKIF : 1;
	unsigned IVRIF : 1;
	unsigned EWARN : 1;
	unsigned RXWAR : 1;
	unsigned TXWAR : 1;
	unsigned RXBP : 1;
	unsigned TXBP : 1;
	unsigned TXBO : 1;
} C1INTFBITS;
 volatile C1INTFBITS C1INTFbits ;

 volatile unsigned int  C1INTE ;
typedef struct tagC1INTEBITS {
	unsigned TBIE : 1;
	unsigned RBIE : 1;
	unsigned RBOVIE : 1;
	unsigned FIFOIE : 1;
	unsigned : 1;
	unsigned ERRIE : 1;
	unsigned WAKIE : 1;
	unsigned IVRIE : 1;
} C1INTEBITS;
 volatile C1INTEBITS C1INTEbits ;

 volatile unsigned int  C1EC ;
 typedef struct tagC1ECBITS {
	union {
		struct {
			unsigned RERRCNT : 8;
			unsigned TERRCNT : 8;
		};
		struct {
			unsigned RERRCNT0 : 1;
			unsigned RERRCNT1 : 1;
			unsigned RERRCNT2 : 1;
			unsigned RERRCNT3 : 1;
			unsigned RERRCNT4 : 1;
			unsigned RERRCNT5 : 1;
			unsigned RERRCNT6 : 1;
			unsigned RERRCNT7 : 1;
			unsigned TERRCNT0 : 1;
			unsigned TERRCNT1 : 1;
			unsigned TERRCNT2 : 1;
			unsigned TERRCNT3 : 1;
			unsigned TERRCNT4 : 1;
			unsigned TERRCNT5 : 1;
			unsigned TERRCNT6 : 1;
			unsigned TERRCNT7 : 1;
		};
	};
} C1ECBITS;
 volatile C1ECBITS C1ECbits ;

 volatile unsigned char C1RERRCNT ;
 volatile unsigned char C1TERRCNT ;
 volatile unsigned int  C1CFG1 ;
 typedef struct tagC1CFG1BITS {
	union {
		struct {
			unsigned BRP : 6;
			unsigned SJW : 2;
		};
		struct {
			unsigned BRP0 : 1;
			unsigned BRP1 : 1;
			unsigned BRP2 : 1;
			unsigned BRP3 : 1;
			unsigned BRP4 : 1;
			unsigned BRP5 : 1;
			unsigned SJW0 : 1;
			unsigned SJW1 : 1;
		};
	};
} C1CFG1BITS;
 volatile C1CFG1BITS C1CFG1bits ;

 volatile unsigned int  C1CFG2 ;
 typedef struct tagC1CFG2BITS {
	union {
		struct {
			unsigned PRSEG : 3;
			unsigned SEG1PH : 3;
			unsigned SAM : 1;
			unsigned SEG2PHTS : 1;
			unsigned SEG2PH : 3;
			unsigned : 3;
			unsigned WAKFIL : 1;
		};
		struct {
			unsigned PRSEG0 : 1;
			unsigned PRSEG1 : 1;
			unsigned PRSEG2 : 1;
			unsigned SEG1PH0 : 1;
			unsigned SEG1PH1 : 1;
			unsigned SEG1PH2 : 1;
			unsigned : 2;
			unsigned SEG2PH0 : 1;
			unsigned SEG2PH1 : 1;
			unsigned SEG2PH2 : 1;
		};
	};
} C1CFG2BITS;
 volatile C1CFG2BITS C1CFG2bits ;

 volatile unsigned int  C1FEN1 ;
 typedef struct tagC1FEN1BITS {
	union {
		struct {
			unsigned FLTEN : 16;
		};
		struct {
			unsigned FLTEN0 : 1;
			unsigned FLTEN1 : 1;
			unsigned FLTEN2 : 1;
			unsigned FLTEN3 : 1;
			unsigned FLTEN4 : 1;
			unsigned FLTEN5 : 1;
			unsigned FLTEN6 : 1;
			unsigned FLTEN7 : 1;
			unsigned FLTEN8 : 1;
			unsigned FLTEN9 : 1;
			unsigned FLTEN10 : 1;
			unsigned FLTEN11 : 1;
			unsigned FLTEN12 : 1;
			unsigned FLTEN13 : 1;
			unsigned FLTEN14 : 1;
			unsigned FLTEN15 : 1;
		};
	};
} C1FEN1BITS;
 volatile C1FEN1BITS C1FEN1bits ;

 volatile unsigned int  C1FMSKSEL1 ;
 typedef struct tagC1FMSKSEL1BITS {
	union {
		struct {
			unsigned F0MSK : 2;
			unsigned F1MSK : 2;
			unsigned F2MSK : 2;
			unsigned F3MSK : 2;
			unsigned F4MSK : 2;
			unsigned F5MSK : 2;
			unsigned F6MSK : 2;
			unsigned F7MSK : 2;
		};
		struct {
			unsigned F0MSK0 : 1;
			unsigned F0MSK1 : 1;
			unsigned F1MSK0 : 1;
			unsigned F1MSK1 : 1;
			unsigned F2MSK0 : 1;
			unsigned F2MSK1 : 1;
			unsigned F3MSK0 : 1;
			unsigned F3MSK1 : 1;
			unsigned F4MSK0 : 1;
			unsigned F4MSK1 : 1;
			unsigned F5MSK0 : 1;
			unsigned F5MSK1 : 1;
			unsigned F6MSK0 : 1;
			unsigned F6MSK1 : 1;
			unsigned F7MSK0 : 1;
			unsigned F7MSK1 : 1;
		};
	};
} C1FMSKSEL1BITS;
 volatile C1FMSKSEL1BITS C1FMSKSEL1bits ;

 volatile unsigned int  C1FMSKSEL2 ;
 typedef struct tagC1FMSKSEL2BITS {
	union {
		struct {
			unsigned F8MSK : 2;
			unsigned F9MSK : 2;
			unsigned F10MSK : 2;
			unsigned F11MSK : 2;
			unsigned F12MSK : 2;
			unsigned F13MSK : 2;
			unsigned F14MSK : 2;
			unsigned F15MSK : 2;
		};
		struct {
			unsigned F8MSK0 : 1;
			unsigned F8MSK1 : 1;
			unsigned F9MSK0 : 1;
			unsigned F9MSK1 : 1;
			unsigned F10MSK0 : 1;
			unsigned F10MSK1 : 1;
			unsigned F11MSK0 : 1;
			unsigned F11MSK1 : 1;
			unsigned F12MSK0 : 1;
			unsigned F12MSK1 : 1;
			unsigned F13MSK0 : 1;
			unsigned F13MSK1 : 1;
			unsigned F14MSK0 : 1;
			unsigned F14MSK1 : 1;
			unsigned F15MSK0 : 1;
			unsigned F15MSK1 : 1;
		};
	};
} C1FMSKSEL2BITS;
 volatile C1FMSKSEL2BITS C1FMSKSEL2bits ;

 volatile unsigned int  C1BUFPNT1 ;
 typedef struct tagC1BUFPNT1BITS {
	union {
		struct {
			unsigned F0BP : 4;
			unsigned F1BP : 4;
			unsigned F2BP : 4;
			unsigned F3BP : 4;
		};
		struct {
			unsigned F0BP0 : 1;
			unsigned F0BP1 : 1;
			unsigned F0BP2 : 1;
			unsigned F0BP3 : 1;
			unsigned F1BP0 : 1;
			unsigned F1BP1 : 1;
			unsigned F1BP2 : 1;
			unsigned F1BP3 : 1;
			unsigned F2BP0 : 1;
			unsigned F2BP1 : 1;
			unsigned F2BP2 : 1;
			unsigned F2BP3 : 1;
			unsigned F3BP0 : 1;
			unsigned F3BP1 : 1;
			unsigned F3BP2 : 1;
			unsigned F3BP3 : 1;
		};
	};
} C1BUFPNT1BITS;
 volatile C1BUFPNT1BITS C1BUFPNT1bits ;

 volatile unsigned int  C1RXFUL1 ;
typedef struct tagC1RXFUL1BITS {
	unsigned RXFUL0 : 1;
	unsigned RXFUL1 : 1;
	unsigned RXFUL2 : 1;
	unsigned RXFUL3 : 1;
	unsigned RXFUL4 : 1;
	unsigned RXFUL5 : 1;
	unsigned RXFUL6 : 1;
	unsigned RXFUL7 : 1;
	unsigned RXFUL8 : 1;
	unsigned RXFUL9 : 1;
	unsigned RXFUL10 : 1;
	unsigned RXFUL11 : 1;
	unsigned RXFUL12 : 1;
	unsigned RXFUL13 : 1;
	unsigned RXFUL14 : 1;
	unsigned RXFUL15 : 1;
} C1RXFUL1BITS;
 volatile C1RXFUL1BITS C1RXFUL1bits ;

 volatile unsigned int  C1BUFPNT2 ;
 typedef struct tagC1BUFPNT2BITS {
	union {
		struct {
			unsigned F4BP : 4;
			unsigned F5BP : 4;
			unsigned F6BP : 4;
			unsigned F7BP : 4;
		};
		struct {
			unsigned F4BP0 : 1;
			unsigned F4BP1 : 1;
			unsigned F4BP2 : 1;
			unsigned F4BP3 : 1;
			unsigned F5BP0 : 1;
			unsigned F5BP1 : 1;
			unsigned F5BP2 : 1;
			unsigned F5BP3 : 1;
			unsigned F6BP0 : 1;
			unsigned F6BP1 : 1;
			unsigned F6BP2 : 1;
			unsigned F6BP3 : 1;
			unsigned F7BP0 : 1;
			unsigned F7BP1 : 1;
			unsigned F7BP2 : 1;
			unsigned F7BP3 : 1;
		};
	};
} C1BUFPNT2BITS;
 volatile C1BUFPNT2BITS C1BUFPNT2bits ;

 volatile unsigned int  C1RXFUL2 ;
typedef struct tagC1RXFUL2BITS {
	unsigned RXFUL16 : 1;
	unsigned RXFUL17 : 1;
	unsigned RXFUL18 : 1;
	unsigned RXFUL19 : 1;
	unsigned RXFUL20 : 1;
	unsigned RXFUL21 : 1;
	unsigned RXFUL22 : 1;
	unsigned RXFUL23 : 1;
	unsigned RXFUL24 : 1;
	unsigned RXFUL25 : 1;
	unsigned RXFUL26 : 1;
	unsigned RXFUL27 : 1;
	unsigned RXFUL28 : 1;
	unsigned RXFUL29 : 1;
	unsigned RXFUL30 : 1;
	unsigned RXFUL31 : 1;
} C1RXFUL2BITS;
 volatile C1RXFUL2BITS C1RXFUL2bits ;

 volatile unsigned int  C1BUFPNT3 ;
 typedef struct tagC1BUFPNT3BITS {
	union {
		struct {
			unsigned F8BP : 4;
			unsigned F9BP : 4;
			unsigned F10BP : 4;
			unsigned F11BP : 4;
		};
		struct {
			unsigned F8BP0 : 1;
			unsigned F8BP1 : 1;
			unsigned F8BP2 : 1;
			unsigned F8BP3 : 1;
			unsigned F9BP0 : 1;
			unsigned F9BP1 : 1;
			unsigned F9BP2 : 1;
			unsigned F9BP3 : 1;
			unsigned F10BP0 : 1;
			unsigned F10BP1 : 1;
			unsigned F10BP2 : 1;
			unsigned F10BP3 : 1;
			unsigned F11BP0 : 1;
			unsigned F11BP1 : 1;
			unsigned F11BP2 : 1;
			unsigned F11BP3 : 1;
		};
	};
} C1BUFPNT3BITS;
 volatile C1BUFPNT3BITS C1BUFPNT3bits ;

 volatile unsigned int  C1BUFPNT4 ;
 typedef struct tagC1BUFPNT4BITS {
	union {
		struct {
			unsigned F12BP : 4;
			unsigned F13BP : 4;
			unsigned F14BP : 4;
			unsigned F15BP : 4;
		};
		struct {
			unsigned F12BP0 : 1;
			unsigned F12BP1 : 1;
			unsigned F12BP2 : 1;
			unsigned F12BP3 : 1;
			unsigned F13BP0 : 1;
			unsigned F13BP1 : 1;
			unsigned F13BP2 : 1;
			unsigned F13BP3 : 1;
			unsigned F14BP0 : 1;
			unsigned F14BP1 : 1;
			unsigned F14BP2 : 1;
			unsigned F14BP3 : 1;
			unsigned F15BP0 : 1;
			unsigned F15BP1 : 1;
			unsigned F15BP2 : 1;
			unsigned F15BP3 : 1;
		};
	};
} C1BUFPNT4BITS;
 volatile C1BUFPNT4BITS C1BUFPNT4bits ;

 volatile unsigned int  C1RXOVF1 ;
typedef struct tagC1RXOVF1BITS {
	unsigned RXOVF0 : 1;
	unsigned RXOVF1 : 1;
	unsigned RXOVF2 : 1;
	unsigned RXOVF3 : 1;
	unsigned RXOVF4 : 1;
	unsigned RXOVF5 : 1;
	unsigned RXOVF6 : 1;
	unsigned RXOVF7 : 1;
	unsigned RXOVF8 : 1;
	unsigned RXOVF9 : 1;
	unsigned RXOVF10 : 1;
	unsigned RXOVF11 : 1;
	unsigned RXOVF12 : 1;
	unsigned RXOVF13 : 1;
	unsigned RXOVF14 : 1;
	unsigned RXOVF15 : 1;
} C1RXOVF1BITS;
 volatile C1RXOVF1BITS C1RXOVF1bits ;

 volatile unsigned int  C1RXOVF2 ;
typedef struct tagC1RXOVF2BITS {
	unsigned RXOVF16 : 1;
	unsigned RXOVF17 : 1;
	unsigned RXOVF18 : 1;
	unsigned RXOVF19 : 1;
	unsigned RXOVF20 : 1;
	unsigned RXOVF21 : 1;
	unsigned RXOVF22 : 1;
	unsigned RXOVF23 : 1;
	unsigned RXOVF24 : 1;
	unsigned RXOVF25 : 1;
	unsigned RXOVF26 : 1;
	unsigned RXOVF27 : 1;
	unsigned RXOVF28 : 1;
	unsigned RXOVF29 : 1;
	unsigned RXOVF30 : 1;
	unsigned RXOVF31 : 1;
} C1RXOVF2BITS;
 volatile C1RXOVF2BITS C1RXOVF2bits ;

 volatile unsigned int  C1RXM0SID ;
 typedef struct tagC1RXM0SIDBITS {
	union {
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 1;
			unsigned MIDE : 1;
			unsigned : 1;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
		struct {
			unsigned EID : 2;
			unsigned : 3;
			unsigned SID : 11;
		};
	};
} C1RXM0SIDBITS;
 volatile C1RXM0SIDBITS C1RXM0SIDbits ;

 volatile unsigned int  C1TR01CON ;
 typedef struct tagC1TR01CONBITS {
	union {
		struct {
			unsigned TX0PRI : 2;
			unsigned RTREN0 : 1;
			unsigned TXREQ0 : 1;
			unsigned TXERR0 : 1;
			unsigned TXLARB0 : 1;
			unsigned TXABT0 : 1;
			unsigned TXEN0 : 1;
			unsigned TX1PRI : 2;
			unsigned RTREN1 : 1;
			unsigned TXREQ1 : 1;
			unsigned TXERR1 : 1;
			unsigned TXLARB1 : 1;
			unsigned TXABT1 : 1;
			unsigned TXEN1 : 1;
		};
		struct {
			unsigned TX0PRI0 : 1;
			unsigned TX0PRI1 : 1;
			unsigned : 6;
			unsigned TX1PRI0 : 1;
			unsigned TX1PRI1 : 1;
		};
	};
} C1TR01CONBITS;
 volatile C1TR01CONBITS C1TR01CONbits ;

 volatile unsigned int  C1RXM0EID ;
 typedef struct tagC1RXM0EIDBITS {
	union {
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
		struct {
			unsigned EID : 16;
		};
	};
} C1RXM0EIDBITS;
 volatile C1RXM0EIDBITS C1RXM0EIDbits ;

 volatile unsigned int  C1TR23CON ;
 typedef struct tagC1TR23CONBITS {
	union {
		struct {
			unsigned TX2PRI : 2;
			unsigned RTREN2 : 1;
			unsigned TXREQ2 : 1;
			unsigned TXERR2 : 1;
			unsigned TXLARB2 : 1;
			unsigned TXABT2 : 1;
			unsigned TXEN2 : 1;
			unsigned TX3PRI : 2;
			unsigned RTREN3 : 1;
			unsigned TXREQ3 : 1;
			unsigned TXERR3 : 1;
			unsigned TXLARB3 : 1;
			unsigned TXABT3 : 1;
			unsigned TXEN3 : 1;
		};
		struct {
			unsigned TX2PRI0 : 1;
			unsigned TX2PRI1 : 1;
			unsigned : 6;
			unsigned TX3PRI0 : 1;
			unsigned TX3PRI1 : 1;
		};
	};
} C1TR23CONBITS;
 volatile C1TR23CONBITS C1TR23CONbits ;

 volatile unsigned int  C1RXM1SID ;
 typedef struct tagC1RXM1SIDBITS {
	union {
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 1;
			unsigned MIDE : 1;
			unsigned : 1;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
		struct {
			unsigned EID : 2;
			unsigned : 3;
			unsigned SID : 11;
		};
	};
} C1RXM1SIDBITS;
 volatile C1RXM1SIDBITS C1RXM1SIDbits ;

 volatile unsigned int  C1TR45CON ;
 typedef struct tagC1TR45CONBITS {
	union {
		struct {
			unsigned TX4PRI : 2;
			unsigned RTREN4 : 1;
			unsigned TXREQ4 : 1;
			unsigned TXERR4 : 1;
			unsigned TXLARB4 : 1;
			unsigned TXABT4 : 1;
			unsigned TXEN4 : 1;
			unsigned TX5PRI : 2;
			unsigned RTREN5 : 1;
			unsigned TXREQ5 : 1;
			unsigned TXERR5 : 1;
			unsigned TXLARB5 : 1;
			unsigned TXABT5 : 1;
			unsigned TXEN5 : 1;
		};
		struct {
			unsigned TX4PRI0 : 1;
			unsigned TX4PRI1 : 1;
			unsigned : 6;
			unsigned TX5PRI0 : 1;
			unsigned TX5PRI1 : 1;
		};
	};
} C1TR45CONBITS;
 volatile C1TR45CONBITS C1TR45CONbits ;

 volatile unsigned int  C1RXM1EID ;
 typedef struct tagC1RXM1EIDBITS {
	union {
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
		struct {
			unsigned EID : 16;
		};
	};
} C1RXM1EIDBITS;
 volatile C1RXM1EIDBITS C1RXM1EIDbits ;

 volatile unsigned int  C1TR67CON ;
 typedef struct tagC1TR67CONBITS {
	union {
		struct {
			unsigned TX6PRI : 2;
			unsigned RTREN6 : 1;
			unsigned TXREQ6 : 1;
			unsigned TXERR6 : 1;
			unsigned TXLARB6 : 1;
			unsigned TXABT6 : 1;
			unsigned TXEN6 : 1;
			unsigned TX7PRI : 2;
			unsigned RTREN7 : 1;
			unsigned TXREQ7 : 1;
			unsigned TXERR7 : 1;
			unsigned TXLARB7 : 1;
			unsigned TXABT7 : 1;
			unsigned TXEN7 : 1;
		};
		struct {
			unsigned TX6PRI0 : 1;
			unsigned TX6PRI1 : 1;
			unsigned : 6;
			unsigned TX7PRI0 : 1;
			unsigned TX7PRI1 : 1;
		};
	};
} C1TR67CONBITS;
 volatile C1TR67CONBITS C1TR67CONbits ;

 volatile unsigned int  C1RXM2SID ;
 typedef struct tagC1RXM2SIDBITS {
	union {
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 1;
			unsigned MIDE : 1;
			unsigned : 1;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
		struct {
			unsigned EID : 2;
			unsigned : 3;
			unsigned SID : 11;
		};
	};
} C1RXM2SIDBITS;
 volatile C1RXM2SIDBITS C1RXM2SIDbits ;

 volatile unsigned int  C1RXM2EID ;
 typedef struct tagC1RXM2EIDBITS {
	union {
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
		struct {
			unsigned EID : 16;
		};
	};
} C1RXM2EIDBITS;
 volatile C1RXM2EIDBITS C1RXM2EIDbits ;

 volatile unsigned int  C1RXD ;
 volatile unsigned int  C1RXF0SID ;
 typedef struct tagC1RXF0SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF0SIDBITS;
 volatile C1RXF0SIDBITS C1RXF0SIDbits ;

 volatile unsigned int  C1RXF0EID ;
 typedef struct tagC1RXF0EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF0EIDBITS;
 volatile C1RXF0EIDBITS C1RXF0EIDbits ;

 volatile unsigned int  C1TXD ;
 volatile unsigned int  C1RXF1SID ;
 typedef struct tagC1RXF1SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF1SIDBITS;
 volatile C1RXF1SIDBITS C1RXF1SIDbits ;

 volatile unsigned int  C1RXF1EID ;
 typedef struct tagC1RXF1EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF1EIDBITS;
 volatile C1RXF1EIDBITS C1RXF1EIDbits ;

 volatile unsigned int  C1RXF2SID ;
 typedef struct tagC1RXF2SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF2SIDBITS;
 volatile C1RXF2SIDBITS C1RXF2SIDbits ;

 volatile unsigned int  C1RXF2EID ;
 typedef struct tagC1RXF2EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF2EIDBITS;
 volatile C1RXF2EIDBITS C1RXF2EIDbits ;

 volatile unsigned int  C1RXF3SID ;
 typedef struct tagC1RXF3SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF3SIDBITS;
 volatile C1RXF3SIDBITS C1RXF3SIDbits ;

 volatile unsigned int  C1RXF3EID ;
 typedef struct tagC1RXF3EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF3EIDBITS;
 volatile C1RXF3EIDBITS C1RXF3EIDbits ;

 volatile unsigned int  C1RXF4SID ;
 typedef struct tagC1RXF4SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF4SIDBITS;
 volatile C1RXF4SIDBITS C1RXF4SIDbits ;

 volatile unsigned int  C1RXF4EID ;
 typedef struct tagC1RXF4EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF4EIDBITS;
 volatile C1RXF4EIDBITS C1RXF4EIDbits ;

 volatile unsigned int  C1RXF5SID ;
 typedef struct tagC1RXF5SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF5SIDBITS;
 volatile C1RXF5SIDBITS C1RXF5SIDbits ;

 volatile unsigned int  C1RXF5EID ;
 typedef struct tagC1RXF5EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF5EIDBITS;
 volatile C1RXF5EIDBITS C1RXF5EIDbits ;

 volatile unsigned int  C1RXF6SID ;
 typedef struct tagC1RXF6SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF6SIDBITS;
 volatile C1RXF6SIDBITS C1RXF6SIDbits ;

 volatile unsigned int  C1RXF6EID ;
 typedef struct tagC1RXF6EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF6EIDBITS;
 volatile C1RXF6EIDBITS C1RXF6EIDbits ;

 volatile unsigned int  C1RXF7SID ;
 typedef struct tagC1RXF7SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF7SIDBITS;
 volatile C1RXF7SIDBITS C1RXF7SIDbits ;

 volatile unsigned int  C1RXF7EID ;
 typedef struct tagC1RXF7EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF7EIDBITS;
 volatile C1RXF7EIDBITS C1RXF7EIDbits ;

 volatile unsigned int  C1RXF8SID ;
 typedef struct tagC1RXF8SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF8SIDBITS;
 volatile C1RXF8SIDBITS C1RXF8SIDbits ;

 volatile unsigned int  C1RXF8EID ;
 typedef struct tagC1RXF8EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF8EIDBITS;
 volatile C1RXF8EIDBITS C1RXF8EIDbits ;

 volatile unsigned int  C1RXF9SID ;
 typedef struct tagC1RXF9SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF9SIDBITS;
 volatile C1RXF9SIDBITS C1RXF9SIDbits ;

 volatile unsigned int  C1RXF9EID ;
 typedef struct tagC1RXF9EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF9EIDBITS;
 volatile C1RXF9EIDBITS C1RXF9EIDbits ;

 volatile unsigned int  C1RXF10SID ;
 typedef struct tagC1RXF10SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF10SIDBITS;
 volatile C1RXF10SIDBITS C1RXF10SIDbits ;

 volatile unsigned int  C1RXF10EID ;
 typedef struct tagC1RXF10EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF10EIDBITS;
 volatile C1RXF10EIDBITS C1RXF10EIDbits ;

 volatile unsigned int  C1RXF11SID ;
 typedef struct tagC1RXF11SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF11SIDBITS;
 volatile C1RXF11SIDBITS C1RXF11SIDbits ;

 volatile unsigned int  C1RXF11EID ;
 typedef struct tagC1RXF11EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF11EIDBITS;
 volatile C1RXF11EIDBITS C1RXF11EIDbits ;

 volatile unsigned int  C1RXF12SID ;
 typedef struct tagC1RXF12SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF12SIDBITS;
 volatile C1RXF12SIDBITS C1RXF12SIDbits ;

 volatile unsigned int  C1RXF12EID ;
 typedef struct tagC1RXF12EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF12EIDBITS;
 volatile C1RXF12EIDBITS C1RXF12EIDbits ;

 volatile unsigned int  C1RXF13SID ;
 typedef struct tagC1RXF13SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF13SIDBITS;
 volatile C1RXF13SIDBITS C1RXF13SIDbits ;

 volatile unsigned int  C1RXF13EID ;
 typedef struct tagC1RXF13EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF13EIDBITS;
 volatile C1RXF13EIDBITS C1RXF13EIDbits ;

 volatile unsigned int  C1RXF14SID ;
 typedef struct tagC1RXF14SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF14SIDBITS;
 volatile C1RXF14SIDBITS C1RXF14SIDbits ;

 volatile unsigned int  C1RXF14EID ;
 typedef struct tagC1RXF14EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF14EIDBITS;
 volatile C1RXF14EIDBITS C1RXF14EIDbits ;

 volatile unsigned int  C1RXF15SID ;
 typedef struct tagC1RXF15SIDBITS {
	union {
		struct {
			unsigned EID : 2;
			unsigned : 1;
			unsigned EXIDE : 1;
			unsigned : 1;
			unsigned SID : 11;
		};
		struct {
			unsigned EID16 : 1;
			unsigned EID17 : 1;
			unsigned : 3;
			unsigned SID0 : 1;
			unsigned SID1 : 1;
			unsigned SID2 : 1;
			unsigned SID3 : 1;
			unsigned SID4 : 1;
			unsigned SID5 : 1;
			unsigned SID6 : 1;
			unsigned SID7 : 1;
			unsigned SID8 : 1;
			unsigned SID9 : 1;
			unsigned SID10 : 1;
		};
	};
} C1RXF15SIDBITS;
 volatile C1RXF15SIDBITS C1RXF15SIDbits ;

 volatile unsigned int  C1RXF15EID ;
 typedef struct tagC1RXF15EIDBITS {
	union {
		struct {
			unsigned EID : 16;
		};
		struct {
			unsigned EID0 : 1;
			unsigned EID1 : 1;
			unsigned EID2 : 1;
			unsigned EID3 : 1;
			unsigned EID4 : 1;
			unsigned EID5 : 1;
			unsigned EID6 : 1;
			unsigned EID7 : 1;
			unsigned EID8 : 1;
			unsigned EID9 : 1;
			unsigned EID10 : 1;
			unsigned EID11 : 1;
			unsigned EID12 : 1;
			unsigned EID13 : 1;
			unsigned EID14 : 1;
			unsigned EID15 : 1;
		};
	};
} C1RXF15EIDBITS;
 volatile C1RXF15EIDBITS C1RXF15EIDbits ;

 volatile unsigned int  P2TCON ;
 typedef struct tagP2TCONBITS {
	union {
		struct {
			unsigned PTMOD : 2;
			unsigned PTCKPS : 2;
			unsigned PTOPS : 4;
			unsigned : 5;
			unsigned PTSIDL : 1;
			unsigned : 1;
			unsigned PTEN : 1;
		};
		struct {
			unsigned PTMOD0 : 1;
			unsigned PTMOD1 : 1;
			unsigned PTCKPS0 : 1;
			unsigned PTCKPS1 : 1;
			unsigned PTOPS0 : 1;
			unsigned PTOPS1 : 1;
			unsigned PTOPS2 : 1;
			unsigned PTOPS3 : 1;
		};
	};
} P2TCONBITS;
 volatile P2TCONBITS P2TCONbits ;

 volatile unsigned int  P2TMR ;
typedef struct tagP2TMRBITS {
	unsigned PTMR : 15;
	unsigned PTDIR : 1;
} P2TMRBITS;
 volatile P2TMRBITS P2TMRbits ;

 volatile unsigned int  P2TPER ;
typedef struct tagP2TPERBITS {
	unsigned PTPER : 15;
} P2TPERBITS;
 volatile P2TPERBITS P2TPERbits ;

 volatile unsigned int  P2SECMP ;
typedef struct tagP2SECMPBITS {
	unsigned SEVTCMP : 15;
	unsigned SEVTDIR : 1;
} P2SECMPBITS;
 volatile P2SECMPBITS P2SECMPbits ;

 volatile unsigned int  PWM2CON1 ;
typedef struct tagPWM2CON1BITS {
	unsigned PEN1L : 1;
	unsigned : 3;
	unsigned PEN1H : 1;
	unsigned : 3;
	unsigned PMOD1 : 1;
} PWM2CON1BITS;
 volatile PWM2CON1BITS PWM2CON1bits ;

 volatile unsigned int  PWM2CON2 ;
 typedef struct tagPWM2CON2BITS {
	union {
		struct {
			unsigned UDIS : 1;
			unsigned OSYNC : 1;
			unsigned IUE : 1;
			unsigned : 5;
			unsigned SEVOPS : 4;
		};
		struct {
			unsigned : 8;
			unsigned SEVOPS0 : 1;
			unsigned SEVOPS1 : 1;
			unsigned SEVOPS2 : 1;
			unsigned SEVOPS3 : 1;
		};
	};
} PWM2CON2BITS;
 volatile PWM2CON2BITS PWM2CON2bits ;

 volatile unsigned int  P2DTCON1 ;
 typedef struct tagP2DTCON1BITS {
	union {
		struct {
			unsigned DTA : 6;
			unsigned DTAPS : 2;
			unsigned DTB : 6;
			unsigned DTBPS : 2;
		};
		struct {
			unsigned DTA0 : 1;
			unsigned DTA1 : 1;
			unsigned DTA2 : 1;
			unsigned DTA3 : 1;
			unsigned DTA4 : 1;
			unsigned DTA5 : 1;
			unsigned DTAPS0 : 1;
			unsigned DTAPS1 : 1;
			unsigned DTB0 : 1;
			unsigned DTB1 : 1;
			unsigned DTB2 : 1;
			unsigned DTB3 : 1;
			unsigned DTB4 : 1;
			unsigned DTB5 : 1;
			unsigned DTBPS0 : 1;
			unsigned DTBPS1 : 1;
		};
	};
} P2DTCON1BITS;
 volatile P2DTCON1BITS P2DTCON1bits ;

 volatile unsigned int  P2DTCON2 ;
typedef struct tagP2DTCON2BITS {
	unsigned DTS1I : 1;
	unsigned DTS1A : 1;
} P2DTCON2BITS;
 volatile P2DTCON2BITS P2DTCON2bits ;

 volatile unsigned int  P2FLTACON ;
typedef struct tagP2FLTACONBITS {
	unsigned FAEN1 : 1;
	unsigned : 6;
	unsigned FLTAM : 1;
	unsigned FAOV1L : 1;
	unsigned FAOV1H : 1;
} P2FLTACONBITS;
 volatile P2FLTACONBITS P2FLTACONbits ;

 volatile unsigned int  P2OVDCON ;
typedef struct tagP2OVDCONBITS {
	unsigned POUT1L : 1;
	unsigned POUT1H : 1;
	unsigned : 6;
	unsigned POVD1L : 1;
	unsigned POVD1H : 1;
} P2OVDCONBITS;
 volatile P2OVDCONBITS P2OVDCONbits ;

 volatile unsigned int  P2DC1 ;
 volatile unsigned int  PMCON ;
 typedef struct tagPMCONBITS {
	union {
		struct {
			unsigned RDSP : 1;
			unsigned WRSP : 1;
			unsigned BEP : 1;
			unsigned CS1P : 1;
			unsigned : 1;
			unsigned ALP : 1;
			unsigned CSF : 2;
			unsigned PTRDEN : 1;
			unsigned PTWREN : 1;
			unsigned PTBEEN : 1;
			unsigned ADRMUX : 2;
			unsigned PSIDL : 1;
			unsigned : 1;
			unsigned PMPEN : 1;
		};
		struct {
			unsigned : 6;
			unsigned CSF0 : 1;
			unsigned CSF1 : 1;
			unsigned : 3;
			unsigned ADRMUX0 : 1;
			unsigned ADRMUX1 : 1;
		};
	};
} PMCONBITS;
 volatile PMCONBITS PMCONbits ;

 volatile unsigned int  PMMODE ;
 typedef struct tagPMMODEBITS {
	union {
		struct {
			unsigned WAITE : 2;
			unsigned WAITM : 4;
			unsigned WAITB : 2;
			unsigned MODE : 2;
			unsigned MODE16 : 1;
			unsigned INCM : 2;
			unsigned IRQM : 2;
			unsigned BUSY : 1;
		};
		struct {
			unsigned WAITE0 : 1;
			unsigned WAITE1 : 1;
			unsigned WAITM0 : 1;
			unsigned WAITM1 : 1;
			unsigned WAITM2 : 1;
			unsigned WAITM3 : 1;
			unsigned WAITB0 : 1;
			unsigned WAITB1 : 1;
			unsigned MODE0 : 1;
			unsigned MODE1 : 1;
			unsigned : 1;
			unsigned INCM0 : 1;
			unsigned INCM1 : 1;
			unsigned IRQM0 : 1;
			unsigned IRQM1 : 1;
		};
	};
} PMMODEBITS;
 volatile PMMODEBITS PMMODEbits ;

 volatile unsigned int  PMADDR ;
 typedef struct tagPMADDRBITS {
	union {
		struct {
			unsigned ADDR : 14;
			unsigned CS1 : 1;
			unsigned ADDR15 : 1;
		};
		struct {
			unsigned ADDR0 : 1;
			unsigned ADDR1 : 1;
			unsigned ADDR2 : 1;
			unsigned ADDR3 : 1;
			unsigned ADDR4 : 1;
			unsigned ADDR5 : 1;
			unsigned ADDR6 : 1;
			unsigned ADDR7 : 1;
			unsigned ADDR8 : 1;
			unsigned ADDR9 : 1;
			unsigned ADDR10 : 1;
			unsigned ADDR11 : 1;
			unsigned ADDR12 : 1;
			unsigned ADDR13 : 1;
		};
	};
} PMADDRBITS;
 volatile PMADDRBITS PMADDRbits ;

 volatile unsigned int  PMDOUT1 ;
 volatile unsigned int  PMDOUT2 ;
 volatile unsigned int  PMDIN1 ;
 volatile unsigned int  PMDIN2 ;
 volatile unsigned int  PMAEN ;
 typedef struct tagPMAENBITS {
	union {
		struct {
			unsigned PTEN : 11;
			unsigned : 3;
			unsigned PTEN14 : 1;
		};
		struct {
			unsigned PTEN0 : 1;
			unsigned PTEN1 : 1;
			unsigned PTEN2 : 1;
			unsigned PTEN3 : 1;
			unsigned PTEN4 : 1;
			unsigned PTEN5 : 1;
			unsigned PTEN6 : 1;
			unsigned PTEN7 : 1;
			unsigned PTEN8 : 1;
			unsigned PTEN9 : 1;
			unsigned PTEN10 : 1;
		};
	};
} PMAENBITS;
 volatile PMAENBITS PMAENbits ;

 volatile unsigned int  PMSTAT ;
typedef struct tagPMSTATBITS {
	unsigned OB0E : 1;
	unsigned OB1E : 1;
	unsigned OB2E : 1;
	unsigned OB3E : 1;
	unsigned : 2;
	unsigned OBUF : 1;
	unsigned OBE : 1;
	unsigned IB0F : 1;
	unsigned IB1F : 1;
	unsigned IB2F : 1;
	unsigned IB3F : 1;
	unsigned : 2;
	unsigned IBOV : 1;
	unsigned IBF : 1;
} PMSTATBITS;
 volatile PMSTATBITS PMSTATbits ;

 volatile unsigned int  ALRMVAL ;
 volatile unsigned int  ALCFGRPT ;
 typedef struct tagALCFGRPTBITS {
	union {
		struct {
			unsigned ARPT : 8;
			unsigned ALRMPTR : 2;
			unsigned AMASK : 4;
			unsigned CHIME : 1;
			unsigned ALRMEN : 1;
		};
		struct {
			unsigned ARPT0 : 1;
			unsigned ARPT1 : 1;
			unsigned ARPT2 : 1;
			unsigned ARPT3 : 1;
			unsigned ARPT4 : 1;
			unsigned ARPT5 : 1;
			unsigned ARPT6 : 1;
			unsigned ARPT7 : 1;
			unsigned ALRMPTR0 : 1;
			unsigned ALRMPTR1 : 1;
			unsigned AMASK0 : 1;
			unsigned AMASK1 : 1;
			unsigned AMASK2 : 1;
			unsigned AMASK3 : 1;
		};
	};
} ALCFGRPTBITS;
 volatile ALCFGRPTBITS ALCFGRPTbits ;

 volatile unsigned int  RTCVAL ;
 volatile unsigned int  RCFGCAL ;
 typedef struct tagRCFGCALBITS {
	union {
		struct {
			unsigned CAL : 8;
			unsigned RTCPTR : 2;
			unsigned RTCOE : 1;
			unsigned HALFSEC : 1;
			unsigned RTCSYNC : 1;
			unsigned RTCWREN : 1;
			unsigned : 1;
			unsigned RTCEN : 1;
		};
		struct {
			unsigned CAL0 : 1;
			unsigned CAL1 : 1;
			unsigned CAL2 : 1;
			unsigned CAL3 : 1;
			unsigned CAL4 : 1;
			unsigned CAL5 : 1;
			unsigned CAL6 : 1;
			unsigned CAL7 : 1;
			unsigned RTCPTR0 : 1;
			unsigned RTCPTR1 : 1;
		};
	};
} RCFGCALBITS;
 volatile RCFGCALBITS RCFGCALbits ;

 volatile unsigned int  CMCON ;
typedef struct tagCMCONBITS {
	unsigned C1POS : 1;
	unsigned C1NEG : 1;
	unsigned C2POS : 1;
	unsigned C2NEG : 1;
	unsigned C1INV : 1;
	unsigned C2INV : 1;
	unsigned C1OUT : 1;
	unsigned C2OUT : 1;
	unsigned C1OUTEN : 1;
	unsigned C2OUTEN : 1;
	unsigned C1EN : 1;
	unsigned C2EN : 1;
	unsigned C1EVT : 1;
	unsigned C2EVT : 1;
	unsigned : 1;
	unsigned CMIDL : 1;
} CMCONBITS;
 volatile CMCONBITS CMCONbits ;

 volatile unsigned int  CVRCON ;
 typedef struct tagCVRCONBITS {
	union {
		struct {
			unsigned CVR : 4;
			unsigned CVRSS : 1;
			unsigned CVRR : 1;
			unsigned CVROE : 1;
			unsigned CVREN : 1;
		};
		struct {
			unsigned CVR0 : 1;
			unsigned CVR1 : 1;
			unsigned CVR2 : 1;
			unsigned CVR3 : 1;
		};
	};
} CVRCONBITS;
 volatile CVRCONBITS CVRCONbits ;

 volatile unsigned int  CRCCON ;
 typedef struct tagCRCCONBITS {
	union {
		struct {
			unsigned PLEN : 4;
			unsigned CRCGO : 1;
			unsigned : 1;
			unsigned CRCMPT : 1;
			unsigned CRCFUL : 1;
			unsigned VWORD : 5;
			unsigned CSIDL : 1;
		};
		struct {
			unsigned PLEN0 : 1;
			unsigned PLEN1 : 1;
			unsigned PLEN2 : 1;
			unsigned PLEN3 : 1;
			unsigned : 4;
			unsigned VWORD0 : 1;
			unsigned VWORD1 : 1;
			unsigned VWORD2 : 1;
			unsigned VWORD3 : 1;
			unsigned VWORD4 : 1;
		};
	};
} CRCCONBITS;
 volatile CRCCONBITS CRCCONbits ;

 volatile unsigned int  CRCXOR ;
 volatile unsigned int  CRCDAT ;
 volatile unsigned int  CRCWDAT ;
 volatile unsigned int  RPINR0 ;
 typedef struct tagRPINR0BITS {
	union {
		struct {
			unsigned : 8;
			unsigned INT1R : 5;
		};
		struct {
			unsigned : 8;
			unsigned INT1R0 : 1;
			unsigned INT1R1 : 1;
			unsigned INT1R2 : 1;
			unsigned INT1R3 : 1;
			unsigned INT1R4 : 1;
		};
	};
} RPINR0BITS;
 volatile RPINR0BITS RPINR0bits ;

 volatile unsigned int  RPINR1 ;
 typedef struct tagRPINR1BITS {
	union {
		struct {
			unsigned INT2R : 5;
		};
		struct {
			unsigned INT2R0 : 1;
			unsigned INT2R1 : 1;
			unsigned INT2R2 : 1;
			unsigned INT2R3 : 1;
			unsigned INT2R4 : 1;
		};
	};
} RPINR1BITS;
 volatile RPINR1BITS RPINR1bits ;

 volatile unsigned int  RPINR3 ;
 typedef struct tagRPINR3BITS {
	union {
		struct {
			unsigned T2CKR : 5;
			unsigned : 3;
			unsigned T3CKR : 5;
		};
		struct {
			unsigned T2CKR0 : 1;
			unsigned T2CKR1 : 1;
			unsigned T2CKR2 : 1;
			unsigned T2CKR3 : 1;
			unsigned T2CKR4 : 1;
			unsigned : 3;
			unsigned T3CKR0 : 1;
			unsigned T3CKR1 : 1;
			unsigned T3CKR2 : 1;
			unsigned T3CKR3 : 1;
			unsigned T3CKR4 : 1;
		};
	};
} RPINR3BITS;
 volatile RPINR3BITS RPINR3bits ;

 volatile unsigned int  RPINR4 ;
 typedef struct tagRPINR4BITS {
	union {
		struct {
			unsigned T4CKR : 5;
			unsigned : 3;
			unsigned T5CKR : 5;
		};
		struct {
			unsigned T4CKR0 : 1;
			unsigned T4CKR1 : 1;
			unsigned T4CKR2 : 1;
			unsigned T4CKR3 : 1;
			unsigned T4CKR4 : 1;
			unsigned : 3;
			unsigned T5CKR0 : 1;
			unsigned T5CKR1 : 1;
			unsigned T5CKR2 : 1;
			unsigned T5CKR3 : 1;
			unsigned T5CKR4 : 1;
		};
	};
} RPINR4BITS;
 volatile RPINR4BITS RPINR4bits ;

 volatile unsigned int  RPINR7 ;
 typedef struct tagRPINR7BITS {
	union {
		struct {
			unsigned IC1R : 5;
			unsigned : 3;
			unsigned IC2R : 5;
		};
		struct {
			unsigned IC1R0 : 1;
			unsigned IC1R1 : 1;
			unsigned IC1R2 : 1;
			unsigned IC1R3 : 1;
			unsigned IC1R4 : 1;
			unsigned : 3;
			unsigned IC2R0 : 1;
			unsigned IC2R1 : 1;
			unsigned IC2R2 : 1;
			unsigned IC2R3 : 1;
			unsigned IC2R4 : 1;
		};
	};
} RPINR7BITS;
 volatile RPINR7BITS RPINR7bits ;

 volatile unsigned int  RPINR10 ;
 typedef struct tagRPINR10BITS {
	union {
		struct {
			unsigned IC7R : 5;
			unsigned : 3;
			unsigned IC8R : 5;
		};
		struct {
			unsigned IC7R0 : 1;
			unsigned IC7R1 : 1;
			unsigned IC7R2 : 1;
			unsigned IC7R3 : 1;
			unsigned IC7R4 : 1;
			unsigned : 3;
			unsigned IC8R0 : 1;
			unsigned IC8R1 : 1;
			unsigned IC8R2 : 1;
			unsigned IC8R3 : 1;
			unsigned IC8R4 : 1;
		};
	};
} RPINR10BITS;
 volatile RPINR10BITS RPINR10bits ;

 volatile unsigned int  RPINR11 ;
 typedef struct tagRPINR11BITS {
	union {
		struct {
			unsigned OCFAR : 5;
		};
		struct {
			unsigned OCFAR0 : 1;
			unsigned OCFAR1 : 1;
			unsigned OCFAR2 : 1;
			unsigned OCFAR3 : 1;
			unsigned OCFAR4 : 1;
		};
	};
} RPINR11BITS;
 volatile RPINR11BITS RPINR11bits ;

 volatile unsigned int  RPINR12 ;
 typedef struct tagRPINR12BITS {
	union {
		struct {
			unsigned FLTA1R : 5;
		};
		struct {
			unsigned FLTA1R0 : 1;
			unsigned FLTA1R1 : 1;
			unsigned FLTA1R2 : 1;
			unsigned FLTA1R3 : 1;
			unsigned FLTA1R4 : 1;
		};
	};
} RPINR12BITS;
 volatile RPINR12BITS RPINR12bits ;

 volatile unsigned int  RPINR13 ;
 typedef struct tagRPINR13BITS {
	union {
		struct {
			unsigned FLTA2R : 5;
		};
		struct {
			unsigned FLTA2R0 : 1;
			unsigned FLTA2R1 : 1;
			unsigned FLTA2R2 : 1;
			unsigned FLTA2R3 : 1;
			unsigned FLTA2R4 : 1;
		};
	};
} RPINR13BITS;
 volatile RPINR13BITS RPINR13bits ;

 volatile unsigned int  RPINR14 ;
 typedef struct tagRPINR14BITS {
	union {
		struct {
			unsigned QEA1R : 5;
			unsigned : 3;
			unsigned QEB1R : 5;
		};
		struct {
			unsigned QEA1R0 : 1;
			unsigned QEA1R1 : 1;
			unsigned QEA1R2 : 1;
			unsigned QEA1R3 : 1;
			unsigned QEA1R4 : 1;
			unsigned : 3;
			unsigned QEB1R0 : 1;
			unsigned QEB1R1 : 1;
			unsigned QEB1R2 : 1;
			unsigned QEB1R3 : 1;
			unsigned QEB1R4 : 1;
		};
	};
} RPINR14BITS;
 volatile RPINR14BITS RPINR14bits ;

 volatile unsigned int  RPINR15 ;
 typedef struct tagRPINR15BITS {
	union {
		struct {
			unsigned INDX1R : 5;
		};
		struct {
			unsigned INDX1R0 : 1;
			unsigned INDX1R1 : 1;
			unsigned INDX1R2 : 1;
			unsigned INDX1R3 : 1;
			unsigned INDX1R4 : 1;
		};
	};
} RPINR15BITS;
 volatile RPINR15BITS RPINR15bits ;

 volatile unsigned int  RPINR16 ;
 typedef struct tagRPINR16BITS {
	union {
		struct {
			unsigned QEA2R : 5;
			unsigned : 3;
			unsigned QEB2R : 5;
		};
		struct {
			unsigned QEA2R0 : 1;
			unsigned QEA2R1 : 1;
			unsigned QEA2R2 : 1;
			unsigned QEA2R3 : 1;
			unsigned QEA2R4 : 1;
			unsigned : 3;
			unsigned QEB2R0 : 1;
			unsigned QEB2R1 : 1;
			unsigned QEB2R2 : 1;
			unsigned QEB2R3 : 1;
			unsigned QEB2R4 : 1;
		};
	};
} RPINR16BITS;
 volatile RPINR16BITS RPINR16bits ;

 volatile unsigned int  RPINR17 ;
 typedef struct tagRPINR17BITS {
	union {
		struct {
			unsigned INDX2R : 5;
		};
		struct {
			unsigned INDX2R0 : 1;
			unsigned INDX2R1 : 1;
			unsigned INDX2R2 : 1;
			unsigned INDX2R3 : 1;
			unsigned INDX2R4 : 1;
		};
	};
} RPINR17BITS;
 volatile RPINR17BITS RPINR17bits ;

 volatile unsigned int  RPINR18 ;
 typedef struct tagRPINR18BITS {
	union {
		struct {
			unsigned U1RXR : 5;
			unsigned : 3;
			unsigned U1CTSR : 5;
		};
		struct {
			unsigned U1RXR0 : 1;
			unsigned U1RXR1 : 1;
			unsigned U1RXR2 : 1;
			unsigned U1RXR3 : 1;
			unsigned U1RXR4 : 1;
			unsigned : 3;
			unsigned U1CTSR0 : 1;
			unsigned U1CTSR1 : 1;
			unsigned U1CTSR2 : 1;
			unsigned U1CTSR3 : 1;
			unsigned U1CTSR4 : 1;
		};
	};
} RPINR18BITS;
 volatile RPINR18BITS RPINR18bits ;

 volatile unsigned int  RPINR19 ;
 typedef struct tagRPINR19BITS {
	union {
		struct {
			unsigned U2RXR : 5;
			unsigned : 3;
			unsigned U2CTSR : 5;
		};
		struct {
			unsigned U2RXR0 : 1;
			unsigned U2RXR1 : 1;
			unsigned U2RXR2 : 1;
			unsigned U2RXR3 : 1;
			unsigned U2RXR4 : 1;
			unsigned : 3;
			unsigned U2CTSR0 : 1;
			unsigned U2CTSR1 : 1;
			unsigned U2CTSR2 : 1;
			unsigned U2CTSR3 : 1;
			unsigned U2CTSR4 : 1;
		};
	};
} RPINR19BITS;
 volatile RPINR19BITS RPINR19bits ;

 volatile unsigned int  RPINR20 ;
 typedef struct tagRPINR20BITS {
	union {
		struct {
			unsigned SDI1R : 5;
			unsigned : 3;
			unsigned SCK1R : 5;
		};
		struct {
			unsigned SDI1R0 : 1;
			unsigned SDI1R1 : 1;
			unsigned SDI1R2 : 1;
			unsigned SDI1R3 : 1;
			unsigned SDI1R4 : 1;
			unsigned : 3;
			unsigned SCK1R0 : 1;
			unsigned SCK1R1 : 1;
			unsigned SCK1R2 : 1;
			unsigned SCK1R3 : 1;
			unsigned SCK1R4 : 1;
		};
	};
} RPINR20BITS;
 volatile RPINR20BITS RPINR20bits ;

 volatile unsigned int  RPINR21 ;
 typedef struct tagRPINR21BITS {
	union {
		struct {
			unsigned SS1R : 5;
		};
		struct {
			unsigned SS1R0 : 1;
			unsigned SS1R1 : 1;
			unsigned SS1R2 : 1;
			unsigned SS1R3 : 1;
			unsigned SS1R4 : 1;
		};
	};
} RPINR21BITS;
 volatile RPINR21BITS RPINR21bits ;

 volatile unsigned int  RPINR22 ;
 typedef struct tagRPINR22BITS {
	union {
		struct {
			unsigned SDI2R : 5;
			unsigned : 3;
			unsigned SCK2R : 5;
		};
		struct {
			unsigned SDI2R0 : 1;
			unsigned SDI2R1 : 1;
			unsigned SDI2R2 : 1;
			unsigned SDI2R3 : 1;
			unsigned SDI2R4 : 1;
			unsigned : 3;
			unsigned SCK2R0 : 1;
			unsigned SCK2R1 : 1;
			unsigned SCK2R2 : 1;
			unsigned SCK2R3 : 1;
			unsigned SCK2R4 : 1;
		};
	};
} RPINR22BITS;
 volatile RPINR22BITS RPINR22bits ;

 volatile unsigned int  RPINR23 ;
 typedef struct tagRPINR23BITS {
	union {
		struct {
			unsigned SS2R : 5;
		};
		struct {
			unsigned SS2R0 : 1;
			unsigned SS2R1 : 1;
			unsigned SS2R2 : 1;
			unsigned SS2R3 : 1;
			unsigned SS2R4 : 1;
		};
	};
} RPINR23BITS;
 volatile RPINR23BITS RPINR23bits ;

 volatile unsigned int  RPINR26 ;
 typedef struct tagRPINR26BITS {
	union {
		struct {
			unsigned C1RXR : 5;
		};
		struct {
			unsigned C1RXR0 : 1;
			unsigned C1RXR1 : 1;
			unsigned C1RXR2 : 1;
			unsigned C1RXR3 : 1;
			unsigned C1RXR4 : 1;
		};
	};
} RPINR26BITS;
 volatile RPINR26BITS RPINR26bits ;

 volatile unsigned int  RPOR0 ;
 typedef struct tagRPOR0BITS {
	union {
		struct {
			unsigned RP0R : 5;
			unsigned : 3;
			unsigned RP1R : 5;
		};
		struct {
			unsigned RP0R0 : 1;
			unsigned RP0R1 : 1;
			unsigned RP0R2 : 1;
			unsigned RP0R3 : 1;
			unsigned RP0R4 : 1;
			unsigned : 3;
			unsigned RP1R0 : 1;
			unsigned RP1R1 : 1;
			unsigned RP1R2 : 1;
			unsigned RP1R3 : 1;
			unsigned RP1R4 : 1;
		};
	};
} RPOR0BITS;
 volatile RPOR0BITS RPOR0bits ;

 volatile unsigned int  RPOR1 ;
 typedef struct tagRPOR1BITS {
	union {
		struct {
			unsigned RP2R : 5;
			unsigned : 3;
			unsigned RP3R : 5;
		};
		struct {
			unsigned RP2R0 : 1;
			unsigned RP2R1 : 1;
			unsigned RP2R2 : 1;
			unsigned RP2R3 : 1;
			unsigned RP2R4 : 1;
			unsigned : 3;
			unsigned RP3R0 : 1;
			unsigned RP3R1 : 1;
			unsigned RP3R2 : 1;
			unsigned RP3R3 : 1;
			unsigned RP3R4 : 1;
		};
	};
} RPOR1BITS;
 volatile RPOR1BITS RPOR1bits ;

 volatile unsigned int  RPOR2 ;
 typedef struct tagRPOR2BITS {
	union {
		struct {
			unsigned RP4R : 5;
			unsigned : 3;
			unsigned RP5R : 5;
		};
		struct {
			unsigned RP4R0 : 1;
			unsigned RP4R1 : 1;
			unsigned RP4R2 : 1;
			unsigned RP4R3 : 1;
			unsigned RP4R4 : 1;
			unsigned : 3;
			unsigned RP5R0 : 1;
			unsigned RP5R1 : 1;
			unsigned RP5R2 : 1;
			unsigned RP5R3 : 1;
			unsigned RP5R4 : 1;
		};
	};
} RPOR2BITS;
 volatile RPOR2BITS RPOR2bits ;

 volatile unsigned int  RPOR3 ;
 typedef struct tagRPOR3BITS {
	union {
		struct {
			unsigned RP6R : 5;
			unsigned : 3;
			unsigned RP7R : 5;
		};
		struct {
			unsigned RP6R0 : 1;
			unsigned RP6R1 : 1;
			unsigned RP6R2 : 1;
			unsigned RP6R3 : 1;
			unsigned RP6R4 : 1;
			unsigned : 3;
			unsigned RP7R0 : 1;
			unsigned RP7R1 : 1;
			unsigned RP7R2 : 1;
			unsigned RP7R3 : 1;
			unsigned RP7R4 : 1;
		};
	};
} RPOR3BITS;
 volatile RPOR3BITS RPOR3bits ;

 volatile unsigned int  RPOR4 ;
 typedef struct tagRPOR4BITS {
	union {
		struct {
			unsigned RP8R : 5;
			unsigned : 3;
			unsigned RP9R : 5;
		};
		struct {
			unsigned RP8R0 : 1;
			unsigned RP8R1 : 1;
			unsigned RP8R2 : 1;
			unsigned RP8R3 : 1;
			unsigned RP8R4 : 1;
			unsigned : 3;
			unsigned RP9R0 : 1;
			unsigned RP9R1 : 1;
			unsigned RP9R2 : 1;
			unsigned RP9R3 : 1;
			unsigned RP9R4 : 1;
		};
	};
} RPOR4BITS;
 volatile RPOR4BITS RPOR4bits ;

 volatile unsigned int  RPOR5 ;
 typedef struct tagRPOR5BITS {
	union {
		struct {
			unsigned RP10R : 5;
			unsigned : 3;
			unsigned RP11R : 5;
		};
		struct {
			unsigned RP10R0 : 1;
			unsigned RP10R1 : 1;
			unsigned RP10R2 : 1;
			unsigned RP10R3 : 1;
			unsigned RP10R4 : 1;
			unsigned : 3;
			unsigned RP11R0 : 1;
			unsigned RP11R1 : 1;
			unsigned RP11R2 : 1;
			unsigned RP11R3 : 1;
			unsigned RP11R4 : 1;
		};
	};
} RPOR5BITS;
 volatile RPOR5BITS RPOR5bits ;

 volatile unsigned int  RPOR6 ;
 typedef struct tagRPOR6BITS {
	union {
		struct {
			unsigned RP12R : 5;
			unsigned : 3;
			unsigned RP13R : 5;
		};
		struct {
			unsigned RP12R0 : 1;
			unsigned RP12R1 : 1;
			unsigned RP12R2 : 1;
			unsigned RP12R3 : 1;
			unsigned RP12R4 : 1;
			unsigned : 3;
			unsigned RP13R0 : 1;
			unsigned RP13R1 : 1;
			unsigned RP13R2 : 1;
			unsigned RP13R3 : 1;
			unsigned RP13R4 : 1;
		};
	};
} RPOR6BITS;
 volatile RPOR6BITS RPOR6bits ;

 volatile unsigned int  RPOR7 ;
 typedef struct tagRPOR7BITS {
	union {
		struct {
			unsigned RP14R : 5;
			unsigned : 3;
			unsigned RP15R : 5;
		};
		struct {
			unsigned RP14R0 : 1;
			unsigned RP14R1 : 1;
			unsigned RP14R2 : 1;
			unsigned RP14R3 : 1;
			unsigned RP14R4 : 1;
			unsigned : 3;
			unsigned RP15R0 : 1;
			unsigned RP15R1 : 1;
			unsigned RP15R2 : 1;
			unsigned RP15R3 : 1;
			unsigned RP15R4 : 1;
		};
	};
} RPOR7BITS;
 volatile RPOR7BITS RPOR7bits ;

 volatile unsigned int  RPOR8 ;
 typedef struct tagRPOR8BITS {
	union {
		struct {
			unsigned RP16R : 5;
			unsigned : 3;
			unsigned RP17R : 5;
		};
		struct {
			unsigned RP16R0 : 1;
			unsigned RP16R1 : 1;
			unsigned RP16R2 : 1;
			unsigned RP16R3 : 1;
			unsigned RP16R4 : 1;
			unsigned : 3;
			unsigned RP17R0 : 1;
			unsigned RP17R1 : 1;
			unsigned RP17R2 : 1;
			unsigned RP17R3 : 1;
			unsigned RP17R4 : 1;
		};
	};
} RPOR8BITS;
 volatile RPOR8BITS RPOR8bits ;

 volatile unsigned int  RPOR9 ;
 typedef struct tagRPOR9BITS {
	union {
		struct {
			unsigned RP18R : 5;
			unsigned : 3;
			unsigned RP19R : 5;
		};
		struct {
			unsigned RP18R0 : 1;
			unsigned RP18R1 : 1;
			unsigned RP18R2 : 1;
			unsigned RP18R3 : 1;
			unsigned RP18R4 : 1;
			unsigned : 3;
			unsigned RP19R0 : 1;
			unsigned RP19R1 : 1;
			unsigned RP19R2 : 1;
			unsigned RP19R3 : 1;
			unsigned RP19R4 : 1;
		};
	};
} RPOR9BITS;
 volatile RPOR9BITS RPOR9bits ;

 volatile unsigned int  RPOR10 ;
 typedef struct tagRPOR10BITS {
	union {
		struct {
			unsigned RP20R : 5;
			unsigned : 3;
			unsigned RP21R : 5;
		};
		struct {
			unsigned RP20R0 : 1;
			unsigned RP20R1 : 1;
			unsigned RP20R2 : 1;
			unsigned RP20R3 : 1;
			unsigned RP20R4 : 1;
			unsigned : 3;
			unsigned RP21R0 : 1;
			unsigned RP21R1 : 1;
			unsigned RP21R2 : 1;
			unsigned RP21R3 : 1;
			unsigned RP21R4 : 1;
		};
	};
} RPOR10BITS;
 volatile RPOR10BITS RPOR10bits ;

 volatile unsigned int  RPOR11 ;
 typedef struct tagRPOR11BITS {
	union {
		struct {
			unsigned RP22R : 5;
			unsigned : 3;
			unsigned RP23R : 5;
		};
		struct {
			unsigned RP22R0 : 1;
			unsigned RP22R1 : 1;
			unsigned RP22R2 : 1;
			unsigned RP22R3 : 1;
			unsigned RP22R4 : 1;
			unsigned : 3;
			unsigned RP23R0 : 1;
			unsigned RP23R1 : 1;
			unsigned RP23R2 : 1;
			unsigned RP23R3 : 1;
			unsigned RP23R4 : 1;
		};
	};
} RPOR11BITS;
 volatile RPOR11BITS RPOR11bits ;

 volatile unsigned int  RPOR12 ;
 typedef struct tagRPOR12BITS {
	union {
		struct {
			unsigned RP24R : 5;
			unsigned : 3;
			unsigned RP25R : 5;
		};
		struct {
			unsigned RP24R0 : 1;
			unsigned RP24R1 : 1;
			unsigned RP24R2 : 1;
			unsigned RP24R3 : 1;
			unsigned RP24R4 : 1;
			unsigned : 3;
			unsigned RP25R0 : 1;
			unsigned RP25R1 : 1;
			unsigned RP25R2 : 1;
			unsigned RP25R3 : 1;
			unsigned RP25R4 : 1;
		};
	};
} RPOR12BITS;
 volatile RPOR12BITS RPOR12bits ;

 volatile unsigned int  RCON ;
typedef struct tagRCONBITS {
	unsigned POR : 1;
	unsigned BOR : 1;
	unsigned IDLE : 1;
	unsigned SLEEP : 1;
	unsigned WDTO : 1;
	unsigned SWDTEN : 1;
	unsigned SWR : 1;
	unsigned EXTR : 1;
	unsigned VREGS : 1;
	unsigned CM : 1;
	unsigned : 4;
	unsigned IOPUWR : 1;
	unsigned TRAPR : 1;
} RCONBITS;
 volatile RCONBITS RCONbits ;

 volatile unsigned int  OSCCON ;
 typedef struct tagOSCCONBITS {
	union {
		struct {
			unsigned OSWEN : 1;
			unsigned LPOSCEN : 1;
			unsigned : 1;
			unsigned CF : 1;
			unsigned : 1;
			unsigned LOCK : 1;
			unsigned IOLOCK : 1;
			unsigned CLKLOCK : 1;
			unsigned NOSC : 3;
			unsigned : 1;
			unsigned COSC : 3;
		};
		struct {
			unsigned : 8;
			unsigned NOSC0 : 1;
			unsigned NOSC1 : 1;
			unsigned NOSC2 : 1;
			unsigned : 1;
			unsigned COSC0 : 1;
			unsigned COSC1 : 1;
			unsigned COSC2 : 1;
		};
	};
} OSCCONBITS;
 volatile OSCCONBITS OSCCONbits ;

 volatile unsigned char OSCCONL ;
 volatile unsigned char OSCCONH ;
 volatile unsigned int  CLKDIV ;
 typedef struct tagCLKDIVBITS {
	union {
		struct {
			unsigned PLLPRE : 5;
			unsigned : 1;
			unsigned PLLPOST : 2;
			unsigned FRCDIV : 3;
			unsigned DOZEN : 1;
			unsigned DOZE : 3;
			unsigned ROI : 1;
		};
		struct {
			unsigned PLLPRE0 : 1;
			unsigned PLLPRE1 : 1;
			unsigned PLLPRE2 : 1;
			unsigned PLLPRE3 : 1;
			unsigned PLLPRE4 : 1;
			unsigned : 1;
			unsigned PLLPOST0 : 1;
			unsigned PLLPOST1 : 1;
			unsigned FRCDIV0 : 1;
			unsigned FRCDIV1 : 1;
			unsigned FRCDIV2 : 1;
			unsigned : 1;
			unsigned DOZE0 : 1;
			unsigned DOZE1 : 1;
			unsigned DOZE2 : 1;
		};
	};
} CLKDIVBITS;
 volatile CLKDIVBITS CLKDIVbits ;

 volatile unsigned int  PLLFBD ;
 typedef struct tagPLLFBDBITS {
	union {
		struct {
			unsigned PLLDIV : 9;
		};
		struct {
			unsigned PLLDIV0 : 1;
			unsigned PLLDIV1 : 1;
			unsigned PLLDIV2 : 1;
			unsigned PLLDIV3 : 1;
			unsigned PLLDIV4 : 1;
			unsigned PLLDIV5 : 1;
			unsigned PLLDIV6 : 1;
			unsigned PLLDIV7 : 1;
			unsigned PLLDIV8 : 1;
		};
	};
} PLLFBDBITS;
 volatile PLLFBDBITS PLLFBDbits ;

 volatile unsigned int  OSCTUN ;
 typedef struct tagOSCTUNBITS {
	union {
		struct {
			unsigned TUN : 6;
		};
		struct {
			unsigned TUN0 : 1;
			unsigned TUN1 : 1;
			unsigned TUN2 : 1;
			unsigned TUN3 : 1;
			unsigned TUN4 : 1;
			unsigned TUN5 : 1;
		};
	};
} OSCTUNBITS;
 volatile OSCTUNBITS OSCTUNbits ;

 volatile unsigned int  ACLKCON ;
 typedef struct tagACLKCONBITS {
	union {
		struct {
			unsigned : 7;
			unsigned ASRCSEL : 1;
			unsigned APSTSCLR : 3;
			unsigned AOSCMD : 2;
			unsigned SELACLK : 1;
		};
		struct {
			unsigned : 8;
			unsigned APSTSCLR0 : 1;
			unsigned APSTSCLR1 : 1;
			unsigned APSTSCLR2 : 1;
			unsigned AOSCMD0 : 1;
			unsigned AOSCMD1 : 1;
		};
	};
} ACLKCONBITS;
 volatile ACLKCONBITS ACLKCONbits ;

 volatile unsigned int  BSRAM ;
typedef struct tagBSRAMBITS {
	unsigned RL_BSR : 1;
	unsigned IR__BSR : 1;
	unsigned IW__BSR : 1;
} BSRAMBITS;
 volatile BSRAMBITS BSRAMbits ;

 volatile unsigned int  SSRAM ;
typedef struct tagSSRAMBITS {
	unsigned RL_SSR : 1;
	unsigned IR_SSR : 1;
	unsigned IW_SSR : 1;
} SSRAMBITS;
 volatile SSRAMBITS SSRAMbits ;

 volatile unsigned int  NVMCON ;
 typedef struct tagNVMCONBITS {
	union {
		struct {
			unsigned NVMOP : 4;
			unsigned : 2;
			unsigned ERASE : 1;
			unsigned : 6;
			unsigned WRERR : 1;
			unsigned WREN : 1;
			unsigned WR : 1;
		};
		struct {
			unsigned NVMOP0 : 1;
			unsigned NVMOP1 : 1;
			unsigned NVMOP2 : 1;
			unsigned NVMOP3 : 1;
		};
	};
} NVMCONBITS;
 volatile NVMCONBITS NVMCONbits ;

 volatile unsigned int  NVMKEY ;
 volatile unsigned int  PMD1 ;
typedef struct tagPMD1BITS {
	unsigned AD1MD : 1;
	unsigned C1MD : 1;
	unsigned : 1;
	unsigned SPI1MD : 1;
	unsigned SPI2MD : 1;
	unsigned U1MD : 1;
	unsigned U2MD : 1;
	unsigned I2C1MD : 1;
	unsigned : 1;
	unsigned PWM1MD : 1;
	unsigned QEI1MD : 1;
	unsigned T1MD : 1;
	unsigned T2MD : 1;
	unsigned T3MD : 1;
	unsigned T4MD : 1;
	unsigned T5MD : 1;
} PMD1BITS;
 volatile PMD1BITS PMD1bits ;

 volatile unsigned int  PMD2 ;
typedef struct tagPMD2BITS {
	unsigned OC1MD : 1;
	unsigned OC2MD : 1;
	unsigned OC3MD : 1;
	unsigned OC4MD : 1;
	unsigned : 4;
	unsigned IC1MD : 1;
	unsigned IC2MD : 1;
	unsigned : 4;
	unsigned IC7MD : 1;
	unsigned IC8MD : 1;
} PMD2BITS;
 volatile PMD2BITS PMD2bits ;

 volatile unsigned int  PMD3 ;
typedef struct tagPMD3BITS {
	unsigned : 4;
	unsigned PWM2MD : 1;
	unsigned QEI2MD : 1;
	unsigned DAC1MD : 1;
	unsigned CRCMD : 1;
	unsigned PMPMD : 1;
	unsigned RTCCMD : 1;
	unsigned CMPMD : 1;
} PMD3BITS;
 volatile PMD3BITS PMD3bits ;



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* SR */
#define __C SRbits.C
#define __Z SRbits.Z
#define __OV SRbits.OV
#define __N SRbits.N
#define __RA SRbits.RA
#define __IPL SRbits.IPL
#define __DC SRbits.DC
#define __DA SRbits.DA
#define __SAB SRbits.SAB
#define __OAB SRbits.OAB
#define __SB SRbits.SB
#define __SA SRbits.SA
#define __OB SRbits.OB
#define __OA SRbits.OA
#define __IPL0 SRbits.IPL0
#define __IPL1 SRbits.IPL1
#define __IPL2 SRbits.IPL2

/* CORCON */
#define __IF CORCONbits.IF
#define __RND CORCONbits.RND
#define __PSV CORCONbits.PSV
#define __IPL3 CORCONbits.IPL3
#define __ACCSAT CORCONbits.ACCSAT
#define __SATDW CORCONbits.SATDW
#define __SATB CORCONbits.SATB
#define __SATA CORCONbits.SATA
#define __DL CORCONbits.DL
#define __EDT CORCONbits.EDT
#define __US CORCONbits.US
#define __DL0 CORCONbits.DL0
#define __DL1 CORCONbits.DL1
#define __DL2 CORCONbits.DL2

/* MODCON */
#define __XWM MODCONbits.XWM
#define __YWM MODCONbits.YWM
#define __BWM MODCONbits.BWM
#define __YMODEN MODCONbits.YMODEN
#define __XMODEN MODCONbits.XMODEN
#define __XWM0 MODCONbits.XWM0
#define __XWM1 MODCONbits.XWM1
#define __XWM2 MODCONbits.XWM2
#define __XWM3 MODCONbits.XWM3
#define __YWM0 MODCONbits.YWM0
#define __YWM1 MODCONbits.YWM1
#define __YWM2 MODCONbits.YWM2
#define __YWM3 MODCONbits.YWM3
#define __BWM0 MODCONbits.BWM0
#define __BWM1 MODCONbits.BWM1
#define __BWM2 MODCONbits.BWM2
#define __BWM3 MODCONbits.BWM3

/* XBREV */
#define __XB XBREVbits.XB
#define __BREN XBREVbits.BREN
#define __XB0 XBREVbits.XB0
#define __XB1 XBREVbits.XB1
#define __XB2 XBREVbits.XB2
#define __XB3 XBREVbits.XB3
#define __XB4 XBREVbits.XB4
#define __XB5 XBREVbits.XB5
#define __XB6 XBREVbits.XB6
#define __XB7 XBREVbits.XB7
#define __XB8 XBREVbits.XB8
#define __XB9 XBREVbits.XB9
#define __XB10 XBREVbits.XB10
#define __XB11 XBREVbits.XB11
#define __XB12 XBREVbits.XB12
#define __XB13 XBREVbits.XB13
#define __XB14 XBREVbits.XB14

/* CNEN1 */
#define __CN0IE CNEN1bits.CN0IE
#define __CN1IE CNEN1bits.CN1IE
#define __CN2IE CNEN1bits.CN2IE
#define __CN3IE CNEN1bits.CN3IE
#define __CN4IE CNEN1bits.CN4IE
#define __CN5IE CNEN1bits.CN5IE
#define __CN6IE CNEN1bits.CN6IE
#define __CN7IE CNEN1bits.CN7IE
#define __CN8IE CNEN1bits.CN8IE
#define __CN9IE CNEN1bits.CN9IE
#define __CN10IE CNEN1bits.CN10IE
#define __CN11IE CNEN1bits.CN11IE
#define __CN12IE CNEN1bits.CN12IE
#define __CN13IE CNEN1bits.CN13IE
#define __CN14IE CNEN1bits.CN14IE
#define __CN15IE CNEN1bits.CN15IE

/* CNEN2 */
#define __CN16IE CNEN2bits.CN16IE
#define __CN17IE CNEN2bits.CN17IE
#define __CN18IE CNEN2bits.CN18IE
#define __CN19IE CNEN2bits.CN19IE
#define __CN20IE CNEN2bits.CN20IE
#define __CN21IE CNEN2bits.CN21IE
#define __CN22IE CNEN2bits.CN22IE
#define __CN23IE CNEN2bits.CN23IE
#define __CN24IE CNEN2bits.CN24IE
#define __CN25IE CNEN2bits.CN25IE
#define __CN26IE CNEN2bits.CN26IE
#define __CN27IE CNEN2bits.CN27IE
#define __CN28IE CNEN2bits.CN28IE
#define __CN29IE CNEN2bits.CN29IE
#define __CN30IE CNEN2bits.CN30IE

/* CNPU1 */
#define __CN0PUE CNPU1bits.CN0PUE
#define __CN1PUE CNPU1bits.CN1PUE
#define __CN2PUE CNPU1bits.CN2PUE
#define __CN3PUE CNPU1bits.CN3PUE
#define __CN4PUE CNPU1bits.CN4PUE
#define __CN5PUE CNPU1bits.CN5PUE
#define __CN6PUE CNPU1bits.CN6PUE
#define __CN7PUE CNPU1bits.CN7PUE
#define __CN8PUE CNPU1bits.CN8PUE
#define __CN9PUE CNPU1bits.CN9PUE
#define __CN10PUE CNPU1bits.CN10PUE
#define __CN11PUE CNPU1bits.CN11PUE
#define __CN12PUE CNPU1bits.CN12PUE
#define __CN13PUE CNPU1bits.CN13PUE
#define __CN14PUE CNPU1bits.CN14PUE
#define __CN15PUE CNPU1bits.CN15PUE

/* CNPU2 */
#define __CN16PUE CNPU2bits.CN16PUE
#define __CN17PUE CNPU2bits.CN17PUE
#define __CN18PUE CNPU2bits.CN18PUE
#define __CN19PUE CNPU2bits.CN19PUE
#define __CN20PUE CNPU2bits.CN20PUE
#define __CN21PUE CNPU2bits.CN21PUE
#define __CN22PUE CNPU2bits.CN22PUE
#define __CN23PUE CNPU2bits.CN23PUE
#define __CN24PUE CNPU2bits.CN24PUE
#define __CN25PUE CNPU2bits.CN25PUE
#define __CN26PUE CNPU2bits.CN26PUE
#define __CN27PUE CNPU2bits.CN27PUE
#define __CN28PUE CNPU2bits.CN28PUE
#define __CN29PUE CNPU2bits.CN29PUE
#define __CN30PUE CNPU2bits.CN30PUE

/* INTCON1 */
#define __OSCFAIL INTCON1bits.OSCFAIL
#define __STKERR INTCON1bits.STKERR
#define __ADDRERR INTCON1bits.ADDRERR
#define __MATHERR INTCON1bits.MATHERR
#define __DMACERR INTCON1bits.DMACERR
#define __DIV0ERR INTCON1bits.DIV0ERR
#define __SFTACERR INTCON1bits.SFTACERR
#define __COVTE INTCON1bits.COVTE
#define __OVBTE INTCON1bits.OVBTE
#define __OVATE INTCON1bits.OVATE
#define __COVBERR INTCON1bits.COVBERR
#define __COVAERR INTCON1bits.COVAERR
#define __OVBERR INTCON1bits.OVBERR
#define __OVAERR INTCON1bits.OVAERR
#define __NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define __INT0EP INTCON2bits.INT0EP
#define __INT1EP INTCON2bits.INT1EP
#define __INT2EP INTCON2bits.INT2EP
#define __DISI INTCON2bits.DISI
#define __ALTIVT INTCON2bits.ALTIVT

/* IFS0 */
#define __INT0IF IFS0bits.INT0IF
#define __IC1IF IFS0bits.IC1IF
#define __OC1IF IFS0bits.OC1IF
#define __T1IF IFS0bits.T1IF
#define __DMA0IF IFS0bits.DMA0IF
#define __IC2IF IFS0bits.IC2IF
#define __OC2IF IFS0bits.OC2IF
#define __T2IF IFS0bits.T2IF
#define __T3IF IFS0bits.T3IF
#define __SPI1EIF IFS0bits.SPI1EIF
#define __SPI1IF IFS0bits.SPI1IF
#define __U1RXIF IFS0bits.U1RXIF
#define __U1TXIF IFS0bits.U1TXIF
#define __AD1IF IFS0bits.AD1IF
#define __DMA1IF IFS0bits.DMA1IF

/* IFS1 */
#define __SI2C1IF IFS1bits.SI2C1IF
#define __MI2C1IF IFS1bits.MI2C1IF
#define __CMIF IFS1bits.CMIF
#define __CNIF IFS1bits.CNIF
#define __INT1IF IFS1bits.INT1IF
#define __IC7IF IFS1bits.IC7IF
#define __IC8IF IFS1bits.IC8IF
#define __DMA2IF IFS1bits.DMA2IF
#define __OC3IF IFS1bits.OC3IF
#define __OC4IF IFS1bits.OC4IF
#define __T4IF IFS1bits.T4IF
#define __T5IF IFS1bits.T5IF
#define __INT2IF IFS1bits.INT2IF
#define __U2RXIF IFS1bits.U2RXIF
#define __U2TXIF IFS1bits.U2TXIF
#define __SI2CIF IFS1bits.SI2CIF

/* IFS2 */
#define __SPI2EIF IFS2bits.SPI2EIF
#define __SPI2IF IFS2bits.SPI2IF
#define __C1RXIF IFS2bits.C1RXIF
#define __C1IF IFS2bits.C1IF
#define __DMA3IF IFS2bits.DMA3IF
#define __PMPIF IFS2bits.PMPIF
#define __DMA4IF IFS2bits.DMA4IF

/* IFS3 */
#define __PWM1IF IFS3bits.PWM1IF
#define __QEI1IF IFS3bits.QEI1IF
#define __DMA5IF IFS3bits.DMA5IF
#define __RTCIF IFS3bits.RTCIF
#define __FLTA1IF IFS3bits.FLTA1IF

/* IFS4 */
#define __U1EIF IFS4bits.U1EIF
#define __U2EIF IFS4bits.U2EIF
#define __CRCIF IFS4bits.CRCIF
#define __DMA6IF IFS4bits.DMA6IF
#define __DMA7IF IFS4bits.DMA7IF
#define __C1TXIF IFS4bits.C1TXIF
#define __PWM2IF IFS4bits.PWM2IF
#define __FLTA2IF IFS4bits.FLTA2IF
#define __QEI2IF IFS4bits.QEI2IF
#define __DAC1RIF IFS4bits.DAC1RIF
#define __DAC1LIF IFS4bits.DAC1LIF

/* IEC0 */
#define __INT0IE IEC0bits.INT0IE
#define __IC1IE IEC0bits.IC1IE
#define __OC1IE IEC0bits.OC1IE
#define __T1IE IEC0bits.T1IE
#define __DMA0IE IEC0bits.DMA0IE
#define __IC2IE IEC0bits.IC2IE
#define __OC2IE IEC0bits.OC2IE
#define __T2IE IEC0bits.T2IE
#define __T3IE IEC0bits.T3IE
#define __SPI1EIE IEC0bits.SPI1EIE
#define __SPI1IE IEC0bits.SPI1IE
#define __U1RXIE IEC0bits.U1RXIE
#define __U1TXIE IEC0bits.U1TXIE
#define __AD1IE IEC0bits.AD1IE
#define __DMA1IE IEC0bits.DMA1IE

/* IEC1 */
#define __SI2C1IE IEC1bits.SI2C1IE
#define __MI2C1IE IEC1bits.MI2C1IE
#define __CMIE IEC1bits.CMIE
#define __CNIE IEC1bits.CNIE
#define __INT1IE IEC1bits.INT1IE
#define __IC7IE IEC1bits.IC7IE
#define __IC8IE IEC1bits.IC8IE
#define __DMA2IE IEC1bits.DMA2IE
#define __OC3IE IEC1bits.OC3IE
#define __OC4IE IEC1bits.OC4IE
#define __T4IE IEC1bits.T4IE
#define __T5IE IEC1bits.T5IE
#define __INT2IE IEC1bits.INT2IE
#define __U2RXIE IEC1bits.U2RXIE
#define __U2TXIE IEC1bits.U2TXIE
#define __SI2CIE IEC1bits.SI2CIE

/* IEC2 */
#define __SPI2EIE IEC2bits.SPI2EIE
#define __SPI2IE IEC2bits.SPI2IE
#define __C1RXIE IEC2bits.C1RXIE
#define __C1IE IEC2bits.C1IE
#define __DMA3IE IEC2bits.DMA3IE
#define __PMPIE IEC2bits.PMPIE
#define __DMA4IE IEC2bits.DMA4IE

/* IEC3 */
#define __PWM1IE IEC3bits.PWM1IE
#define __QEI1IE IEC3bits.QEI1IE
#define __DMA5IE IEC3bits.DMA5IE
#define __RTCIE IEC3bits.RTCIE
#define __FLTA1IE IEC3bits.FLTA1IE

/* IEC4 */
#define __U1EIE IEC4bits.U1EIE
#define __U2EIE IEC4bits.U2EIE
#define __CRCIE IEC4bits.CRCIE
#define __DMA6IE IEC4bits.DMA6IE
#define __DMA7IE IEC4bits.DMA7IE
#define __C1TXIE IEC4bits.C1TXIE
#define __PWM2IE IEC4bits.PWM2IE
#define __FLTA2IE IEC4bits.FLTA2IE
#define __QEI2IE IEC4bits.QEI2IE
#define __DAC1RIE IEC4bits.DAC1RIE
#define __DAC1LIE IEC4bits.DAC1LIE

/* IPC0 */
#define __INT0IP IPC0bits.INT0IP
#define __IC1IP IPC0bits.IC1IP
#define __OC1IP IPC0bits.OC1IP
#define __T1IP IPC0bits.T1IP
#define __INT0IP0 IPC0bits.INT0IP0
#define __INT0IP1 IPC0bits.INT0IP1
#define __INT0IP2 IPC0bits.INT0IP2
#define __IC1IP0 IPC0bits.IC1IP0
#define __IC1IP1 IPC0bits.IC1IP1
#define __IC1IP2 IPC0bits.IC1IP2
#define __OC1IP0 IPC0bits.OC1IP0
#define __OC1IP1 IPC0bits.OC1IP1
#define __OC1IP2 IPC0bits.OC1IP2
#define __T1IP0 IPC0bits.T1IP0
#define __T1IP1 IPC0bits.T1IP1
#define __T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define __DMA0IP IPC1bits.DMA0IP
#define __IC2IP IPC1bits.IC2IP
#define __OC2IP IPC1bits.OC2IP
#define __T2IP IPC1bits.T2IP
#define __DMA0IP0 IPC1bits.DMA0IP0
#define __DMA0IP1 IPC1bits.DMA0IP1
#define __DMA0IP2 IPC1bits.DMA0IP2
#define __IC2IP0 IPC1bits.IC2IP0
#define __IC2IP1 IPC1bits.IC2IP1
#define __IC2IP2 IPC1bits.IC2IP2
#define __OC2IP0 IPC1bits.OC2IP0
#define __OC2IP1 IPC1bits.OC2IP1
#define __OC2IP2 IPC1bits.OC2IP2
#define __T2IP0 IPC1bits.T2IP0
#define __T2IP1 IPC1bits.T2IP1
#define __T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define __T3IP IPC2bits.T3IP
#define __SPI1EIP IPC2bits.SPI1EIP
#define __SPI1IP IPC2bits.SPI1IP
#define __U1RXIP IPC2bits.U1RXIP
#define __T3IP0 IPC2bits.T3IP0
#define __T3IP1 IPC2bits.T3IP1
#define __T3IP2 IPC2bits.T3IP2
#define __SPI1EIP0 IPC2bits.SPI1EIP0
#define __SPI1EIP1 IPC2bits.SPI1EIP1
#define __SPI1EIP2 IPC2bits.SPI1EIP2
#define __SPI1IP0 IPC2bits.SPI1IP0
#define __SPI1IP1 IPC2bits.SPI1IP1
#define __SPI1IP2 IPC2bits.SPI1IP2
#define __U1RXIP0 IPC2bits.U1RXIP0
#define __U1RXIP1 IPC2bits.U1RXIP1
#define __U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define __U1TXIP IPC3bits.U1TXIP
#define __AD1IP IPC3bits.AD1IP
#define __DMA1IP IPC3bits.DMA1IP
#define __U1TXIP0 IPC3bits.U1TXIP0
#define __U1TXIP1 IPC3bits.U1TXIP1
#define __U1TXIP2 IPC3bits.U1TXIP2
#define __AD1IP0 IPC3bits.AD1IP0
#define __AD1IP1 IPC3bits.AD1IP1
#define __AD1IP2 IPC3bits.AD1IP2
#define __DMA1IP0 IPC3bits.DMA1IP0
#define __DMA1IP1 IPC3bits.DMA1IP1
#define __DMA1IP2 IPC3bits.DMA1IP2

/* IPC4 */
#define __SI2C1IP IPC4bits.SI2C1IP
#define __MI2C1IP IPC4bits.MI2C1IP
#define __CMIP IPC4bits.CMIP
#define __CNIP IPC4bits.CNIP
#define __SI2C1IP0 IPC4bits.SI2C1IP0
#define __SI2C1IP1 IPC4bits.SI2C1IP1
#define __SI2C1IP2 IPC4bits.SI2C1IP2
#define __MI2C1IP0 IPC4bits.MI2C1IP0
#define __MI2C1IP1 IPC4bits.MI2C1IP1
#define __MI2C1IP2 IPC4bits.MI2C1IP2
#define __CMIP0 IPC4bits.CMIP0
#define __CMIP1 IPC4bits.CMIP1
#define __CMIP2 IPC4bits.CMIP2
#define __CNIP0 IPC4bits.CNIP0
#define __CNIP1 IPC4bits.CNIP1
#define __CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define __INT1IP IPC5bits.INT1IP
#define __IC7IP IPC5bits.IC7IP
#define __IC8IP IPC5bits.IC8IP
#define __INT1IP0 IPC5bits.INT1IP0
#define __INT1IP1 IPC5bits.INT1IP1
#define __INT1IP2 IPC5bits.INT1IP2
#define __IC7IP0 IPC5bits.IC7IP0
#define __IC7IP1 IPC5bits.IC7IP1
#define __IC7IP2 IPC5bits.IC7IP2
#define __IC8IP0 IPC5bits.IC8IP0
#define __IC8IP1 IPC5bits.IC8IP1
#define __IC8IP2 IPC5bits.IC8IP2

/* IPC6 */
#define __DMA2IP IPC6bits.DMA2IP
#define __OC3IP IPC6bits.OC3IP
#define __OC4IP IPC6bits.OC4IP
#define __T4IP IPC6bits.T4IP
#define __DMA2IP0 IPC6bits.DMA2IP0
#define __DMA2IP1 IPC6bits.DMA2IP1
#define __DMA2IP2 IPC6bits.DMA2IP2
#define __OC3IP0 IPC6bits.OC3IP0
#define __OC3IP1 IPC6bits.OC3IP1
#define __OC3IP2 IPC6bits.OC3IP2
#define __OC4IP0 IPC6bits.OC4IP0
#define __OC4IP1 IPC6bits.OC4IP1
#define __OC4IP2 IPC6bits.OC4IP2
#define __T4IP0 IPC6bits.T4IP0
#define __T4IP1 IPC6bits.T4IP1
#define __T4IP2 IPC6bits.T4IP2

/* IPC7 */
#define __T5IP IPC7bits.T5IP
#define __INT2IP IPC7bits.INT2IP
#define __U2RXIP IPC7bits.U2RXIP
#define __U2TXIP IPC7bits.U2TXIP
#define __T5IP0 IPC7bits.T5IP0
#define __T5IP1 IPC7bits.T5IP1
#define __T5IP2 IPC7bits.T5IP2
#define __INT2IP0 IPC7bits.INT2IP0
#define __INT2IP1 IPC7bits.INT2IP1
#define __INT2IP2 IPC7bits.INT2IP2
#define __U2RXIP0 IPC7bits.U2RXIP0
#define __U2RXIP1 IPC7bits.U2RXIP1
#define __U2RXIP2 IPC7bits.U2RXIP2
#define __U2TXIP0 IPC7bits.U2TXIP0
#define __U2TXIP1 IPC7bits.U2TXIP1
#define __U2TXIP2 IPC7bits.U2TXIP2

/* IPC8 */
#define __SPI2EIP IPC8bits.SPI2EIP
#define __SPI2IP IPC8bits.SPI2IP
#define __C1RXIP IPC8bits.C1RXIP
#define __C1IP IPC8bits.C1IP
#define __SPI2EIP0 IPC8bits.SPI2EIP0
#define __SPI2EIP1 IPC8bits.SPI2EIP1
#define __SPI2EIP2 IPC8bits.SPI2EIP2
#define __SPI2IP0 IPC8bits.SPI2IP0
#define __SPI2IP1 IPC8bits.SPI2IP1
#define __SPI2IP2 IPC8bits.SPI2IP2
#define __C1RXIP0 IPC8bits.C1RXIP0
#define __C1RXIP1 IPC8bits.C1RXIP1
#define __C1RXIP2 IPC8bits.C1RXIP2
#define __C1IP0 IPC8bits.C1IP0
#define __C1IP1 IPC8bits.C1IP1
#define __C1IP2 IPC8bits.C1IP2

/* IPC9 */
#define __DMA3IP IPC9bits.DMA3IP
#define __DMA3IP0 IPC9bits.DMA3IP0
#define __DMA3IP1 IPC9bits.DMA3IP1
#define __DMA3IP2 IPC9bits.DMA3IP2

/* IPC11 */
#define __PMPIP IPC11bits.PMPIP
#define __DMA4IP IPC11bits.DMA4IP
#define __PMPIP0 IPC11bits.PMPIP0
#define __PMPIP1 IPC11bits.PMPIP1
#define __PMPIP2 IPC11bits.PMPIP2
#define __DMA4IP0 IPC11bits.DMA4IP0
#define __DMA4IP1 IPC11bits.DMA4IP1
#define __DMA4IP2 IPC11bits.DMA4IP2

/* IPC14 */
#define __PWM1IP IPC14bits.PWM1IP
#define __QEI1IP IPC14bits.QEI1IP
#define __PWM1IP0 IPC14bits.PWM1IP0
#define __PWM1IP1 IPC14bits.PWM1IP1
#define __PWM1IP2 IPC14bits.PWM1IP2
#define __QEI1IP0 IPC14bits.QEI1IP0
#define __QEI1IP1 IPC14bits.QEI1IP1
#define __QEI1IP2 IPC14bits.QEI1IP2

/* IPC15 */
#define __DMA5IP IPC15bits.DMA5IP
#define __RTCIP IPC15bits.RTCIP
#define __FLTA1IP IPC15bits.FLTA1IP
#define __DMA5IP0 IPC15bits.DMA5IP0
#define __DMA5IP1 IPC15bits.DMA5IP1
#define __DMA5IP2 IPC15bits.DMA5IP2
#define __RTCIP0 IPC15bits.RTCIP0
#define __RTCIP1 IPC15bits.RTCIP1
#define __RTCIP2 IPC15bits.RTCIP2
#define __FLTA1IP0 IPC15bits.FLTA1IP0
#define __FLTA1IP1 IPC15bits.FLTA1IP1
#define __FLTA1IP2 IPC15bits.FLTA1IP2

/* IPC16 */
#define __U1EIP IPC16bits.U1EIP
#define __U2EIP IPC16bits.U2EIP
#define __CRCIP IPC16bits.CRCIP
#define __U1EIP0 IPC16bits.U1EIP0
#define __U1EIP1 IPC16bits.U1EIP1
#define __U1EIP2 IPC16bits.U1EIP2
#define __U2EIP0 IPC16bits.U2EIP0
#define __U2EIP1 IPC16bits.U2EIP1
#define __U2EIP2 IPC16bits.U2EIP2
#define __CRCIP0 IPC16bits.CRCIP0
#define __CRCIP1 IPC16bits.CRCIP1
#define __CRCIP2 IPC16bits.CRCIP2

/* IPC17 */
#define __DMA6IP IPC17bits.DMA6IP
#define __DMA7IP IPC17bits.DMA7IP
#define __C1TXIP IPC17bits.C1TXIP
#define __DMA6IP0 IPC17bits.DMA6IP0
#define __DMA6IP1 IPC17bits.DMA6IP1
#define __DMA6IP2 IPC17bits.DMA6IP2
#define __DMA7IP0 IPC17bits.DMA7IP0
#define __DMA7IP1 IPC17bits.DMA7IP1
#define __DMA7IP2 IPC17bits.DMA7IP2
#define __C1TXIP0 IPC17bits.C1TXIP0
#define __C1TXIP1 IPC17bits.C1TXIP1
#define __C1TXIP2 IPC17bits.C1TXIP2

/* IPC18 */
#define __PWM2IP IPC18bits.PWM2IP
#define __FLTA2IP IPC18bits.FLTA2IP
#define __QEI2IP IPC18bits.QEI2IP
#define __PWM2IP0 IPC18bits.PWM2IP0
#define __PWM2IP1 IPC18bits.PWM2IP1
#define __PWM2IP2 IPC18bits.PWM2IP2
#define __FLTA2IP0 IPC18bits.FLTA2IP0
#define __FLTA2IP1 IPC18bits.FLTA2IP1
#define __FLTA2IP2 IPC18bits.FLTA2IP2
#define __QEI2IP0 IPC18bits.QEI2IP0
#define __QEI2IP1 IPC18bits.QEI2IP1
#define __QEI2IP2 IPC18bits.QEI2IP2

/* IPC19 */
#define __DAC1RIP IPC19bits.DAC1RIP
#define __DAC1LIP IPC19bits.DAC1LIP
#define __DAC1RIP0 IPC19bits.DAC1RIP0
#define __DAC1RIP1 IPC19bits.DAC1RIP1
#define __DAC1RIP2 IPC19bits.DAC1RIP2
#define __DAC1LIP0 IPC19bits.DAC1LIP0
#define __DAC1LIP1 IPC19bits.DAC1LIP1
#define __DAC1LIP2 IPC19bits.DAC1LIP2

/* INTTREG */
#define __VECNUM INTTREGbits.VECNUM
#define __ILR INTTREGbits.ILR
#define __VECNUM0 INTTREGbits.VECNUM0
#define __VECNUM1 INTTREGbits.VECNUM1
#define __VECNUM2 INTTREGbits.VECNUM2
#define __VECNUM3 INTTREGbits.VECNUM3
#define __VECNUM4 INTTREGbits.VECNUM4
#define __VECNUM5 INTTREGbits.VECNUM5
#define __VECNUM6 INTTREGbits.VECNUM6
#define __ILR0 INTTREGbits.ILR0
#define __ILR1 INTTREGbits.ILR1
#define __ILR2 INTTREGbits.ILR2
#define __ILR3 INTTREGbits.ILR3

/* T1CON */
#define __TCS T1CONbits.TCS
#define __TSYNC T1CONbits.TSYNC
#define __TCKPS T1CONbits.TCKPS
#define __TGATE T1CONbits.TGATE
#define __TSIDL T1CONbits.TSIDL
#define __TON T1CONbits.TON
#define __TCKPS0 T1CONbits.TCKPS0
#define __TCKPS1 T1CONbits.TCKPS1

/* T2CON */
/* Bitname __TCS cannot be defined because it is used by more than one SFR */
/* Bitname __T32 cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname __TGATE cannot be defined because it is used by more than one SFR */
/* Bitname __TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __TON cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS1 cannot be defined because it is used by more than one SFR */

/* T3CON */
/* Bitname __TCS cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname __TGATE cannot be defined because it is used by more than one SFR */
/* Bitname __TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __TON cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS1 cannot be defined because it is used by more than one SFR */

/* T4CON */
/* Bitname __TCS cannot be defined because it is used by more than one SFR */
/* Bitname __T32 cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname __TGATE cannot be defined because it is used by more than one SFR */
/* Bitname __TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __TON cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS1 cannot be defined because it is used by more than one SFR */

/* T5CON */
/* Bitname __TCS cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname __TGATE cannot be defined because it is used by more than one SFR */
/* Bitname __TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __TON cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __TCKPS1 cannot be defined because it is used by more than one SFR */

/* IC1CON */
#define __ICM IC1CONbits.ICM
#define __ICBNE IC1CONbits.ICBNE
#define __ICOV IC1CONbits.ICOV
#define __ICI IC1CONbits.ICI
#define __ICTMR IC1CONbits.ICTMR
#define __ICSIDL IC1CONbits.ICSIDL
#define __ICM0 IC1CONbits.ICM0
#define __ICM1 IC1CONbits.ICM1
#define __ICM2 IC1CONbits.ICM2
#define __ICI0 IC1CONbits.ICI0
#define __ICI1 IC1CONbits.ICI1

/* IC2CON */
/* Bitname __ICM cannot be defined because it is used by more than one SFR */
/* Bitname __ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname __ICOV cannot be defined because it is used by more than one SFR */
/* Bitname __ICI cannot be defined because it is used by more than one SFR */
/* Bitname __ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname __ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname __ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname __ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname __ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname __ICI1 cannot be defined because it is used by more than one SFR */

/* IC7CON */
/* Bitname __ICM cannot be defined because it is used by more than one SFR */
/* Bitname __ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname __ICOV cannot be defined because it is used by more than one SFR */
/* Bitname __ICI cannot be defined because it is used by more than one SFR */
/* Bitname __ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname __ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname __ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname __ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname __ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname __ICI1 cannot be defined because it is used by more than one SFR */

/* IC8CON */
/* Bitname __ICM cannot be defined because it is used by more than one SFR */
/* Bitname __ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname __ICOV cannot be defined because it is used by more than one SFR */
/* Bitname __ICI cannot be defined because it is used by more than one SFR */
/* Bitname __ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname __ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname __ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname __ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname __ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname __ICI1 cannot be defined because it is used by more than one SFR */

/* OC1CON */
#define __OCM OC1CONbits.OCM
#define __OCTSEL OC1CONbits.OCTSEL
#define __OCFLT OC1CONbits.OCFLT
#define __OCSIDL OC1CONbits.OCSIDL
#define __OCM0 OC1CONbits.OCM0
#define __OCM1 OC1CONbits.OCM1
#define __OCM2 OC1CONbits.OCM2

/* OC2CON */
/* Bitname __OCM cannot be defined because it is used by more than one SFR */
/* Bitname __OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname __OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname __OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname __OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname __OCM2 cannot be defined because it is used by more than one SFR */

/* OC3CON */
/* Bitname __OCM cannot be defined because it is used by more than one SFR */
/* Bitname __OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname __OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname __OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname __OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname __OCM2 cannot be defined because it is used by more than one SFR */

/* OC4CON */
/* Bitname __OCM cannot be defined because it is used by more than one SFR */
/* Bitname __OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname __OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname __OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname __OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname __OCM2 cannot be defined because it is used by more than one SFR */

/* P1TCON */
#define __PTMOD P1TCONbits.PTMOD
#define __PTCKPS P1TCONbits.PTCKPS
#define __PTOPS P1TCONbits.PTOPS
#define __PTSIDL P1TCONbits.PTSIDL
/* Bitname __PTEN cannot be defined because it is used by more than one SFR */
#define __PTMOD0 P1TCONbits.PTMOD0
#define __PTMOD1 P1TCONbits.PTMOD1
#define __PTCKPS0 P1TCONbits.PTCKPS0
#define __PTCKPS1 P1TCONbits.PTCKPS1
#define __PTOPS0 P1TCONbits.PTOPS0
#define __PTOPS1 P1TCONbits.PTOPS1
#define __PTOPS2 P1TCONbits.PTOPS2
#define __PTOPS3 P1TCONbits.PTOPS3

/* P1TMR */
#define __PTMR P1TMRbits.PTMR
#define __PTDIR P1TMRbits.PTDIR

/* P1TPER */
#define __PTPER P1TPERbits.PTPER

/* P1SECMP */
#define __SEVTCMP P1SECMPbits.SEVTCMP
#define __SEVTDIR P1SECMPbits.SEVTDIR

/* PWM1CON1 */
#define __PEN1L PWM1CON1bits.PEN1L
#define __PEN2L PWM1CON1bits.PEN2L
#define __PEN3L PWM1CON1bits.PEN3L
#define __PEN1H PWM1CON1bits.PEN1H
#define __PEN2H PWM1CON1bits.PEN2H
#define __PEN3H PWM1CON1bits.PEN3H
#define __PMOD1 PWM1CON1bits.PMOD1
#define __PMOD2 PWM1CON1bits.PMOD2
#define __PMOD3 PWM1CON1bits.PMOD3

/* PWM1CON2 */
#define __UDIS PWM1CON2bits.UDIS
#define __OSYNC PWM1CON2bits.OSYNC
#define __IUE PWM1CON2bits.IUE
#define __SEVOPS PWM1CON2bits.SEVOPS
#define __SEVOPS0 PWM1CON2bits.SEVOPS0
#define __SEVOPS1 PWM1CON2bits.SEVOPS1
#define __SEVOPS2 PWM1CON2bits.SEVOPS2
#define __SEVOPS3 PWM1CON2bits.SEVOPS3

/* DTCON1 */
/* Bitname __DTA cannot be defined because it is used by more than one SFR */
/* Bitname __DTAPS cannot be defined because it is used by more than one SFR */
/* Bitname __DTB cannot be defined because it is used by more than one SFR */
/* Bitname __DTBPS cannot be defined because it is used by more than one SFR */
/* Bitname __DTA0 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA1 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA2 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA3 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA4 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA5 cannot be defined because it is used by more than one SFR */
/* Bitname __DTAPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __DTAPS1 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB0 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB1 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB2 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB3 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB4 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB5 cannot be defined because it is used by more than one SFR */
/* Bitname __DTBPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __DTBPS1 cannot be defined because it is used by more than one SFR */

/* DTCON2 */
/* Bitname __DTS1I cannot be defined because it is used by more than one SFR */
/* Bitname __DTS1A cannot be defined because it is used by more than one SFR */
#define __DTS2I DTCON2bits.DTS2I
#define __DTS2A DTCON2bits.DTS2A
#define __DTS3I DTCON2bits.DTS3I
#define __DTS3A DTCON2bits.DTS3A

/* FLTACON */
/* Bitname __FAEN1 cannot be defined because it is used by more than one SFR */
#define __FAEN2 FLTACONbits.FAEN2
#define __FAEN3 FLTACONbits.FAEN3
/* Bitname __FLTAM cannot be defined because it is used by more than one SFR */
/* Bitname __FAOV1L cannot be defined because it is used by more than one SFR */
/* Bitname __FAOV1H cannot be defined because it is used by more than one SFR */
#define __FAOV2L FLTACONbits.FAOV2L
#define __FAOV2H FLTACONbits.FAOV2H
#define __FAOV3L FLTACONbits.FAOV3L
#define __FAOV3H FLTACONbits.FAOV3H

/* OVDCON */
/* Bitname __POUT1L cannot be defined because it is used by more than one SFR */
/* Bitname __POUT1H cannot be defined because it is used by more than one SFR */
#define __POUT2L OVDCONbits.POUT2L
#define __POUT2H OVDCONbits.POUT2H
#define __POUT3L OVDCONbits.POUT3L
#define __POUT3H OVDCONbits.POUT3H
/* Bitname __POVD1L cannot be defined because it is used by more than one SFR */
/* Bitname __POVD1H cannot be defined because it is used by more than one SFR */
#define __POVD2L OVDCONbits.POVD2L
#define __POVD2H OVDCONbits.POVD2H
#define __POVD3L OVDCONbits.POVD3L
#define __POVD3H OVDCONbits.POVD3H

/* QEI1CON */
#define __UPDN__SRC QEI1CONbits.UPDN__SRC
#define __TQCS QEI1CONbits.TQCS
#define __POSRES QEI1CONbits.POSRES
#define __TQCKPS QEI1CONbits.TQCKPS
#define __TQGATE QEI1CONbits.TQGATE
#define __PCDOUT QEI1CONbits.PCDOUT
#define __SWPAB QEI1CONbits.SWPAB
#define __QEIM QEI1CONbits.QEIM
#define __UPDN QEI1CONbits.UPDN
#define __INDX QEI1CONbits.INDX
#define __QEISIDL QEI1CONbits.QEISIDL
#define __CNTERR QEI1CONbits.CNTERR
#define __TQCKPS0 QEI1CONbits.TQCKPS0
#define __TQCKPS1 QEI1CONbits.TQCKPS1
#define __QEIM0 QEI1CONbits.QEIM0
#define __QEIM1 QEI1CONbits.QEIM1
#define __QEIM2 QEI1CONbits.QEIM2

/* DFLT1CON */
#define __QECK DFLT1CONbits.QECK
#define __QEOUT DFLT1CONbits.QEOUT
#define __CEID DFLT1CONbits.CEID
#define __IMV DFLT1CONbits.IMV
#define __QECK0 DFLT1CONbits.QECK0
#define __QECK1 DFLT1CONbits.QECK1
#define __QECK2 DFLT1CONbits.QECK2
#define __IMV0 DFLT1CONbits.IMV0
#define __IMV1 DFLT1CONbits.IMV1

/* QEI2CON */
/* Bitname __UPDN__SRC cannot be defined because it is used by more than one SFR */
/* Bitname __TQCS cannot be defined because it is used by more than one SFR */
/* Bitname __POSRES cannot be defined because it is used by more than one SFR */
/* Bitname __TQCKPS cannot be defined because it is used by more than one SFR */
/* Bitname __TQGATE cannot be defined because it is used by more than one SFR */
/* Bitname __PCDOUT cannot be defined because it is used by more than one SFR */
/* Bitname __SWPAB cannot be defined because it is used by more than one SFR */
/* Bitname __QEIM cannot be defined because it is used by more than one SFR */
/* Bitname __UPDN cannot be defined because it is used by more than one SFR */
/* Bitname __INDX cannot be defined because it is used by more than one SFR */
/* Bitname __QEISIDL cannot be defined because it is used by more than one SFR */
/* Bitname __CNTERR cannot be defined because it is used by more than one SFR */
/* Bitname __TQCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __TQCKPS1 cannot be defined because it is used by more than one SFR */
/* Bitname __QEIM0 cannot be defined because it is used by more than one SFR */
/* Bitname __QEIM1 cannot be defined because it is used by more than one SFR */
/* Bitname __QEIM2 cannot be defined because it is used by more than one SFR */

/* DFLT2CON */
/* Bitname __QECK cannot be defined because it is used by more than one SFR */
/* Bitname __QEOUT cannot be defined because it is used by more than one SFR */
/* Bitname __CEID cannot be defined because it is used by more than one SFR */
/* Bitname __IMV cannot be defined because it is used by more than one SFR */
/* Bitname __QECK0 cannot be defined because it is used by more than one SFR */
/* Bitname __QECK1 cannot be defined because it is used by more than one SFR */
/* Bitname __QECK2 cannot be defined because it is used by more than one SFR */
/* Bitname __IMV0 cannot be defined because it is used by more than one SFR */
/* Bitname __IMV1 cannot be defined because it is used by more than one SFR */

/* I2C1CON */
#define __SEN I2C1CONbits.SEN
#define __RSEN I2C1CONbits.RSEN
#define __PEN I2C1CONbits.PEN
#define __RCEN I2C1CONbits.RCEN
#define __ACKEN I2C1CONbits.ACKEN
#define __ACKDT I2C1CONbits.ACKDT
#define __STREN I2C1CONbits.STREN
#define __GCEN I2C1CONbits.GCEN
#define __SMEN I2C1CONbits.SMEN
#define __DISSLW I2C1CONbits.DISSLW
#define __A10M I2C1CONbits.A10M
#define __IPMIEN I2C1CONbits.IPMIEN
#define __SCLREL I2C1CONbits.SCLREL
#define __I2CSIDL I2C1CONbits.I2CSIDL
#define __I2CEN I2C1CONbits.I2CEN

/* I2C1STAT */
#define __TBF I2C1STATbits.TBF
#define __RBF I2C1STATbits.RBF
#define __R__W I2C1STATbits.R__W
#define __S I2C1STATbits.S
#define __P I2C1STATbits.P
#define __D__A I2C1STATbits.D__A
#define __I2COV I2C1STATbits.I2COV
#define __IWCOL I2C1STATbits.IWCOL
#define __ADD10 I2C1STATbits.ADD10
#define __GCSTAT I2C1STATbits.GCSTAT
#define __BCL I2C1STATbits.BCL
#define __TRSTAT I2C1STATbits.TRSTAT
#define __ACKSTAT I2C1STATbits.ACKSTAT

/* U1MODE */
#define __STSEL U1MODEbits.STSEL
#define __PDSEL U1MODEbits.PDSEL
#define __BRGH U1MODEbits.BRGH
#define __URXINV U1MODEbits.URXINV
#define __ABAUD U1MODEbits.ABAUD
#define __LPBACK U1MODEbits.LPBACK
#define __WAKE U1MODEbits.WAKE
#define __UEN U1MODEbits.UEN
#define __RTSMD U1MODEbits.RTSMD
#define __IREN U1MODEbits.IREN
#define __USIDL U1MODEbits.USIDL
#define __UARTEN U1MODEbits.UARTEN
#define __PDSEL0 U1MODEbits.PDSEL0
#define __PDSEL1 U1MODEbits.PDSEL1
#define __UEN0 U1MODEbits.UEN0
#define __UEN1 U1MODEbits.UEN1

/* U1STA */
#define __URXDA U1STAbits.URXDA
#define __OERR U1STAbits.OERR
#define __FERR U1STAbits.FERR
#define __PERR U1STAbits.PERR
#define __RIDLE U1STAbits.RIDLE
#define __ADDEN U1STAbits.ADDEN
#define __URXISEL U1STAbits.URXISEL
#define __TRMT U1STAbits.TRMT
#define __UTXBF U1STAbits.UTXBF
#define __UTXEN U1STAbits.UTXEN
#define __UTXBRK U1STAbits.UTXBRK
#define __UTXISEL0 U1STAbits.UTXISEL0
#define __UTXINV U1STAbits.UTXINV
#define __UTXISEL1 U1STAbits.UTXISEL1
#define __URXISEL0 U1STAbits.URXISEL0
#define __URXISEL1 U1STAbits.URXISEL1

/* U1TXREG */
#define __UTXREG0 U1TXREGbits.UTXREG0
#define __UTXREG1 U1TXREGbits.UTXREG1
#define __UTXREG2 U1TXREGbits.UTXREG2
#define __UTXREG3 U1TXREGbits.UTXREG3
#define __UTXREG4 U1TXREGbits.UTXREG4
#define __UTXREG5 U1TXREGbits.UTXREG5
#define __UTXREG6 U1TXREGbits.UTXREG6
#define __UTXREG7 U1TXREGbits.UTXREG7
#define __UTXREG8 U1TXREGbits.UTXREG8

/* U1RXREG */
#define __URXREG0 U1RXREGbits.URXREG0
#define __URXREG1 U1RXREGbits.URXREG1
#define __URXREG2 U1RXREGbits.URXREG2
#define __URXREG3 U1RXREGbits.URXREG3
#define __URXREG4 U1RXREGbits.URXREG4
#define __URXREG5 U1RXREGbits.URXREG5
#define __URXREG6 U1RXREGbits.URXREG6
#define __URXREG7 U1RXREGbits.URXREG7
#define __URXREG8 U1RXREGbits.URXREG8

/* U2MODE */
/* Bitname __STSEL cannot be defined because it is used by more than one SFR */
/* Bitname __PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname __BRGH cannot be defined because it is used by more than one SFR */
/* Bitname __URXINV cannot be defined because it is used by more than one SFR */
/* Bitname __ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname __LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname __WAKE cannot be defined because it is used by more than one SFR */
/* Bitname __UEN cannot be defined because it is used by more than one SFR */
/* Bitname __RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname __IREN cannot be defined because it is used by more than one SFR */
/* Bitname __USIDL cannot be defined because it is used by more than one SFR */
/* Bitname __UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname __PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname __UEN1 cannot be defined because it is used by more than one SFR */

/* U2STA */
/* Bitname __URXDA cannot be defined because it is used by more than one SFR */
/* Bitname __OERR cannot be defined because it is used by more than one SFR */
/* Bitname __FERR cannot be defined because it is used by more than one SFR */
/* Bitname __PERR cannot be defined because it is used by more than one SFR */
/* Bitname __RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname __ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname __URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname __TRMT cannot be defined because it is used by more than one SFR */
/* Bitname __UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname __UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname __UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname __UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname __UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __URXISEL1 cannot be defined because it is used by more than one SFR */

/* U2TXREG */
/* Bitname __UTXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname __UTXREG8 cannot be defined because it is used by more than one SFR */

/* U2RXREG */
/* Bitname __URXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname __URXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname __URXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname __URXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname __URXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname __URXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname __URXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname __URXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname __URXREG8 cannot be defined because it is used by more than one SFR */

/* SPI1STAT */
#define __SPIRBF SPI1STATbits.SPIRBF
#define __SPITBF SPI1STATbits.SPITBF
#define __SPIROV SPI1STATbits.SPIROV
#define __SPISIDL SPI1STATbits.SPISIDL
#define __SPIEN SPI1STATbits.SPIEN

/* SPI1CON1 */
#define __PPRE SPI1CON1bits.PPRE
#define __SPRE SPI1CON1bits.SPRE
#define __MSTEN SPI1CON1bits.MSTEN
#define __CKP SPI1CON1bits.CKP
#define __SSEN SPI1CON1bits.SSEN
#define __CKE SPI1CON1bits.CKE
#define __SMP SPI1CON1bits.SMP
/* Bitname __MODE16 cannot be defined because it is used by more than one SFR */
#define __DISSDO SPI1CON1bits.DISSDO
#define __DISSCK SPI1CON1bits.DISSCK
#define __PPRE0 SPI1CON1bits.PPRE0
#define __PPRE1 SPI1CON1bits.PPRE1
#define __SPRE0 SPI1CON1bits.SPRE0
#define __SPRE1 SPI1CON1bits.SPRE1
#define __SPRE2 SPI1CON1bits.SPRE2

/* SPI1CON2 */
#define __FRMDLY SPI1CON2bits.FRMDLY
#define __FRMPOL SPI1CON2bits.FRMPOL
#define __SPIFSD SPI1CON2bits.SPIFSD
#define __FRMEN SPI1CON2bits.FRMEN

/* SPI2STAT */
/* Bitname __SPIRBF cannot be defined because it is used by more than one SFR */
/* Bitname __SPITBF cannot be defined because it is used by more than one SFR */
/* Bitname __SPIROV cannot be defined because it is used by more than one SFR */
/* Bitname __SPISIDL cannot be defined because it is used by more than one SFR */
/* Bitname __SPIEN cannot be defined because it is used by more than one SFR */

/* SPI2CON1 */
/* Bitname __PPRE cannot be defined because it is used by more than one SFR */
/* Bitname __SPRE cannot be defined because it is used by more than one SFR */
/* Bitname __MSTEN cannot be defined because it is used by more than one SFR */
/* Bitname __CKP cannot be defined because it is used by more than one SFR */
/* Bitname __SSEN cannot be defined because it is used by more than one SFR */
/* Bitname __CKE cannot be defined because it is used by more than one SFR */
/* Bitname __SMP cannot be defined because it is used by more than one SFR */
/* Bitname __MODE16 cannot be defined because it is used by more than one SFR */
/* Bitname __DISSDO cannot be defined because it is used by more than one SFR */
/* Bitname __DISSCK cannot be defined because it is used by more than one SFR */
/* Bitname __PPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname __PPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname __SPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname __SPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname __SPRE2 cannot be defined because it is used by more than one SFR */

/* SPI2CON2 */
/* Bitname __FRMDLY cannot be defined because it is used by more than one SFR */
/* Bitname __FRMPOL cannot be defined because it is used by more than one SFR */
/* Bitname __SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname __FRMEN cannot be defined because it is used by more than one SFR */

/* TRISA */
#define __TRISA0 TRISAbits.TRISA0
#define __TRISA1 TRISAbits.TRISA1
#define __TRISA2 TRISAbits.TRISA2
#define __TRISA3 TRISAbits.TRISA3
#define __TRISA4 TRISAbits.TRISA4
#define __TRISA7 TRISAbits.TRISA7
#define __TRISA8 TRISAbits.TRISA8
#define __TRISA9 TRISAbits.TRISA9
#define __TRISA10 TRISAbits.TRISA10

/* PORTA */
#define __RA0 PORTAbits.RA0
#define __RA1 PORTAbits.RA1
#define __RA2 PORTAbits.RA2
#define __RA3 PORTAbits.RA3
#define __RA4 PORTAbits.RA4
#define __RA7 PORTAbits.RA7
#define __RA8 PORTAbits.RA8
#define __RA9 PORTAbits.RA9
#define __RA10 PORTAbits.RA10

/* LATA */
#define __LATA0 LATAbits.LATA0
#define __LATA1 LATAbits.LATA1
#define __LATA2 LATAbits.LATA2
#define __LATA3 LATAbits.LATA3
#define __LATA4 LATAbits.LATA4
#define __LATA7 LATAbits.LATA7
#define __LATA8 LATAbits.LATA8
#define __LATA9 LATAbits.LATA9
#define __LATA10 LATAbits.LATA10

/* ODCA */
#define __ODCA0 ODCAbits.ODCA0
#define __ODCA1 ODCAbits.ODCA1
#define __ODCA2 ODCAbits.ODCA2
#define __ODCA3 ODCAbits.ODCA3
#define __ODCA4 ODCAbits.ODCA4
#define __ODCA7 ODCAbits.ODCA7
#define __ODCA8 ODCAbits.ODCA8
#define __ODCA9 ODCAbits.ODCA9
#define __ODCA10 ODCAbits.ODCA10

/* TRISB */
#define __TRISB0 TRISBbits.TRISB0
#define __TRISB1 TRISBbits.TRISB1
#define __TRISB2 TRISBbits.TRISB2
#define __TRISB3 TRISBbits.TRISB3
#define __TRISB4 TRISBbits.TRISB4
#define __TRISB5 TRISBbits.TRISB5
#define __TRISB6 TRISBbits.TRISB6
#define __TRISB7 TRISBbits.TRISB7
#define __TRISB8 TRISBbits.TRISB8
#define __TRISB9 TRISBbits.TRISB9
#define __TRISB10 TRISBbits.TRISB10
#define __TRISB11 TRISBbits.TRISB11
#define __TRISB12 TRISBbits.TRISB12
#define __TRISB13 TRISBbits.TRISB13
#define __TRISB14 TRISBbits.TRISB14
#define __TRISB15 TRISBbits.TRISB15

/* PORTB */
#define __RB0 PORTBbits.RB0
#define __RB1 PORTBbits.RB1
#define __RB2 PORTBbits.RB2
#define __RB3 PORTBbits.RB3
#define __RB4 PORTBbits.RB4
#define __RB5 PORTBbits.RB5
#define __RB6 PORTBbits.RB6
#define __RB7 PORTBbits.RB7
#define __RB8 PORTBbits.RB8
#define __RB9 PORTBbits.RB9
#define __RB10 PORTBbits.RB10
#define __RB11 PORTBbits.RB11
#define __RB12 PORTBbits.RB12
#define __RB13 PORTBbits.RB13
#define __RB14 PORTBbits.RB14
#define __RB15 PORTBbits.RB15

/* LATB */
#define __LATB0 LATBbits.LATB0
#define __LATB1 LATBbits.LATB1
#define __LATB2 LATBbits.LATB2
#define __LATB3 LATBbits.LATB3
#define __LATB4 LATBbits.LATB4
#define __LATB5 LATBbits.LATB5
#define __LATB6 LATBbits.LATB6
#define __LATB7 LATBbits.LATB7
#define __LATB8 LATBbits.LATB8
#define __LATB9 LATBbits.LATB9
#define __LATB10 LATBbits.LATB10
#define __LATB11 LATBbits.LATB11
#define __LATB12 LATBbits.LATB12
#define __LATB13 LATBbits.LATB13
#define __LATB14 LATBbits.LATB14
#define __LATB15 LATBbits.LATB15

/* ODCB */
#define __ODCB0 ODCBbits.ODCB0
#define __ODCB1 ODCBbits.ODCB1
#define __ODCB2 ODCBbits.ODCB2
#define __ODCB3 ODCBbits.ODCB3
#define __ODCB4 ODCBbits.ODCB4
#define __ODCB5 ODCBbits.ODCB5
#define __ODCB6 ODCBbits.ODCB6
#define __ODCB7 ODCBbits.ODCB7
#define __ODCB8 ODCBbits.ODCB8
#define __ODCB9 ODCBbits.ODCB9
#define __ODCB10 ODCBbits.ODCB10
#define __ODCB11 ODCBbits.ODCB11
#define __ODCB12 ODCBbits.ODCB12
#define __ODCB13 ODCBbits.ODCB13
#define __ODCB14 ODCBbits.ODCB14
#define __ODCB15 ODCBbits.ODCB15

/* TRISC */
#define __TRISC0 TRISCbits.TRISC0
#define __TRISC1 TRISCbits.TRISC1
#define __TRISC2 TRISCbits.TRISC2
#define __TRISC3 TRISCbits.TRISC3
#define __TRISC4 TRISCbits.TRISC4
#define __TRISC5 TRISCbits.TRISC5
#define __TRISC6 TRISCbits.TRISC6
#define __TRISC7 TRISCbits.TRISC7
#define __TRISC8 TRISCbits.TRISC8
#define __TRISC9 TRISCbits.TRISC9

/* PORTC */
#define __RC0 PORTCbits.RC0
#define __RC1 PORTCbits.RC1
#define __RC2 PORTCbits.RC2
#define __RC3 PORTCbits.RC3
#define __RC4 PORTCbits.RC4
#define __RC5 PORTCbits.RC5
#define __RC6 PORTCbits.RC6
#define __RC7 PORTCbits.RC7
#define __RC8 PORTCbits.RC8
#define __RC9 PORTCbits.RC9

/* LATC */
#define __LATC0 LATCbits.LATC0
#define __LATC1 LATCbits.LATC1
#define __LATC2 LATCbits.LATC2
#define __LATC3 LATCbits.LATC3
#define __LATC4 LATCbits.LATC4
#define __LATC5 LATCbits.LATC5
#define __LATC6 LATCbits.LATC6
#define __LATC7 LATCbits.LATC7
#define __LATC8 LATCbits.LATC8
#define __LATC9 LATCbits.LATC9

/* ODCC */
#define __ODCC0 ODCCbits.ODCC0
#define __ODCC1 ODCCbits.ODCC1
#define __ODCC2 ODCCbits.ODCC2
#define __ODCC3 ODCCbits.ODCC3
#define __ODCC4 ODCCbits.ODCC4
#define __ODCC5 ODCCbits.ODCC5
#define __ODCC6 ODCCbits.ODCC6
#define __ODCC7 ODCCbits.ODCC7
#define __ODCC8 ODCCbits.ODCC8
#define __ODCC9 ODCCbits.ODCC9

/* PADCFG1 */
#define __PMPTTL PADCFG1bits.PMPTTL
#define __RTSECSEL PADCFG1bits.RTSECSEL

/* AD1CON1 */
#define __DONE AD1CON1bits.DONE
#define __SAMP AD1CON1bits.SAMP
#define __ASAM AD1CON1bits.ASAM
#define __SIMSAM AD1CON1bits.SIMSAM
#define __SSRC AD1CON1bits.SSRC
/* Bitname __FORM cannot be defined because it is used by more than one SFR */
#define __AD12B AD1CON1bits.AD12B
#define __ADDMABM AD1CON1bits.ADDMABM
#define __ADSIDL AD1CON1bits.ADSIDL
#define __ADON AD1CON1bits.ADON
#define __SSRC0 AD1CON1bits.SSRC0
#define __SSRC1 AD1CON1bits.SSRC1
#define __SSRC2 AD1CON1bits.SSRC2
#define __FORM0 AD1CON1bits.FORM0
#define __FORM1 AD1CON1bits.FORM1

/* AD1CON2 */
#define __ALTS AD1CON2bits.ALTS
#define __BUFM AD1CON2bits.BUFM
#define __SMPI AD1CON2bits.SMPI
#define __BUFS AD1CON2bits.BUFS
#define __CHPS AD1CON2bits.CHPS
#define __CSCNA AD1CON2bits.CSCNA
#define __VCFG AD1CON2bits.VCFG
#define __SMPI0 AD1CON2bits.SMPI0
#define __SMPI1 AD1CON2bits.SMPI1
#define __SMPI2 AD1CON2bits.SMPI2
#define __SMPI3 AD1CON2bits.SMPI3
#define __CHPS0 AD1CON2bits.CHPS0
#define __CHPS1 AD1CON2bits.CHPS1
#define __VCFG0 AD1CON2bits.VCFG0
#define __VCFG1 AD1CON2bits.VCFG1
#define __VCFG2 AD1CON2bits.VCFG2

/* AD1CON3 */
#define __ADCS AD1CON3bits.ADCS
#define __SAMC AD1CON3bits.SAMC
#define __ADRC AD1CON3bits.ADRC
#define __ADCS0 AD1CON3bits.ADCS0
#define __ADCS1 AD1CON3bits.ADCS1
#define __ADCS2 AD1CON3bits.ADCS2
#define __ADCS3 AD1CON3bits.ADCS3
#define __ADCS4 AD1CON3bits.ADCS4
#define __ADCS5 AD1CON3bits.ADCS5
#define __ADCS6 AD1CON3bits.ADCS6
#define __ADCS7 AD1CON3bits.ADCS7
#define __SAMC0 AD1CON3bits.SAMC0
#define __SAMC1 AD1CON3bits.SAMC1
#define __SAMC2 AD1CON3bits.SAMC2
#define __SAMC3 AD1CON3bits.SAMC3
#define __SAMC4 AD1CON3bits.SAMC4

/* AD1CHS123 */
#define __CH123SA AD1CHS123bits.CH123SA
#define __CH123NA AD1CHS123bits.CH123NA
#define __CH123SB AD1CHS123bits.CH123SB
#define __CH123NB AD1CHS123bits.CH123NB
#define __CH123NA0 AD1CHS123bits.CH123NA0
#define __CH123NA1 AD1CHS123bits.CH123NA1
#define __CH123NB0 AD1CHS123bits.CH123NB0
#define __CH123NB1 AD1CHS123bits.CH123NB1

/* AD1CHS0 */
#define __CH0SA AD1CHS0bits.CH0SA
#define __CH0NA AD1CHS0bits.CH0NA
#define __CH0SB AD1CHS0bits.CH0SB
#define __CH0NB AD1CHS0bits.CH0NB
#define __CH0SA0 AD1CHS0bits.CH0SA0
#define __CH0SA1 AD1CHS0bits.CH0SA1
#define __CH0SA2 AD1CHS0bits.CH0SA2
#define __CH0SA3 AD1CHS0bits.CH0SA3
#define __CH0SA4 AD1CHS0bits.CH0SA4
#define __CH0SB0 AD1CHS0bits.CH0SB0
#define __CH0SB1 AD1CHS0bits.CH0SB1
#define __CH0SB2 AD1CHS0bits.CH0SB2
#define __CH0SB3 AD1CHS0bits.CH0SB3
#define __CH0SB4 AD1CHS0bits.CH0SB4

/* AD1PCFGL */
#define __PCFG0 AD1PCFGLbits.PCFG0
#define __PCFG1 AD1PCFGLbits.PCFG1
#define __PCFG2 AD1PCFGLbits.PCFG2
#define __PCFG3 AD1PCFGLbits.PCFG3
#define __PCFG4 AD1PCFGLbits.PCFG4
#define __PCFG5 AD1PCFGLbits.PCFG5
#define __PCFG6 AD1PCFGLbits.PCFG6
#define __PCFG7 AD1PCFGLbits.PCFG7
#define __PCFG8 AD1PCFGLbits.PCFG8

/* AD1CSSL */
#define __CSS0 AD1CSSLbits.CSS0
#define __CSS1 AD1CSSLbits.CSS1
#define __CSS2 AD1CSSLbits.CSS2
#define __CSS3 AD1CSSLbits.CSS3
#define __CSS4 AD1CSSLbits.CSS4
#define __CSS5 AD1CSSLbits.CSS5
#define __CSS6 AD1CSSLbits.CSS6
#define __CSS7 AD1CSSLbits.CSS7
#define __CSS8 AD1CSSLbits.CSS8

/* AD1CON4 */
#define __DMABL AD1CON4bits.DMABL
#define __DMABL0 AD1CON4bits.DMABL0
#define __DMABL1 AD1CON4bits.DMABL1
#define __DMABL2 AD1CON4bits.DMABL2

/* DMA0CON */
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
#define __AMODE DMA0CONbits.AMODE
#define __NULLW DMA0CONbits.NULLW
#define __HALF DMA0CONbits.HALF
#define __DIR DMA0CONbits.DIR
#define __SIZE DMA0CONbits.SIZE
#define __CHEN DMA0CONbits.CHEN
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
#define __AMODE0 DMA0CONbits.AMODE0
#define __AMODE1 DMA0CONbits.AMODE1

/* DMA0REQ */
#define __IRQSEL DMA0REQbits.IRQSEL
#define __FORCE DMA0REQbits.FORCE
#define __IRQSEL0 DMA0REQbits.IRQSEL0
#define __IRQSEL1 DMA0REQbits.IRQSEL1
#define __IRQSEL2 DMA0REQbits.IRQSEL2
#define __IRQSEL3 DMA0REQbits.IRQSEL3
#define __IRQSEL4 DMA0REQbits.IRQSEL4
#define __IRQSEL5 DMA0REQbits.IRQSEL5
#define __IRQSEL6 DMA0REQbits.IRQSEL6

/* DMA1CON */
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE cannot be defined because it is used by more than one SFR */
/* Bitname __NULLW cannot be defined because it is used by more than one SFR */
/* Bitname __HALF cannot be defined because it is used by more than one SFR */
/* Bitname __DIR cannot be defined because it is used by more than one SFR */
/* Bitname __SIZE cannot be defined because it is used by more than one SFR */
/* Bitname __CHEN cannot be defined because it is used by more than one SFR */
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA1REQ */
/* Bitname __IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname __FORCE cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA2CON */
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE cannot be defined because it is used by more than one SFR */
/* Bitname __NULLW cannot be defined because it is used by more than one SFR */
/* Bitname __HALF cannot be defined because it is used by more than one SFR */
/* Bitname __DIR cannot be defined because it is used by more than one SFR */
/* Bitname __SIZE cannot be defined because it is used by more than one SFR */
/* Bitname __CHEN cannot be defined because it is used by more than one SFR */
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA2REQ */
/* Bitname __IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname __FORCE cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA3CON */
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE cannot be defined because it is used by more than one SFR */
/* Bitname __NULLW cannot be defined because it is used by more than one SFR */
/* Bitname __HALF cannot be defined because it is used by more than one SFR */
/* Bitname __DIR cannot be defined because it is used by more than one SFR */
/* Bitname __SIZE cannot be defined because it is used by more than one SFR */
/* Bitname __CHEN cannot be defined because it is used by more than one SFR */
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA3REQ */
/* Bitname __IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname __FORCE cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA4CON */
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE cannot be defined because it is used by more than one SFR */
/* Bitname __NULLW cannot be defined because it is used by more than one SFR */
/* Bitname __HALF cannot be defined because it is used by more than one SFR */
/* Bitname __DIR cannot be defined because it is used by more than one SFR */
/* Bitname __SIZE cannot be defined because it is used by more than one SFR */
/* Bitname __CHEN cannot be defined because it is used by more than one SFR */
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA4REQ */
/* Bitname __IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname __FORCE cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA5CON */
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE cannot be defined because it is used by more than one SFR */
/* Bitname __NULLW cannot be defined because it is used by more than one SFR */
/* Bitname __HALF cannot be defined because it is used by more than one SFR */
/* Bitname __DIR cannot be defined because it is used by more than one SFR */
/* Bitname __SIZE cannot be defined because it is used by more than one SFR */
/* Bitname __CHEN cannot be defined because it is used by more than one SFR */
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA5REQ */
/* Bitname __IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname __FORCE cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA6CON */
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE cannot be defined because it is used by more than one SFR */
/* Bitname __NULLW cannot be defined because it is used by more than one SFR */
/* Bitname __HALF cannot be defined because it is used by more than one SFR */
/* Bitname __DIR cannot be defined because it is used by more than one SFR */
/* Bitname __SIZE cannot be defined because it is used by more than one SFR */
/* Bitname __CHEN cannot be defined because it is used by more than one SFR */
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA6REQ */
/* Bitname __IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname __FORCE cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA7CON */
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE cannot be defined because it is used by more than one SFR */
/* Bitname __NULLW cannot be defined because it is used by more than one SFR */
/* Bitname __HALF cannot be defined because it is used by more than one SFR */
/* Bitname __DIR cannot be defined because it is used by more than one SFR */
/* Bitname __SIZE cannot be defined because it is used by more than one SFR */
/* Bitname __CHEN cannot be defined because it is used by more than one SFR */
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA7REQ */
/* Bitname __IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname __FORCE cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname __IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMACS0 */
#define __XWCOL DMACS0bits.XWCOL
#define __PWCOL DMACS0bits.PWCOL
#define __XWCOL0 DMACS0bits.XWCOL0
#define __XWCOL1 DMACS0bits.XWCOL1
#define __XWCOL2 DMACS0bits.XWCOL2
#define __XWCOL3 DMACS0bits.XWCOL3
#define __XWCOL4 DMACS0bits.XWCOL4
#define __XWCOL5 DMACS0bits.XWCOL5
#define __XWCOL6 DMACS0bits.XWCOL6
#define __XWCOL7 DMACS0bits.XWCOL7
#define __PWCOL0 DMACS0bits.PWCOL0
#define __PWCOL1 DMACS0bits.PWCOL1
#define __PWCOL2 DMACS0bits.PWCOL2
#define __PWCOL3 DMACS0bits.PWCOL3
#define __PWCOL4 DMACS0bits.PWCOL4
#define __PWCOL5 DMACS0bits.PWCOL5
#define __PWCOL6 DMACS0bits.PWCOL6
#define __PWCOL7 DMACS0bits.PWCOL7

/* DMACS1 */
#define __PPST0 DMACS1bits.PPST0
#define __PPST1 DMACS1bits.PPST1
#define __PPST2 DMACS1bits.PPST2
#define __PPST3 DMACS1bits.PPST3
#define __PPST4 DMACS1bits.PPST4
#define __PPST5 DMACS1bits.PPST5
#define __PPST6 DMACS1bits.PPST6
#define __PPST7 DMACS1bits.PPST7
#define __LSTCH DMACS1bits.LSTCH
#define __PPST DMACS1bits.PPST
#define __LSTCH0 DMACS1bits.LSTCH0
#define __LSTCH1 DMACS1bits.LSTCH1
#define __LSTCH2 DMACS1bits.LSTCH2
#define __LSTCH3 DMACS1bits.LSTCH3

/* DAC1CON */
#define __DACFDIV DAC1CONbits.DACFDIV
/* Bitname __FORM cannot be defined because it is used by more than one SFR */
#define __AMPON DAC1CONbits.AMPON
#define __DACSIDL DAC1CONbits.DACSIDL
#define __DACEN DAC1CONbits.DACEN
#define __DACFDIV0 DAC1CONbits.DACFDIV0
#define __DACFDIV1 DAC1CONbits.DACFDIV1
#define __DACFDIV2 DAC1CONbits.DACFDIV2
#define __DACFDIV3 DAC1CONbits.DACFDIV3
#define __DACFDIV4 DAC1CONbits.DACFDIV4
#define __DACFDIV5 DAC1CONbits.DACFDIV5
#define __DACFDIV6 DAC1CONbits.DACFDIV6

/* DAC1STAT */
#define __REMPTY DAC1STATbits.REMPTY
#define __RFULL DAC1STATbits.RFULL
#define __RITYPE DAC1STATbits.RITYPE
#define __RMVOEN DAC1STATbits.RMVOEN
#define __ROEN DAC1STATbits.ROEN
#define __LEMPTY DAC1STATbits.LEMPTY
#define __LFULL DAC1STATbits.LFULL
#define __LITYPE DAC1STATbits.LITYPE
#define __LMVOEN DAC1STATbits.LMVOEN
#define __LOEN DAC1STATbits.LOEN

/* C1CTRL1 */
#define __WIN C1CTRL1bits.WIN
#define __CANCAP C1CTRL1bits.CANCAP
#define __OPMODE C1CTRL1bits.OPMODE
#define __REQOP C1CTRL1bits.REQOP
#define __CANCKS C1CTRL1bits.CANCKS
#define __ABAT C1CTRL1bits.ABAT
/* Bitname __CSIDL cannot be defined because it is used by more than one SFR */
#define __OPMODE0 C1CTRL1bits.OPMODE0
#define __OPMODE1 C1CTRL1bits.OPMODE1
#define __OPMODE2 C1CTRL1bits.OPMODE2
#define __REQOP0 C1CTRL1bits.REQOP0
#define __REQOP1 C1CTRL1bits.REQOP1
#define __REQOP2 C1CTRL1bits.REQOP2

/* C1CTRL2 */
#define __DNCNT C1CTRL2bits.DNCNT
#define __DNCNT0 C1CTRL2bits.DNCNT0
#define __DNCNT1 C1CTRL2bits.DNCNT1
#define __DNCNT2 C1CTRL2bits.DNCNT2
#define __DNCNT3 C1CTRL2bits.DNCNT3
#define __DNCNT4 C1CTRL2bits.DNCNT4

/* C1VEC */
#define __ICODE C1VECbits.ICODE
#define __FILHIT C1VECbits.FILHIT
#define __ICODE0 C1VECbits.ICODE0
#define __ICODE1 C1VECbits.ICODE1
#define __ICODE2 C1VECbits.ICODE2
#define __ICODE3 C1VECbits.ICODE3
#define __ICODE4 C1VECbits.ICODE4
#define __ICODE5 C1VECbits.ICODE5
#define __ICODE6 C1VECbits.ICODE6
#define __FILHIT0 C1VECbits.FILHIT0
#define __FILHIT1 C1VECbits.FILHIT1
#define __FILHIT2 C1VECbits.FILHIT2
#define __FILHIT3 C1VECbits.FILHIT3
#define __FILHIT4 C1VECbits.FILHIT4

/* C1FCTRL */
#define __FSA C1FCTRLbits.FSA
#define __DMABS C1FCTRLbits.DMABS
#define __FSA0 C1FCTRLbits.FSA0
#define __FSA1 C1FCTRLbits.FSA1
#define __FSA2 C1FCTRLbits.FSA2
#define __FSA3 C1FCTRLbits.FSA3
#define __FSA4 C1FCTRLbits.FSA4
#define __DMABS0 C1FCTRLbits.DMABS0
#define __DMABS1 C1FCTRLbits.DMABS1
#define __DMABS2 C1FCTRLbits.DMABS2

/* C1FIFO */
#define __FNRB C1FIFObits.FNRB
#define __FBP C1FIFObits.FBP
#define __FNRB0 C1FIFObits.FNRB0
#define __FNRB1 C1FIFObits.FNRB1
#define __FNRB2 C1FIFObits.FNRB2
#define __FNRB3 C1FIFObits.FNRB3
#define __FNRB4 C1FIFObits.FNRB4
#define __FNRB5 C1FIFObits.FNRB5
#define __FBP0 C1FIFObits.FBP0
#define __FBP1 C1FIFObits.FBP1
#define __FBP2 C1FIFObits.FBP2
#define __FBP3 C1FIFObits.FBP3
#define __FBP4 C1FIFObits.FBP4
#define __FBP5 C1FIFObits.FBP5

/* C1INTF */
#define __TBIF C1INTFbits.TBIF
#define __RBIF C1INTFbits.RBIF
#define __RBOVIF C1INTFbits.RBOVIF
#define __FIFOIF C1INTFbits.FIFOIF
#define __ERRIF C1INTFbits.ERRIF
#define __WAKIF C1INTFbits.WAKIF
#define __IVRIF C1INTFbits.IVRIF
#define __EWARN C1INTFbits.EWARN
#define __RXWAR C1INTFbits.RXWAR
#define __TXWAR C1INTFbits.TXWAR
#define __RXBP C1INTFbits.RXBP
#define __TXBP C1INTFbits.TXBP
#define __TXBO C1INTFbits.TXBO

/* C1INTE */
#define __TBIE C1INTEbits.TBIE
#define __RBIE C1INTEbits.RBIE
#define __RBOVIE C1INTEbits.RBOVIE
#define __FIFOIE C1INTEbits.FIFOIE
#define __ERRIE C1INTEbits.ERRIE
#define __WAKIE C1INTEbits.WAKIE
#define __IVRIE C1INTEbits.IVRIE

/* C1EC */
#define __RERRCNT C1ECbits.RERRCNT
#define __TERRCNT C1ECbits.TERRCNT
#define __RERRCNT0 C1ECbits.RERRCNT0
#define __RERRCNT1 C1ECbits.RERRCNT1
#define __RERRCNT2 C1ECbits.RERRCNT2
#define __RERRCNT3 C1ECbits.RERRCNT3
#define __RERRCNT4 C1ECbits.RERRCNT4
#define __RERRCNT5 C1ECbits.RERRCNT5
#define __RERRCNT6 C1ECbits.RERRCNT6
#define __RERRCNT7 C1ECbits.RERRCNT7
#define __TERRCNT0 C1ECbits.TERRCNT0
#define __TERRCNT1 C1ECbits.TERRCNT1
#define __TERRCNT2 C1ECbits.TERRCNT2
#define __TERRCNT3 C1ECbits.TERRCNT3
#define __TERRCNT4 C1ECbits.TERRCNT4
#define __TERRCNT5 C1ECbits.TERRCNT5
#define __TERRCNT6 C1ECbits.TERRCNT6
#define __TERRCNT7 C1ECbits.TERRCNT7

/* C1CFG1 */
#define __BRP C1CFG1bits.BRP
#define __SJW C1CFG1bits.SJW
#define __BRP0 C1CFG1bits.BRP0
#define __BRP1 C1CFG1bits.BRP1
#define __BRP2 C1CFG1bits.BRP2
#define __BRP3 C1CFG1bits.BRP3
#define __BRP4 C1CFG1bits.BRP4
#define __BRP5 C1CFG1bits.BRP5
#define __SJW0 C1CFG1bits.SJW0
#define __SJW1 C1CFG1bits.SJW1

/* C1CFG2 */
#define __PRSEG C1CFG2bits.PRSEG
#define __SEG1PH C1CFG2bits.SEG1PH
#define __SAM C1CFG2bits.SAM
#define __SEG2PHTS C1CFG2bits.SEG2PHTS
#define __SEG2PH C1CFG2bits.SEG2PH
#define __WAKFIL C1CFG2bits.WAKFIL
#define __PRSEG0 C1CFG2bits.PRSEG0
#define __PRSEG1 C1CFG2bits.PRSEG1
#define __PRSEG2 C1CFG2bits.PRSEG2
#define __SEG1PH0 C1CFG2bits.SEG1PH0
#define __SEG1PH1 C1CFG2bits.SEG1PH1
#define __SEG1PH2 C1CFG2bits.SEG1PH2
#define __SEG2PH0 C1CFG2bits.SEG2PH0
#define __SEG2PH1 C1CFG2bits.SEG2PH1
#define __SEG2PH2 C1CFG2bits.SEG2PH2

/* C1FEN1 */
#define __FLTEN C1FEN1bits.FLTEN
#define __FLTEN0 C1FEN1bits.FLTEN0
#define __FLTEN1 C1FEN1bits.FLTEN1
#define __FLTEN2 C1FEN1bits.FLTEN2
#define __FLTEN3 C1FEN1bits.FLTEN3
#define __FLTEN4 C1FEN1bits.FLTEN4
#define __FLTEN5 C1FEN1bits.FLTEN5
#define __FLTEN6 C1FEN1bits.FLTEN6
#define __FLTEN7 C1FEN1bits.FLTEN7
#define __FLTEN8 C1FEN1bits.FLTEN8
#define __FLTEN9 C1FEN1bits.FLTEN9
#define __FLTEN10 C1FEN1bits.FLTEN10
#define __FLTEN11 C1FEN1bits.FLTEN11
#define __FLTEN12 C1FEN1bits.FLTEN12
#define __FLTEN13 C1FEN1bits.FLTEN13
#define __FLTEN14 C1FEN1bits.FLTEN14
#define __FLTEN15 C1FEN1bits.FLTEN15

/* C1FMSKSEL1 */
#define __F0MSK C1FMSKSEL1bits.F0MSK
#define __F1MSK C1FMSKSEL1bits.F1MSK
#define __F2MSK C1FMSKSEL1bits.F2MSK
#define __F3MSK C1FMSKSEL1bits.F3MSK
#define __F4MSK C1FMSKSEL1bits.F4MSK
#define __F5MSK C1FMSKSEL1bits.F5MSK
#define __F6MSK C1FMSKSEL1bits.F6MSK
#define __F7MSK C1FMSKSEL1bits.F7MSK
#define __F0MSK0 C1FMSKSEL1bits.F0MSK0
#define __F0MSK1 C1FMSKSEL1bits.F0MSK1
#define __F1MSK0 C1FMSKSEL1bits.F1MSK0
#define __F1MSK1 C1FMSKSEL1bits.F1MSK1
#define __F2MSK0 C1FMSKSEL1bits.F2MSK0
#define __F2MSK1 C1FMSKSEL1bits.F2MSK1
#define __F3MSK0 C1FMSKSEL1bits.F3MSK0
#define __F3MSK1 C1FMSKSEL1bits.F3MSK1
#define __F4MSK0 C1FMSKSEL1bits.F4MSK0
#define __F4MSK1 C1FMSKSEL1bits.F4MSK1
#define __F5MSK0 C1FMSKSEL1bits.F5MSK0
#define __F5MSK1 C1FMSKSEL1bits.F5MSK1
#define __F6MSK0 C1FMSKSEL1bits.F6MSK0
#define __F6MSK1 C1FMSKSEL1bits.F6MSK1
#define __F7MSK0 C1FMSKSEL1bits.F7MSK0
#define __F7MSK1 C1FMSKSEL1bits.F7MSK1

/* C1FMSKSEL2 */
#define __F8MSK C1FMSKSEL2bits.F8MSK
#define __F9MSK C1FMSKSEL2bits.F9MSK
#define __F10MSK C1FMSKSEL2bits.F10MSK
#define __F11MSK C1FMSKSEL2bits.F11MSK
#define __F12MSK C1FMSKSEL2bits.F12MSK
#define __F13MSK C1FMSKSEL2bits.F13MSK
#define __F14MSK C1FMSKSEL2bits.F14MSK
#define __F15MSK C1FMSKSEL2bits.F15MSK
#define __F8MSK0 C1FMSKSEL2bits.F8MSK0
#define __F8MSK1 C1FMSKSEL2bits.F8MSK1
#define __F9MSK0 C1FMSKSEL2bits.F9MSK0
#define __F9MSK1 C1FMSKSEL2bits.F9MSK1
#define __F10MSK0 C1FMSKSEL2bits.F10MSK0
#define __F10MSK1 C1FMSKSEL2bits.F10MSK1
#define __F11MSK0 C1FMSKSEL2bits.F11MSK0
#define __F11MSK1 C1FMSKSEL2bits.F11MSK1
#define __F12MSK0 C1FMSKSEL2bits.F12MSK0
#define __F12MSK1 C1FMSKSEL2bits.F12MSK1
#define __F13MSK0 C1FMSKSEL2bits.F13MSK0
#define __F13MSK1 C1FMSKSEL2bits.F13MSK1
#define __F14MSK0 C1FMSKSEL2bits.F14MSK0
#define __F14MSK1 C1FMSKSEL2bits.F14MSK1
#define __F15MSK0 C1FMSKSEL2bits.F15MSK0
#define __F15MSK1 C1FMSKSEL2bits.F15MSK1

/* C1BUFPNT1 */
#define __F0BP C1BUFPNT1bits.F0BP
#define __F1BP C1BUFPNT1bits.F1BP
#define __F2BP C1BUFPNT1bits.F2BP
#define __F3BP C1BUFPNT1bits.F3BP
#define __F0BP0 C1BUFPNT1bits.F0BP0
#define __F0BP1 C1BUFPNT1bits.F0BP1
#define __F0BP2 C1BUFPNT1bits.F0BP2
#define __F0BP3 C1BUFPNT1bits.F0BP3
#define __F1BP0 C1BUFPNT1bits.F1BP0
#define __F1BP1 C1BUFPNT1bits.F1BP1
#define __F1BP2 C1BUFPNT1bits.F1BP2
#define __F1BP3 C1BUFPNT1bits.F1BP3
#define __F2BP0 C1BUFPNT1bits.F2BP0
#define __F2BP1 C1BUFPNT1bits.F2BP1
#define __F2BP2 C1BUFPNT1bits.F2BP2
#define __F2BP3 C1BUFPNT1bits.F2BP3
#define __F3BP0 C1BUFPNT1bits.F3BP0
#define __F3BP1 C1BUFPNT1bits.F3BP1
#define __F3BP2 C1BUFPNT1bits.F3BP2
#define __F3BP3 C1BUFPNT1bits.F3BP3

/* C1RXFUL1 */
#define __RXFUL0 C1RXFUL1bits.RXFUL0
#define __RXFUL1 C1RXFUL1bits.RXFUL1
#define __RXFUL2 C1RXFUL1bits.RXFUL2
#define __RXFUL3 C1RXFUL1bits.RXFUL3
#define __RXFUL4 C1RXFUL1bits.RXFUL4
#define __RXFUL5 C1RXFUL1bits.RXFUL5
#define __RXFUL6 C1RXFUL1bits.RXFUL6
#define __RXFUL7 C1RXFUL1bits.RXFUL7
#define __RXFUL8 C1RXFUL1bits.RXFUL8
#define __RXFUL9 C1RXFUL1bits.RXFUL9
#define __RXFUL10 C1RXFUL1bits.RXFUL10
#define __RXFUL11 C1RXFUL1bits.RXFUL11
#define __RXFUL12 C1RXFUL1bits.RXFUL12
#define __RXFUL13 C1RXFUL1bits.RXFUL13
#define __RXFUL14 C1RXFUL1bits.RXFUL14
#define __RXFUL15 C1RXFUL1bits.RXFUL15

/* C1BUFPNT2 */
#define __F4BP C1BUFPNT2bits.F4BP
#define __F5BP C1BUFPNT2bits.F5BP
#define __F6BP C1BUFPNT2bits.F6BP
#define __F7BP C1BUFPNT2bits.F7BP
#define __F4BP0 C1BUFPNT2bits.F4BP0
#define __F4BP1 C1BUFPNT2bits.F4BP1
#define __F4BP2 C1BUFPNT2bits.F4BP2
#define __F4BP3 C1BUFPNT2bits.F4BP3
#define __F5BP0 C1BUFPNT2bits.F5BP0
#define __F5BP1 C1BUFPNT2bits.F5BP1
#define __F5BP2 C1BUFPNT2bits.F5BP2
#define __F5BP3 C1BUFPNT2bits.F5BP3
#define __F6BP0 C1BUFPNT2bits.F6BP0
#define __F6BP1 C1BUFPNT2bits.F6BP1
#define __F6BP2 C1BUFPNT2bits.F6BP2
#define __F6BP3 C1BUFPNT2bits.F6BP3
#define __F7BP0 C1BUFPNT2bits.F7BP0
#define __F7BP1 C1BUFPNT2bits.F7BP1
#define __F7BP2 C1BUFPNT2bits.F7BP2
#define __F7BP3 C1BUFPNT2bits.F7BP3

/* C1RXFUL2 */
#define __RXFUL16 C1RXFUL2bits.RXFUL16
#define __RXFUL17 C1RXFUL2bits.RXFUL17
#define __RXFUL18 C1RXFUL2bits.RXFUL18
#define __RXFUL19 C1RXFUL2bits.RXFUL19
#define __RXFUL20 C1RXFUL2bits.RXFUL20
#define __RXFUL21 C1RXFUL2bits.RXFUL21
#define __RXFUL22 C1RXFUL2bits.RXFUL22
#define __RXFUL23 C1RXFUL2bits.RXFUL23
#define __RXFUL24 C1RXFUL2bits.RXFUL24
#define __RXFUL25 C1RXFUL2bits.RXFUL25
#define __RXFUL26 C1RXFUL2bits.RXFUL26
#define __RXFUL27 C1RXFUL2bits.RXFUL27
#define __RXFUL28 C1RXFUL2bits.RXFUL28
#define __RXFUL29 C1RXFUL2bits.RXFUL29
#define __RXFUL30 C1RXFUL2bits.RXFUL30
#define __RXFUL31 C1RXFUL2bits.RXFUL31

/* C1BUFPNT3 */
#define __F8BP C1BUFPNT3bits.F8BP
#define __F9BP C1BUFPNT3bits.F9BP
#define __F10BP C1BUFPNT3bits.F10BP
#define __F11BP C1BUFPNT3bits.F11BP
#define __F8BP0 C1BUFPNT3bits.F8BP0
#define __F8BP1 C1BUFPNT3bits.F8BP1
#define __F8BP2 C1BUFPNT3bits.F8BP2
#define __F8BP3 C1BUFPNT3bits.F8BP3
#define __F9BP0 C1BUFPNT3bits.F9BP0
#define __F9BP1 C1BUFPNT3bits.F9BP1
#define __F9BP2 C1BUFPNT3bits.F9BP2
#define __F9BP3 C1BUFPNT3bits.F9BP3
#define __F10BP0 C1BUFPNT3bits.F10BP0
#define __F10BP1 C1BUFPNT3bits.F10BP1
#define __F10BP2 C1BUFPNT3bits.F10BP2
#define __F10BP3 C1BUFPNT3bits.F10BP3
#define __F11BP0 C1BUFPNT3bits.F11BP0
#define __F11BP1 C1BUFPNT3bits.F11BP1
#define __F11BP2 C1BUFPNT3bits.F11BP2
#define __F11BP3 C1BUFPNT3bits.F11BP3

/* C1BUFPNT4 */
#define __F12BP C1BUFPNT4bits.F12BP
#define __F13BP C1BUFPNT4bits.F13BP
#define __F14BP C1BUFPNT4bits.F14BP
#define __F15BP C1BUFPNT4bits.F15BP
#define __F12BP0 C1BUFPNT4bits.F12BP0
#define __F12BP1 C1BUFPNT4bits.F12BP1
#define __F12BP2 C1BUFPNT4bits.F12BP2
#define __F12BP3 C1BUFPNT4bits.F12BP3
#define __F13BP0 C1BUFPNT4bits.F13BP0
#define __F13BP1 C1BUFPNT4bits.F13BP1
#define __F13BP2 C1BUFPNT4bits.F13BP2
#define __F13BP3 C1BUFPNT4bits.F13BP3
#define __F14BP0 C1BUFPNT4bits.F14BP0
#define __F14BP1 C1BUFPNT4bits.F14BP1
#define __F14BP2 C1BUFPNT4bits.F14BP2
#define __F14BP3 C1BUFPNT4bits.F14BP3
#define __F15BP0 C1BUFPNT4bits.F15BP0
#define __F15BP1 C1BUFPNT4bits.F15BP1
#define __F15BP2 C1BUFPNT4bits.F15BP2
#define __F15BP3 C1BUFPNT4bits.F15BP3

/* C1RXOVF1 */
#define __RXOVF0 C1RXOVF1bits.RXOVF0
#define __RXOVF1 C1RXOVF1bits.RXOVF1
#define __RXOVF2 C1RXOVF1bits.RXOVF2
#define __RXOVF3 C1RXOVF1bits.RXOVF3
#define __RXOVF4 C1RXOVF1bits.RXOVF4
#define __RXOVF5 C1RXOVF1bits.RXOVF5
#define __RXOVF6 C1RXOVF1bits.RXOVF6
#define __RXOVF7 C1RXOVF1bits.RXOVF7
#define __RXOVF8 C1RXOVF1bits.RXOVF8
#define __RXOVF9 C1RXOVF1bits.RXOVF9
#define __RXOVF10 C1RXOVF1bits.RXOVF10
#define __RXOVF11 C1RXOVF1bits.RXOVF11
#define __RXOVF12 C1RXOVF1bits.RXOVF12
#define __RXOVF13 C1RXOVF1bits.RXOVF13
#define __RXOVF14 C1RXOVF1bits.RXOVF14
#define __RXOVF15 C1RXOVF1bits.RXOVF15

/* C1RXOVF2 */
#define __RXOVF16 C1RXOVF2bits.RXOVF16
#define __RXOVF17 C1RXOVF2bits.RXOVF17
#define __RXOVF18 C1RXOVF2bits.RXOVF18
#define __RXOVF19 C1RXOVF2bits.RXOVF19
#define __RXOVF20 C1RXOVF2bits.RXOVF20
#define __RXOVF21 C1RXOVF2bits.RXOVF21
#define __RXOVF22 C1RXOVF2bits.RXOVF22
#define __RXOVF23 C1RXOVF2bits.RXOVF23
#define __RXOVF24 C1RXOVF2bits.RXOVF24
#define __RXOVF25 C1RXOVF2bits.RXOVF25
#define __RXOVF26 C1RXOVF2bits.RXOVF26
#define __RXOVF27 C1RXOVF2bits.RXOVF27
#define __RXOVF28 C1RXOVF2bits.RXOVF28
#define __RXOVF29 C1RXOVF2bits.RXOVF29
#define __RXOVF30 C1RXOVF2bits.RXOVF30
#define __RXOVF31 C1RXOVF2bits.RXOVF31

/* C1RXM0SID */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __MIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */

/* C1TR01CON */
#define __TX0PRI C1TR01CONbits.TX0PRI
#define __RTREN0 C1TR01CONbits.RTREN0
#define __TXREQ0 C1TR01CONbits.TXREQ0
#define __TXERR0 C1TR01CONbits.TXERR0
#define __TXLARB0 C1TR01CONbits.TXLARB0
#define __TXABT0 C1TR01CONbits.TXABT0
#define __TXEN0 C1TR01CONbits.TXEN0
#define __TX1PRI C1TR01CONbits.TX1PRI
#define __RTREN1 C1TR01CONbits.RTREN1
#define __TXREQ1 C1TR01CONbits.TXREQ1
#define __TXERR1 C1TR01CONbits.TXERR1
#define __TXLARB1 C1TR01CONbits.TXLARB1
#define __TXABT1 C1TR01CONbits.TXABT1
#define __TXEN1 C1TR01CONbits.TXEN1
#define __TX0PRI0 C1TR01CONbits.TX0PRI0
#define __TX0PRI1 C1TR01CONbits.TX0PRI1
#define __TX1PRI0 C1TR01CONbits.TX1PRI0
#define __TX1PRI1 C1TR01CONbits.TX1PRI1

/* C1RXM0EID */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */
/* Bitname __EID cannot be defined because it is used by more than one SFR */

/* C1TR23CON */
#define __TX2PRI C1TR23CONbits.TX2PRI
#define __RTREN2 C1TR23CONbits.RTREN2
#define __TXREQ2 C1TR23CONbits.TXREQ2
#define __TXERR2 C1TR23CONbits.TXERR2
#define __TXLARB2 C1TR23CONbits.TXLARB2
#define __TXABT2 C1TR23CONbits.TXABT2
#define __TXEN2 C1TR23CONbits.TXEN2
#define __TX3PRI C1TR23CONbits.TX3PRI
#define __RTREN3 C1TR23CONbits.RTREN3
#define __TXREQ3 C1TR23CONbits.TXREQ3
#define __TXERR3 C1TR23CONbits.TXERR3
#define __TXLARB3 C1TR23CONbits.TXLARB3
#define __TXABT3 C1TR23CONbits.TXABT3
#define __TXEN3 C1TR23CONbits.TXEN3
#define __TX2PRI0 C1TR23CONbits.TX2PRI0
#define __TX2PRI1 C1TR23CONbits.TX2PRI1
#define __TX3PRI0 C1TR23CONbits.TX3PRI0
#define __TX3PRI1 C1TR23CONbits.TX3PRI1

/* C1RXM1SID */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __MIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */

/* C1TR45CON */
#define __TX4PRI C1TR45CONbits.TX4PRI
#define __RTREN4 C1TR45CONbits.RTREN4
#define __TXREQ4 C1TR45CONbits.TXREQ4
#define __TXERR4 C1TR45CONbits.TXERR4
#define __TXLARB4 C1TR45CONbits.TXLARB4
#define __TXABT4 C1TR45CONbits.TXABT4
#define __TXEN4 C1TR45CONbits.TXEN4
#define __TX5PRI C1TR45CONbits.TX5PRI
#define __RTREN5 C1TR45CONbits.RTREN5
#define __TXREQ5 C1TR45CONbits.TXREQ5
#define __TXERR5 C1TR45CONbits.TXERR5
#define __TXLARB5 C1TR45CONbits.TXLARB5
#define __TXABT5 C1TR45CONbits.TXABT5
#define __TXEN5 C1TR45CONbits.TXEN5
#define __TX4PRI0 C1TR45CONbits.TX4PRI0
#define __TX4PRI1 C1TR45CONbits.TX4PRI1
#define __TX5PRI0 C1TR45CONbits.TX5PRI0
#define __TX5PRI1 C1TR45CONbits.TX5PRI1

/* C1RXM1EID */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */
/* Bitname __EID cannot be defined because it is used by more than one SFR */

/* C1TR67CON */
#define __TX6PRI C1TR67CONbits.TX6PRI
#define __RTREN6 C1TR67CONbits.RTREN6
#define __TXREQ6 C1TR67CONbits.TXREQ6
#define __TXERR6 C1TR67CONbits.TXERR6
#define __TXLARB6 C1TR67CONbits.TXLARB6
#define __TXABT6 C1TR67CONbits.TXABT6
#define __TXEN6 C1TR67CONbits.TXEN6
#define __TX7PRI C1TR67CONbits.TX7PRI
#define __RTREN7 C1TR67CONbits.RTREN7
#define __TXREQ7 C1TR67CONbits.TXREQ7
#define __TXERR7 C1TR67CONbits.TXERR7
#define __TXLARB7 C1TR67CONbits.TXLARB7
#define __TXABT7 C1TR67CONbits.TXABT7
#define __TXEN7 C1TR67CONbits.TXEN7
#define __TX6PRI0 C1TR67CONbits.TX6PRI0
#define __TX6PRI1 C1TR67CONbits.TX6PRI1
#define __TX7PRI0 C1TR67CONbits.TX7PRI0
#define __TX7PRI1 C1TR67CONbits.TX7PRI1

/* C1RXM2SID */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __MIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */

/* C1RXM2EID */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */
/* Bitname __EID cannot be defined because it is used by more than one SFR */

/* C1RXF0SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF0EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF1SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF1EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF2SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF2EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF3SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF3EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF4SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF4EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF5SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF5EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF6SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF6EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF7SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF7EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF8SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF8EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF9SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF9EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF10SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF10EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF11SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF11EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF12SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF12EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF13SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF13EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF14SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF14EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF15SID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname __SID cannot be defined because it is used by more than one SFR */
/* Bitname __EID16 cannot be defined because it is used by more than one SFR */
/* Bitname __EID17 cannot be defined because it is used by more than one SFR */
/* Bitname __SID0 cannot be defined because it is used by more than one SFR */
/* Bitname __SID1 cannot be defined because it is used by more than one SFR */
/* Bitname __SID2 cannot be defined because it is used by more than one SFR */
/* Bitname __SID3 cannot be defined because it is used by more than one SFR */
/* Bitname __SID4 cannot be defined because it is used by more than one SFR */
/* Bitname __SID5 cannot be defined because it is used by more than one SFR */
/* Bitname __SID6 cannot be defined because it is used by more than one SFR */
/* Bitname __SID7 cannot be defined because it is used by more than one SFR */
/* Bitname __SID8 cannot be defined because it is used by more than one SFR */
/* Bitname __SID9 cannot be defined because it is used by more than one SFR */
/* Bitname __SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF15EID */
/* Bitname __EID cannot be defined because it is used by more than one SFR */
/* Bitname __EID0 cannot be defined because it is used by more than one SFR */
/* Bitname __EID1 cannot be defined because it is used by more than one SFR */
/* Bitname __EID2 cannot be defined because it is used by more than one SFR */
/* Bitname __EID3 cannot be defined because it is used by more than one SFR */
/* Bitname __EID4 cannot be defined because it is used by more than one SFR */
/* Bitname __EID5 cannot be defined because it is used by more than one SFR */
/* Bitname __EID6 cannot be defined because it is used by more than one SFR */
/* Bitname __EID7 cannot be defined because it is used by more than one SFR */
/* Bitname __EID8 cannot be defined because it is used by more than one SFR */
/* Bitname __EID9 cannot be defined because it is used by more than one SFR */
/* Bitname __EID10 cannot be defined because it is used by more than one SFR */
/* Bitname __EID11 cannot be defined because it is used by more than one SFR */
/* Bitname __EID12 cannot be defined because it is used by more than one SFR */
/* Bitname __EID13 cannot be defined because it is used by more than one SFR */
/* Bitname __EID14 cannot be defined because it is used by more than one SFR */
/* Bitname __EID15 cannot be defined because it is used by more than one SFR */

/* P2TCON */
/* Bitname __PTMOD cannot be defined because it is used by more than one SFR */
/* Bitname __PTCKPS cannot be defined because it is used by more than one SFR */
/* Bitname __PTOPS cannot be defined because it is used by more than one SFR */
/* Bitname __PTSIDL cannot be defined because it is used by more than one SFR */
/* Bitname __PTEN cannot be defined because it is used by more than one SFR */
/* Bitname __PTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname __PTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname __PTCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __PTCKPS1 cannot be defined because it is used by more than one SFR */
/* Bitname __PTOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __PTOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname __PTOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname __PTOPS3 cannot be defined because it is used by more than one SFR */

/* P2TMR */
/* Bitname __PTMR cannot be defined because it is used by more than one SFR */
/* Bitname __PTDIR cannot be defined because it is used by more than one SFR */

/* P2TPER */
/* Bitname __PTPER cannot be defined because it is used by more than one SFR */

/* P2SECMP */
/* Bitname __SEVTCMP cannot be defined because it is used by more than one SFR */
/* Bitname __SEVTDIR cannot be defined because it is used by more than one SFR */

/* PWM2CON1 */
/* Bitname __PEN1L cannot be defined because it is used by more than one SFR */
/* Bitname __PEN1H cannot be defined because it is used by more than one SFR */
/* Bitname __PMOD1 cannot be defined because it is used by more than one SFR */

/* PWM2CON2 */
/* Bitname __UDIS cannot be defined because it is used by more than one SFR */
/* Bitname __OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname __IUE cannot be defined because it is used by more than one SFR */
/* Bitname __SEVOPS cannot be defined because it is used by more than one SFR */
/* Bitname __SEVOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __SEVOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname __SEVOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname __SEVOPS3 cannot be defined because it is used by more than one SFR */

/* P2DTCON1 */
/* Bitname __DTA cannot be defined because it is used by more than one SFR */
/* Bitname __DTAPS cannot be defined because it is used by more than one SFR */
/* Bitname __DTB cannot be defined because it is used by more than one SFR */
/* Bitname __DTBPS cannot be defined because it is used by more than one SFR */
/* Bitname __DTA0 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA1 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA2 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA3 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA4 cannot be defined because it is used by more than one SFR */
/* Bitname __DTA5 cannot be defined because it is used by more than one SFR */
/* Bitname __DTAPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __DTAPS1 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB0 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB1 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB2 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB3 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB4 cannot be defined because it is used by more than one SFR */
/* Bitname __DTB5 cannot be defined because it is used by more than one SFR */
/* Bitname __DTBPS0 cannot be defined because it is used by more than one SFR */
/* Bitname __DTBPS1 cannot be defined because it is used by more than one SFR */

/* P2DTCON2 */
/* Bitname __DTS1I cannot be defined because it is used by more than one SFR */
/* Bitname __DTS1A cannot be defined because it is used by more than one SFR */

/* P2FLTACON */
/* Bitname __FAEN1 cannot be defined because it is used by more than one SFR */
/* Bitname __FLTAM cannot be defined because it is used by more than one SFR */
/* Bitname __FAOV1L cannot be defined because it is used by more than one SFR */
/* Bitname __FAOV1H cannot be defined because it is used by more than one SFR */

/* P2OVDCON */
/* Bitname __POUT1L cannot be defined because it is used by more than one SFR */
/* Bitname __POUT1H cannot be defined because it is used by more than one SFR */
/* Bitname __POVD1L cannot be defined because it is used by more than one SFR */
/* Bitname __POVD1H cannot be defined because it is used by more than one SFR */

/* PMCON */
#define __RDSP PMCONbits.RDSP
#define __WRSP PMCONbits.WRSP
#define __BEP PMCONbits.BEP
#define __CS1P PMCONbits.CS1P
#define __ALP PMCONbits.ALP
#define __CSF PMCONbits.CSF
#define __PTRDEN PMCONbits.PTRDEN
#define __PTWREN PMCONbits.PTWREN
#define __PTBEEN PMCONbits.PTBEEN
#define __ADRMUX PMCONbits.ADRMUX
#define __PSIDL PMCONbits.PSIDL
#define __PMPEN PMCONbits.PMPEN
#define __CSF0 PMCONbits.CSF0
#define __CSF1 PMCONbits.CSF1
#define __ADRMUX0 PMCONbits.ADRMUX0
#define __ADRMUX1 PMCONbits.ADRMUX1

/* PMMODE */
#define __WAITE PMMODEbits.WAITE
#define __WAITM PMMODEbits.WAITM
#define __WAITB PMMODEbits.WAITB
/* Bitname __MODE cannot be defined because it is used by more than one SFR */
/* Bitname __MODE16 cannot be defined because it is used by more than one SFR */
#define __INCM PMMODEbits.INCM
#define __IRQM PMMODEbits.IRQM
#define __BUSY PMMODEbits.BUSY
#define __WAITE0 PMMODEbits.WAITE0
#define __WAITE1 PMMODEbits.WAITE1
#define __WAITM0 PMMODEbits.WAITM0
#define __WAITM1 PMMODEbits.WAITM1
#define __WAITM2 PMMODEbits.WAITM2
#define __WAITM3 PMMODEbits.WAITM3
#define __WAITB0 PMMODEbits.WAITB0
#define __WAITB1 PMMODEbits.WAITB1
/* Bitname __MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname __MODE1 cannot be defined because it is used by more than one SFR */
#define __INCM0 PMMODEbits.INCM0
#define __INCM1 PMMODEbits.INCM1
#define __IRQM0 PMMODEbits.IRQM0
#define __IRQM1 PMMODEbits.IRQM1

/* PMADDR */
#define __ADDR PMADDRbits.ADDR
#define __CS1 PMADDRbits.CS1
#define __ADDR15 PMADDRbits.ADDR15
#define __ADDR0 PMADDRbits.ADDR0
#define __ADDR1 PMADDRbits.ADDR1
#define __ADDR2 PMADDRbits.ADDR2
#define __ADDR3 PMADDRbits.ADDR3
#define __ADDR4 PMADDRbits.ADDR4
#define __ADDR5 PMADDRbits.ADDR5
#define __ADDR6 PMADDRbits.ADDR6
#define __ADDR7 PMADDRbits.ADDR7
#define __ADDR8 PMADDRbits.ADDR8
#define __ADDR9 PMADDRbits.ADDR9
#define __ADDR10 PMADDRbits.ADDR10
#define __ADDR11 PMADDRbits.ADDR11
#define __ADDR12 PMADDRbits.ADDR12
#define __ADDR13 PMADDRbits.ADDR13

/* PMAEN */
/* Bitname __PTEN cannot be defined because it is used by more than one SFR */
#define __PTEN14 PMAENbits.PTEN14
#define __PTEN0 PMAENbits.PTEN0
#define __PTEN1 PMAENbits.PTEN1
#define __PTEN2 PMAENbits.PTEN2
#define __PTEN3 PMAENbits.PTEN3
#define __PTEN4 PMAENbits.PTEN4
#define __PTEN5 PMAENbits.PTEN5
#define __PTEN6 PMAENbits.PTEN6
#define __PTEN7 PMAENbits.PTEN7
#define __PTEN8 PMAENbits.PTEN8
#define __PTEN9 PMAENbits.PTEN9
#define __PTEN10 PMAENbits.PTEN10

/* PMSTAT */
#define __OB0E PMSTATbits.OB0E
#define __OB1E PMSTATbits.OB1E
#define __OB2E PMSTATbits.OB2E
#define __OB3E PMSTATbits.OB3E
#define __OBUF PMSTATbits.OBUF
#define __OBE PMSTATbits.OBE
#define __IB0F PMSTATbits.IB0F
#define __IB1F PMSTATbits.IB1F
#define __IB2F PMSTATbits.IB2F
#define __IB3F PMSTATbits.IB3F
#define __IBOV PMSTATbits.IBOV
#define __IBF PMSTATbits.IBF

/* ALCFGRPT */
#define __ARPT ALCFGRPTbits.ARPT
#define __ALRMPTR ALCFGRPTbits.ALRMPTR
#define __AMASK ALCFGRPTbits.AMASK
#define __CHIME ALCFGRPTbits.CHIME
#define __ALRMEN ALCFGRPTbits.ALRMEN
#define __ARPT0 ALCFGRPTbits.ARPT0
#define __ARPT1 ALCFGRPTbits.ARPT1
#define __ARPT2 ALCFGRPTbits.ARPT2
#define __ARPT3 ALCFGRPTbits.ARPT3
#define __ARPT4 ALCFGRPTbits.ARPT4
#define __ARPT5 ALCFGRPTbits.ARPT5
#define __ARPT6 ALCFGRPTbits.ARPT6
#define __ARPT7 ALCFGRPTbits.ARPT7
#define __ALRMPTR0 ALCFGRPTbits.ALRMPTR0
#define __ALRMPTR1 ALCFGRPTbits.ALRMPTR1
#define __AMASK0 ALCFGRPTbits.AMASK0
#define __AMASK1 ALCFGRPTbits.AMASK1
#define __AMASK2 ALCFGRPTbits.AMASK2
#define __AMASK3 ALCFGRPTbits.AMASK3

/* RCFGCAL */
#define __CAL RCFGCALbits.CAL
#define __RTCPTR RCFGCALbits.RTCPTR
#define __RTCOE RCFGCALbits.RTCOE
#define __HALFSEC RCFGCALbits.HALFSEC
#define __RTCSYNC RCFGCALbits.RTCSYNC
#define __RTCWREN RCFGCALbits.RTCWREN
#define __RTCEN RCFGCALbits.RTCEN
#define __CAL0 RCFGCALbits.CAL0
#define __CAL1 RCFGCALbits.CAL1
#define __CAL2 RCFGCALbits.CAL2
#define __CAL3 RCFGCALbits.CAL3
#define __CAL4 RCFGCALbits.CAL4
#define __CAL5 RCFGCALbits.CAL5
#define __CAL6 RCFGCALbits.CAL6
#define __CAL7 RCFGCALbits.CAL7
#define __RTCPTR0 RCFGCALbits.RTCPTR0
#define __RTCPTR1 RCFGCALbits.RTCPTR1

/* CMCON */
#define __C1POS CMCONbits.C1POS
#define __C1NEG CMCONbits.C1NEG
#define __C2POS CMCONbits.C2POS
#define __C2NEG CMCONbits.C2NEG
#define __C1INV CMCONbits.C1INV
#define __C2INV CMCONbits.C2INV
#define __C1OUT CMCONbits.C1OUT
#define __C2OUT CMCONbits.C2OUT
#define __C1OUTEN CMCONbits.C1OUTEN
#define __C2OUTEN CMCONbits.C2OUTEN
#define __C1EN CMCONbits.C1EN
#define __C2EN CMCONbits.C2EN
#define __C1EVT CMCONbits.C1EVT
#define __C2EVT CMCONbits.C2EVT
#define __CMIDL CMCONbits.CMIDL

/* CVRCON */
#define __CVR CVRCONbits.CVR
#define __CVRSS CVRCONbits.CVRSS
#define __CVRR CVRCONbits.CVRR
#define __CVROE CVRCONbits.CVROE
#define __CVREN CVRCONbits.CVREN
#define __CVR0 CVRCONbits.CVR0
#define __CVR1 CVRCONbits.CVR1
#define __CVR2 CVRCONbits.CVR2
#define __CVR3 CVRCONbits.CVR3

/* CRCCON */
#define __PLEN CRCCONbits.PLEN
#define __CRCGO CRCCONbits.CRCGO
#define __CRCMPT CRCCONbits.CRCMPT
#define __CRCFUL CRCCONbits.CRCFUL
#define __VWORD CRCCONbits.VWORD
/* Bitname __CSIDL cannot be defined because it is used by more than one SFR */
#define __PLEN0 CRCCONbits.PLEN0
#define __PLEN1 CRCCONbits.PLEN1
#define __PLEN2 CRCCONbits.PLEN2
#define __PLEN3 CRCCONbits.PLEN3
#define __VWORD0 CRCCONbits.VWORD0
#define __VWORD1 CRCCONbits.VWORD1
#define __VWORD2 CRCCONbits.VWORD2
#define __VWORD3 CRCCONbits.VWORD3
#define __VWORD4 CRCCONbits.VWORD4

/* RPINR0 */
#define __INT1R RPINR0bits.INT1R
#define __INT1R0 RPINR0bits.INT1R0
#define __INT1R1 RPINR0bits.INT1R1
#define __INT1R2 RPINR0bits.INT1R2
#define __INT1R3 RPINR0bits.INT1R3
#define __INT1R4 RPINR0bits.INT1R4

/* RPINR1 */
#define __INT2R RPINR1bits.INT2R
#define __INT2R0 RPINR1bits.INT2R0
#define __INT2R1 RPINR1bits.INT2R1
#define __INT2R2 RPINR1bits.INT2R2
#define __INT2R3 RPINR1bits.INT2R3
#define __INT2R4 RPINR1bits.INT2R4

/* RPINR3 */
#define __T2CKR RPINR3bits.T2CKR
#define __T3CKR RPINR3bits.T3CKR
#define __T2CKR0 RPINR3bits.T2CKR0
#define __T2CKR1 RPINR3bits.T2CKR1
#define __T2CKR2 RPINR3bits.T2CKR2
#define __T2CKR3 RPINR3bits.T2CKR3
#define __T2CKR4 RPINR3bits.T2CKR4
#define __T3CKR0 RPINR3bits.T3CKR0
#define __T3CKR1 RPINR3bits.T3CKR1
#define __T3CKR2 RPINR3bits.T3CKR2
#define __T3CKR3 RPINR3bits.T3CKR3
#define __T3CKR4 RPINR3bits.T3CKR4

/* RPINR4 */
#define __T4CKR RPINR4bits.T4CKR
#define __T5CKR RPINR4bits.T5CKR
#define __T4CKR0 RPINR4bits.T4CKR0
#define __T4CKR1 RPINR4bits.T4CKR1
#define __T4CKR2 RPINR4bits.T4CKR2
#define __T4CKR3 RPINR4bits.T4CKR3
#define __T4CKR4 RPINR4bits.T4CKR4
#define __T5CKR0 RPINR4bits.T5CKR0
#define __T5CKR1 RPINR4bits.T5CKR1
#define __T5CKR2 RPINR4bits.T5CKR2
#define __T5CKR3 RPINR4bits.T5CKR3
#define __T5CKR4 RPINR4bits.T5CKR4

/* RPINR7 */
#define __IC1R RPINR7bits.IC1R
#define __IC2R RPINR7bits.IC2R
#define __IC1R0 RPINR7bits.IC1R0
#define __IC1R1 RPINR7bits.IC1R1
#define __IC1R2 RPINR7bits.IC1R2
#define __IC1R3 RPINR7bits.IC1R3
#define __IC1R4 RPINR7bits.IC1R4
#define __IC2R0 RPINR7bits.IC2R0
#define __IC2R1 RPINR7bits.IC2R1
#define __IC2R2 RPINR7bits.IC2R2
#define __IC2R3 RPINR7bits.IC2R3
#define __IC2R4 RPINR7bits.IC2R4

/* RPINR10 */
#define __IC7R RPINR10bits.IC7R
#define __IC8R RPINR10bits.IC8R
#define __IC7R0 RPINR10bits.IC7R0
#define __IC7R1 RPINR10bits.IC7R1
#define __IC7R2 RPINR10bits.IC7R2
#define __IC7R3 RPINR10bits.IC7R3
#define __IC7R4 RPINR10bits.IC7R4
#define __IC8R0 RPINR10bits.IC8R0
#define __IC8R1 RPINR10bits.IC8R1
#define __IC8R2 RPINR10bits.IC8R2
#define __IC8R3 RPINR10bits.IC8R3
#define __IC8R4 RPINR10bits.IC8R4

/* RPINR11 */
#define __OCFAR RPINR11bits.OCFAR
#define __OCFAR0 RPINR11bits.OCFAR0
#define __OCFAR1 RPINR11bits.OCFAR1
#define __OCFAR2 RPINR11bits.OCFAR2
#define __OCFAR3 RPINR11bits.OCFAR3
#define __OCFAR4 RPINR11bits.OCFAR4

/* RPINR12 */
#define __FLTA1R RPINR12bits.FLTA1R
#define __FLTA1R0 RPINR12bits.FLTA1R0
#define __FLTA1R1 RPINR12bits.FLTA1R1
#define __FLTA1R2 RPINR12bits.FLTA1R2
#define __FLTA1R3 RPINR12bits.FLTA1R3
#define __FLTA1R4 RPINR12bits.FLTA1R4

/* RPINR13 */
#define __FLTA2R RPINR13bits.FLTA2R
#define __FLTA2R0 RPINR13bits.FLTA2R0
#define __FLTA2R1 RPINR13bits.FLTA2R1
#define __FLTA2R2 RPINR13bits.FLTA2R2
#define __FLTA2R3 RPINR13bits.FLTA2R3
#define __FLTA2R4 RPINR13bits.FLTA2R4

/* RPINR14 */
#define __QEA1R RPINR14bits.QEA1R
#define __QEB1R RPINR14bits.QEB1R
#define __QEA1R0 RPINR14bits.QEA1R0
#define __QEA1R1 RPINR14bits.QEA1R1
#define __QEA1R2 RPINR14bits.QEA1R2
#define __QEA1R3 RPINR14bits.QEA1R3
#define __QEA1R4 RPINR14bits.QEA1R4
#define __QEB1R0 RPINR14bits.QEB1R0
#define __QEB1R1 RPINR14bits.QEB1R1
#define __QEB1R2 RPINR14bits.QEB1R2
#define __QEB1R3 RPINR14bits.QEB1R3
#define __QEB1R4 RPINR14bits.QEB1R4

/* RPINR15 */
#define __INDX1R RPINR15bits.INDX1R
#define __INDX1R0 RPINR15bits.INDX1R0
#define __INDX1R1 RPINR15bits.INDX1R1
#define __INDX1R2 RPINR15bits.INDX1R2
#define __INDX1R3 RPINR15bits.INDX1R3
#define __INDX1R4 RPINR15bits.INDX1R4

/* RPINR16 */
#define __QEA2R RPINR16bits.QEA2R
#define __QEB2R RPINR16bits.QEB2R
#define __QEA2R0 RPINR16bits.QEA2R0
#define __QEA2R1 RPINR16bits.QEA2R1
#define __QEA2R2 RPINR16bits.QEA2R2
#define __QEA2R3 RPINR16bits.QEA2R3
#define __QEA2R4 RPINR16bits.QEA2R4
#define __QEB2R0 RPINR16bits.QEB2R0
#define __QEB2R1 RPINR16bits.QEB2R1
#define __QEB2R2 RPINR16bits.QEB2R2
#define __QEB2R3 RPINR16bits.QEB2R3
#define __QEB2R4 RPINR16bits.QEB2R4

/* RPINR17 */
#define __INDX2R RPINR17bits.INDX2R
#define __INDX2R0 RPINR17bits.INDX2R0
#define __INDX2R1 RPINR17bits.INDX2R1
#define __INDX2R2 RPINR17bits.INDX2R2
#define __INDX2R3 RPINR17bits.INDX2R3
#define __INDX2R4 RPINR17bits.INDX2R4

/* RPINR18 */
#define __U1RXR RPINR18bits.U1RXR
#define __U1CTSR RPINR18bits.U1CTSR
#define __U1RXR0 RPINR18bits.U1RXR0
#define __U1RXR1 RPINR18bits.U1RXR1
#define __U1RXR2 RPINR18bits.U1RXR2
#define __U1RXR3 RPINR18bits.U1RXR3
#define __U1RXR4 RPINR18bits.U1RXR4
#define __U1CTSR0 RPINR18bits.U1CTSR0
#define __U1CTSR1 RPINR18bits.U1CTSR1
#define __U1CTSR2 RPINR18bits.U1CTSR2
#define __U1CTSR3 RPINR18bits.U1CTSR3
#define __U1CTSR4 RPINR18bits.U1CTSR4

/* RPINR19 */
#define __U2RXR RPINR19bits.U2RXR
#define __U2CTSR RPINR19bits.U2CTSR
#define __U2RXR0 RPINR19bits.U2RXR0
#define __U2RXR1 RPINR19bits.U2RXR1
#define __U2RXR2 RPINR19bits.U2RXR2
#define __U2RXR3 RPINR19bits.U2RXR3
#define __U2RXR4 RPINR19bits.U2RXR4
#define __U2CTSR0 RPINR19bits.U2CTSR0
#define __U2CTSR1 RPINR19bits.U2CTSR1
#define __U2CTSR2 RPINR19bits.U2CTSR2
#define __U2CTSR3 RPINR19bits.U2CTSR3
#define __U2CTSR4 RPINR19bits.U2CTSR4

/* RPINR20 */
#define __SDI1R RPINR20bits.SDI1R
#define __SCK1R RPINR20bits.SCK1R
#define __SDI1R0 RPINR20bits.SDI1R0
#define __SDI1R1 RPINR20bits.SDI1R1
#define __SDI1R2 RPINR20bits.SDI1R2
#define __SDI1R3 RPINR20bits.SDI1R3
#define __SDI1R4 RPINR20bits.SDI1R4
#define __SCK1R0 RPINR20bits.SCK1R0
#define __SCK1R1 RPINR20bits.SCK1R1
#define __SCK1R2 RPINR20bits.SCK1R2
#define __SCK1R3 RPINR20bits.SCK1R3
#define __SCK1R4 RPINR20bits.SCK1R4

/* RPINR21 */
#define __SS1R RPINR21bits.SS1R
#define __SS1R0 RPINR21bits.SS1R0
#define __SS1R1 RPINR21bits.SS1R1
#define __SS1R2 RPINR21bits.SS1R2
#define __SS1R3 RPINR21bits.SS1R3
#define __SS1R4 RPINR21bits.SS1R4

/* RPINR22 */
#define __SDI2R RPINR22bits.SDI2R
#define __SCK2R RPINR22bits.SCK2R
#define __SDI2R0 RPINR22bits.SDI2R0
#define __SDI2R1 RPINR22bits.SDI2R1
#define __SDI2R2 RPINR22bits.SDI2R2
#define __SDI2R3 RPINR22bits.SDI2R3
#define __SDI2R4 RPINR22bits.SDI2R4
#define __SCK2R0 RPINR22bits.SCK2R0
#define __SCK2R1 RPINR22bits.SCK2R1
#define __SCK2R2 RPINR22bits.SCK2R2
#define __SCK2R3 RPINR22bits.SCK2R3
#define __SCK2R4 RPINR22bits.SCK2R4

/* RPINR23 */
#define __SS2R RPINR23bits.SS2R
#define __SS2R0 RPINR23bits.SS2R0
#define __SS2R1 RPINR23bits.SS2R1
#define __SS2R2 RPINR23bits.SS2R2
#define __SS2R3 RPINR23bits.SS2R3
#define __SS2R4 RPINR23bits.SS2R4

/* RPINR26 */
#define __C1RXR RPINR26bits.C1RXR
#define __C1RXR0 RPINR26bits.C1RXR0
#define __C1RXR1 RPINR26bits.C1RXR1
#define __C1RXR2 RPINR26bits.C1RXR2
#define __C1RXR3 RPINR26bits.C1RXR3
#define __C1RXR4 RPINR26bits.C1RXR4

/* RPOR0 */
#define __RP0R RPOR0bits.RP0R
#define __RP1R RPOR0bits.RP1R
#define __RP0R0 RPOR0bits.RP0R0
#define __RP0R1 RPOR0bits.RP0R1
#define __RP0R2 RPOR0bits.RP0R2
#define __RP0R3 RPOR0bits.RP0R3
#define __RP0R4 RPOR0bits.RP0R4
#define __RP1R0 RPOR0bits.RP1R0
#define __RP1R1 RPOR0bits.RP1R1
#define __RP1R2 RPOR0bits.RP1R2
#define __RP1R3 RPOR0bits.RP1R3
#define __RP1R4 RPOR0bits.RP1R4

/* RPOR1 */
#define __RP2R RPOR1bits.RP2R
#define __RP3R RPOR1bits.RP3R
#define __RP2R0 RPOR1bits.RP2R0
#define __RP2R1 RPOR1bits.RP2R1
#define __RP2R2 RPOR1bits.RP2R2
#define __RP2R3 RPOR1bits.RP2R3
#define __RP2R4 RPOR1bits.RP2R4
#define __RP3R0 RPOR1bits.RP3R0
#define __RP3R1 RPOR1bits.RP3R1
#define __RP3R2 RPOR1bits.RP3R2
#define __RP3R3 RPOR1bits.RP3R3
#define __RP3R4 RPOR1bits.RP3R4

/* RPOR2 */
#define __RP4R RPOR2bits.RP4R
#define __RP5R RPOR2bits.RP5R
#define __RP4R0 RPOR2bits.RP4R0
#define __RP4R1 RPOR2bits.RP4R1
#define __RP4R2 RPOR2bits.RP4R2
#define __RP4R3 RPOR2bits.RP4R3
#define __RP4R4 RPOR2bits.RP4R4
#define __RP5R0 RPOR2bits.RP5R0
#define __RP5R1 RPOR2bits.RP5R1
#define __RP5R2 RPOR2bits.RP5R2
#define __RP5R3 RPOR2bits.RP5R3
#define __RP5R4 RPOR2bits.RP5R4

/* RPOR3 */
#define __RP6R RPOR3bits.RP6R
#define __RP7R RPOR3bits.RP7R
#define __RP6R0 RPOR3bits.RP6R0
#define __RP6R1 RPOR3bits.RP6R1
#define __RP6R2 RPOR3bits.RP6R2
#define __RP6R3 RPOR3bits.RP6R3
#define __RP6R4 RPOR3bits.RP6R4
#define __RP7R0 RPOR3bits.RP7R0
#define __RP7R1 RPOR3bits.RP7R1
#define __RP7R2 RPOR3bits.RP7R2
#define __RP7R3 RPOR3bits.RP7R3
#define __RP7R4 RPOR3bits.RP7R4

/* RPOR4 */
#define __RP8R RPOR4bits.RP8R
#define __RP9R RPOR4bits.RP9R
#define __RP8R0 RPOR4bits.RP8R0
#define __RP8R1 RPOR4bits.RP8R1
#define __RP8R2 RPOR4bits.RP8R2
#define __RP8R3 RPOR4bits.RP8R3
#define __RP8R4 RPOR4bits.RP8R4
#define __RP9R0 RPOR4bits.RP9R0
#define __RP9R1 RPOR4bits.RP9R1
#define __RP9R2 RPOR4bits.RP9R2
#define __RP9R3 RPOR4bits.RP9R3
#define __RP9R4 RPOR4bits.RP9R4

/* RPOR5 */
#define __RP10R RPOR5bits.RP10R
#define __RP11R RPOR5bits.RP11R
#define __RP10R0 RPOR5bits.RP10R0
#define __RP10R1 RPOR5bits.RP10R1
#define __RP10R2 RPOR5bits.RP10R2
#define __RP10R3 RPOR5bits.RP10R3
#define __RP10R4 RPOR5bits.RP10R4
#define __RP11R0 RPOR5bits.RP11R0
#define __RP11R1 RPOR5bits.RP11R1
#define __RP11R2 RPOR5bits.RP11R2
#define __RP11R3 RPOR5bits.RP11R3
#define __RP11R4 RPOR5bits.RP11R4

/* RPOR6 */
#define __RP12R RPOR6bits.RP12R
#define __RP13R RPOR6bits.RP13R
#define __RP12R0 RPOR6bits.RP12R0
#define __RP12R1 RPOR6bits.RP12R1
#define __RP12R2 RPOR6bits.RP12R2
#define __RP12R3 RPOR6bits.RP12R3
#define __RP12R4 RPOR6bits.RP12R4
#define __RP13R0 RPOR6bits.RP13R0
#define __RP13R1 RPOR6bits.RP13R1
#define __RP13R2 RPOR6bits.RP13R2
#define __RP13R3 RPOR6bits.RP13R3
#define __RP13R4 RPOR6bits.RP13R4

/* RPOR7 */
#define __RP14R RPOR7bits.RP14R
#define __RP15R RPOR7bits.RP15R
#define __RP14R0 RPOR7bits.RP14R0
#define __RP14R1 RPOR7bits.RP14R1
#define __RP14R2 RPOR7bits.RP14R2
#define __RP14R3 RPOR7bits.RP14R3
#define __RP14R4 RPOR7bits.RP14R4
#define __RP15R0 RPOR7bits.RP15R0
#define __RP15R1 RPOR7bits.RP15R1
#define __RP15R2 RPOR7bits.RP15R2
#define __RP15R3 RPOR7bits.RP15R3
#define __RP15R4 RPOR7bits.RP15R4

/* RPOR8 */
#define __RP16R RPOR8bits.RP16R
#define __RP17R RPOR8bits.RP17R
#define __RP16R0 RPOR8bits.RP16R0
#define __RP16R1 RPOR8bits.RP16R1
#define __RP16R2 RPOR8bits.RP16R2
#define __RP16R3 RPOR8bits.RP16R3
#define __RP16R4 RPOR8bits.RP16R4
#define __RP17R0 RPOR8bits.RP17R0
#define __RP17R1 RPOR8bits.RP17R1
#define __RP17R2 RPOR8bits.RP17R2
#define __RP17R3 RPOR8bits.RP17R3
#define __RP17R4 RPOR8bits.RP17R4

/* RPOR9 */
#define __RP18R RPOR9bits.RP18R
#define __RP19R RPOR9bits.RP19R
#define __RP18R0 RPOR9bits.RP18R0
#define __RP18R1 RPOR9bits.RP18R1
#define __RP18R2 RPOR9bits.RP18R2
#define __RP18R3 RPOR9bits.RP18R3
#define __RP18R4 RPOR9bits.RP18R4
#define __RP19R0 RPOR9bits.RP19R0
#define __RP19R1 RPOR9bits.RP19R1
#define __RP19R2 RPOR9bits.RP19R2
#define __RP19R3 RPOR9bits.RP19R3
#define __RP19R4 RPOR9bits.RP19R4

/* RPOR10 */
#define __RP20R RPOR10bits.RP20R
#define __RP21R RPOR10bits.RP21R
#define __RP20R0 RPOR10bits.RP20R0
#define __RP20R1 RPOR10bits.RP20R1
#define __RP20R2 RPOR10bits.RP20R2
#define __RP20R3 RPOR10bits.RP20R3
#define __RP20R4 RPOR10bits.RP20R4
#define __RP21R0 RPOR10bits.RP21R0
#define __RP21R1 RPOR10bits.RP21R1
#define __RP21R2 RPOR10bits.RP21R2
#define __RP21R3 RPOR10bits.RP21R3
#define __RP21R4 RPOR10bits.RP21R4

/* RPOR11 */
#define __RP22R RPOR11bits.RP22R
#define __RP23R RPOR11bits.RP23R
#define __RP22R0 RPOR11bits.RP22R0
#define __RP22R1 RPOR11bits.RP22R1
#define __RP22R2 RPOR11bits.RP22R2
#define __RP22R3 RPOR11bits.RP22R3
#define __RP22R4 RPOR11bits.RP22R4
#define __RP23R0 RPOR11bits.RP23R0
#define __RP23R1 RPOR11bits.RP23R1
#define __RP23R2 RPOR11bits.RP23R2
#define __RP23R3 RPOR11bits.RP23R3
#define __RP23R4 RPOR11bits.RP23R4

/* RPOR12 */
#define __RP24R RPOR12bits.RP24R
#define __RP25R RPOR12bits.RP25R
#define __RP24R0 RPOR12bits.RP24R0
#define __RP24R1 RPOR12bits.RP24R1
#define __RP24R2 RPOR12bits.RP24R2
#define __RP24R3 RPOR12bits.RP24R3
#define __RP24R4 RPOR12bits.RP24R4
#define __RP25R0 RPOR12bits.RP25R0
#define __RP25R1 RPOR12bits.RP25R1
#define __RP25R2 RPOR12bits.RP25R2
#define __RP25R3 RPOR12bits.RP25R3
#define __RP25R4 RPOR12bits.RP25R4

/* RCON */
#define __POR RCONbits.POR
#define __BOR RCONbits.BOR
#define __IDLE RCONbits.IDLE
#define __SLEEP RCONbits.SLEEP
#define __WDTO RCONbits.WDTO
#define __SWDTEN RCONbits.SWDTEN
#define __SWR RCONbits.SWR
#define __EXTR RCONbits.EXTR
#define __VREGS RCONbits.VREGS
#define __CM RCONbits.CM
#define __IOPUWR RCONbits.IOPUWR
#define __TRAPR RCONbits.TRAPR

/* OSCCON */
#define __OSWEN OSCCONbits.OSWEN
#define __LPOSCEN OSCCONbits.LPOSCEN
#define __CF OSCCONbits.CF
#define __LOCK OSCCONbits.LOCK
#define __IOLOCK OSCCONbits.IOLOCK
#define __CLKLOCK OSCCONbits.CLKLOCK
#define __NOSC OSCCONbits.NOSC
#define __COSC OSCCONbits.COSC
#define __NOSC0 OSCCONbits.NOSC0
#define __NOSC1 OSCCONbits.NOSC1
#define __NOSC2 OSCCONbits.NOSC2
#define __COSC0 OSCCONbits.COSC0
#define __COSC1 OSCCONbits.COSC1
#define __COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define __PLLPRE CLKDIVbits.PLLPRE
#define __PLLPOST CLKDIVbits.PLLPOST
#define __FRCDIV CLKDIVbits.FRCDIV
#define __DOZEN CLKDIVbits.DOZEN
#define __DOZE CLKDIVbits.DOZE
#define __ROI CLKDIVbits.ROI
#define __PLLPRE0 CLKDIVbits.PLLPRE0
#define __PLLPRE1 CLKDIVbits.PLLPRE1
#define __PLLPRE2 CLKDIVbits.PLLPRE2
#define __PLLPRE3 CLKDIVbits.PLLPRE3
#define __PLLPRE4 CLKDIVbits.PLLPRE4
#define __PLLPOST0 CLKDIVbits.PLLPOST0
#define __PLLPOST1 CLKDIVbits.PLLPOST1
#define __FRCDIV0 CLKDIVbits.FRCDIV0
#define __FRCDIV1 CLKDIVbits.FRCDIV1
#define __FRCDIV2 CLKDIVbits.FRCDIV2
#define __DOZE0 CLKDIVbits.DOZE0
#define __DOZE1 CLKDIVbits.DOZE1
#define __DOZE2 CLKDIVbits.DOZE2

/* PLLFBD */
#define __PLLDIV PLLFBDbits.PLLDIV
#define __PLLDIV0 PLLFBDbits.PLLDIV0
#define __PLLDIV1 PLLFBDbits.PLLDIV1
#define __PLLDIV2 PLLFBDbits.PLLDIV2
#define __PLLDIV3 PLLFBDbits.PLLDIV3
#define __PLLDIV4 PLLFBDbits.PLLDIV4
#define __PLLDIV5 PLLFBDbits.PLLDIV5
#define __PLLDIV6 PLLFBDbits.PLLDIV6
#define __PLLDIV7 PLLFBDbits.PLLDIV7
#define __PLLDIV8 PLLFBDbits.PLLDIV8

/* OSCTUN */
#define __TUN OSCTUNbits.TUN
#define __TUN0 OSCTUNbits.TUN0
#define __TUN1 OSCTUNbits.TUN1
#define __TUN2 OSCTUNbits.TUN2
#define __TUN3 OSCTUNbits.TUN3
#define __TUN4 OSCTUNbits.TUN4
#define __TUN5 OSCTUNbits.TUN5

/* ACLKCON */
#define __ASRCSEL ACLKCONbits.ASRCSEL
#define __APSTSCLR ACLKCONbits.APSTSCLR
#define __AOSCMD ACLKCONbits.AOSCMD
#define __SELACLK ACLKCONbits.SELACLK
#define __APSTSCLR0 ACLKCONbits.APSTSCLR0
#define __APSTSCLR1 ACLKCONbits.APSTSCLR1
#define __APSTSCLR2 ACLKCONbits.APSTSCLR2
#define __AOSCMD0 ACLKCONbits.AOSCMD0
#define __AOSCMD1 ACLKCONbits.AOSCMD1

/* BSRAM */
#define __RL__BSR BSRAMbits.RL__BSR
#define __IR__BSR BSRAMbits.IR__BSR
#define __IW__BSR BSRAMbits.IW__BSR

/* SSRAM */
#define __RL__SSR SSRAMbits.RL__SSR
#define __IR__SSR SSRAMbits.IR__SSR
#define __IW__SSR SSRAMbits.IW__SSR

/* NVMCON */
#define __NVMOP NVMCONbits.NVMOP
#define __ERASE NVMCONbits.ERASE
#define __WRERR NVMCONbits.WRERR
#define __WREN NVMCONbits.WREN
#define __WR NVMCONbits.WR
#define __NVMOP0 NVMCONbits.NVMOP0
#define __NVMOP1 NVMCONbits.NVMOP1
#define __NVMOP2 NVMCONbits.NVMOP2
#define __NVMOP3 NVMCONbits.NVMOP3

/* PMD1 */
#define __AD1MD PMD1bits.AD1MD
#define __C1MD PMD1bits.C1MD
#define __SPI1MD PMD1bits.SPI1MD
#define __SPI2MD PMD1bits.SPI2MD
#define __U1MD PMD1bits.U1MD
#define __U2MD PMD1bits.U2MD
#define __I2C1MD PMD1bits.I2C1MD
#define __PWM1MD PMD1bits.PWM1MD
#define __QEI1MD PMD1bits.QEI1MD
#define __T1MD PMD1bits.T1MD
#define __T2MD PMD1bits.T2MD
#define __T3MD PMD1bits.T3MD
#define __T4MD PMD1bits.T4MD
#define __T5MD PMD1bits.T5MD

/* PMD2 */
#define __OC1MD PMD2bits.OC1MD
#define __OC2MD PMD2bits.OC2MD
#define __OC3MD PMD2bits.OC3MD
#define __OC4MD PMD2bits.OC4MD
#define __IC1MD PMD2bits.IC1MD
#define __IC2MD PMD2bits.IC2MD
#define __IC7MD PMD2bits.IC7MD
#define __IC8MD PMD2bits.IC8MD

/* PMD3 */
#define __PWM2MD PMD3bits.PWM2MD
#define __QEI2MD PMD3bits.QEI2MD
#define __DAC1MD PMD3bits.DAC1MD
#define __CRCMD PMD3bits.CRCMD
#define __PMPMD PMD3bits.PMPMD
#define __RTCCMD PMD3bits.RTCCMD
#define __CMPMD PMD3bits.CMPMD


/* ---------------------------------------------------------- */
/* Some useful macros for inline assembler instructions       */
/* ---------------------------------------------------------- */

//#define Nop()    ____builtin__nop()
#define Nop() _asm{ nop }

#define _ClrWdt() {____asm____ volatile ("clrwdt");}
#define _Sleep()  {____asm____ volatile ("pwrsav #0");}
#define _Idle()   {____asm____ volatile ("pwrsav #1");}

/*----------------------------------------------------------- */
/* Some useful macros for allocating data memory              */
/*----------------------------------------------------------- */

/* The following macros require an argument N that specifies  */
/* alignment. N must a power of two, minimum value = 2.       */
/* For example, to declare an uninitialized array in X memory */
/* that is aligned to a 32 byte address:                      */
/*                                                            */
/* int __XBSS(32) xbuf[16];                                    */
/*                                                            */
#define __XBSS(N)    ((space(xmemory),far,aligned(N)))
#define __XDATA(N)   ((space(xmemory),far,aligned(N)))
#define __YBSS(N)    ((space(ymemory),far,aligned(N)))
#define __YDATA(N)   ((space(ymemory),far,aligned(N)))

/* The following macros do not require an argument. They can  */
/* be used to locate a variable in persistent data memory or  */
/* in near data memory. For example, to declare two variables */
/* that retain their values across a device reset:            */
/*                                                            */
/* int __PERSISTENT var1,var2;                                 */
/*                                                            */
#define __PERSISTENT ((persistent))
#define __NEAR       ((near))

/* ---------------------------------------------------------- */
/* Some useful macros for declaring functions                 */
/* ---------------------------------------------------------- */

/* The following macros can be used to declare interrupt      */
/* service routines (ISRs). For example, to declare an ISR    */
/* for the timer1 interrupt:                                  */
/*                                                            */
/* void __ISR __T1Interrupt(void);                              */
/*                                                            */
/* To declare an ISR for the SPI1 interrupt with fast         */
/* context save:                                              */
/*                                                            */
/* void __ISRFAST __SPI1Interrupt(void);                        */
/*                                                            */
/* Note: ISRs will be installed into the interrupt vector     */
/* tables automatically if the reserved names listed in the   */
/* MPLAB C30 Compiler User's Guide (DS51284) are used.        */
/*                                                            */
#define __ISR ((interrupt))
#define __ISRFAST ((interrupt, shadow))

/* ---------------------------------------------------------- */
/* Some useful macros for changing the CPU IPL                */
/* ---------------------------------------------------------- */

/* The following macros can be used to modify the current CPU */
/* IPL. The definition of the macro may vary from device to   */
/* device.                                                    */
/*                                                            */
/* To safely set the CPU IPL, use SET__CPU__IPL(ipl); the       */
/* valid range of ipl is 0-7, it may be any expression.       */
/*                                                            */
/* SET__CPU__IPL(7);                                            */
/*                                                            */
/* To preserve the current IPL and save it use                */
/* SET__AND__SAVE__CPU__IPL(save__to, ipl); the valid range of ipl */
/* is 0-7 and may be any expression, save__to should denote    */
/* some temporary storage.                                    */
/*                                                            */
/* int old__ipl;                                               */
/*                                                            */
/* SET__AND__SAVE__CPU__IPL(old__ipl, 7);                          */
/*                                                            */
/* The IPL can be restored with RESTORE__CPU__IPL(saved__to)     */
/*                                                            */
/* RESTORE__CPU__IPL(old__ipl);                                  */

#define SET__CPU__IPL(ipl) {       \
	int DISI__save;                 \
	\
	DISI__save = DISICNT;           \
	asm volatile ("disi #0x3FFF"); \
	SRbits.IPL = ipl;              \
	____builtin__write__DISICNT(DISI__save); } (void)0;

#define SET__AND__SAVE__CPU__IPL(save__to, ipl) { \
	save__to = SRbits.IPL; \
	SET__CPU__IPL(ipl); } (void)0;

#define RESTORE__CPU__IPL(saved__to) SET__CPU__IPL(saved__to)

#define __SR__C__POSITION                           0x00000000
#define __SR__C__MASK                               0x00000001
#define __SR__C__LENGTH                             0x00000001

#define __SR__Z__POSITION                           0x00000001
#define __SR__Z__MASK                               0x00000002
#define __SR__Z__LENGTH                             0x00000001

#define __SR__OV__POSITION                          0x00000002
#define __SR__OV__MASK                              0x00000004
#define __SR__OV__LENGTH                            0x00000001

#define __SR__N__POSITION                           0x00000003
#define __SR__N__MASK                               0x00000008
#define __SR__N__LENGTH                             0x00000001

#define __SR__RA__POSITION                          0x00000004
#define __SR__RA__MASK                              0x00000010
#define __SR__RA__LENGTH                            0x00000001

#define __SR__IPL__POSITION                         0x00000005
#define __SR__IPL__MASK                             0x000000E0
#define __SR__IPL__LENGTH                           0x00000003

#define __SR__DC__POSITION                          0x00000008
#define __SR__DC__MASK                              0x00000100
#define __SR__DC__LENGTH                            0x00000001

#define __SR__DA__POSITION                          0x00000009
#define __SR__DA__MASK                              0x00000200
#define __SR__DA__LENGTH                            0x00000001

#define __SR__SAB__POSITION                         0x0000000A
#define __SR__SAB__MASK                             0x00000400
#define __SR__SAB__LENGTH                           0x00000001

#define __SR__OAB__POSITION                         0x0000000B
#define __SR__OAB__MASK                             0x00000800
#define __SR__OAB__LENGTH                           0x00000001

#define __SR__SB__POSITION                          0x0000000C
#define __SR__SB__MASK                              0x00001000
#define __SR__SB__LENGTH                            0x00000001

#define __SR__SA__POSITION                          0x0000000D
#define __SR__SA__MASK                              0x00002000
#define __SR__SA__LENGTH                            0x00000001

#define __SR__OB__POSITION                          0x0000000E
#define __SR__OB__MASK                              0x00004000
#define __SR__OB__LENGTH                            0x00000001

#define __SR__OA__POSITION                          0x0000000F
#define __SR__OA__MASK                              0x00008000
#define __SR__OA__LENGTH                            0x00000001

#define __SR__IPL0__POSITION                        0x00000005
#define __SR__IPL0__MASK                            0x00000020
#define __SR__IPL0__LENGTH                          0x00000001

#define __SR__IPL1__POSITION                        0x00000006
#define __SR__IPL1__MASK                            0x00000040
#define __SR__IPL1__LENGTH                          0x00000001

#define __SR__IPL2__POSITION                        0x00000007
#define __SR__IPL2__MASK                            0x00000080
#define __SR__IPL2__LENGTH                          0x00000001

#define __CORCON__IF__POSITION                      0x00000000
#define __CORCON__IF__MASK                          0x00000001
#define __CORCON__IF__LENGTH                        0x00000001

#define __CORCON__RND__POSITION                     0x00000001
#define __CORCON__RND__MASK                         0x00000002
#define __CORCON__RND__LENGTH                       0x00000001

#define __CORCON__PSV__POSITION                     0x00000002
#define __CORCON__PSV__MASK                         0x00000004
#define __CORCON__PSV__LENGTH                       0x00000001

#define __CORCON__IPL3__POSITION                    0x00000003
#define __CORCON__IPL3__MASK                        0x00000008
#define __CORCON__IPL3__LENGTH                      0x00000001

#define __CORCON__ACCSAT__POSITION                  0x00000004
#define __CORCON__ACCSAT__MASK                      0x00000010
#define __CORCON__ACCSAT__LENGTH                    0x00000001

#define __CORCON__SATDW__POSITION                   0x00000005
#define __CORCON__SATDW__MASK                       0x00000020
#define __CORCON__SATDW__LENGTH                     0x00000001

#define __CORCON__SATB__POSITION                    0x00000006
#define __CORCON__SATB__MASK                        0x00000040
#define __CORCON__SATB__LENGTH                      0x00000001

#define __CORCON__SATA__POSITION                    0x00000007
#define __CORCON__SATA__MASK                        0x00000080
#define __CORCON__SATA__LENGTH                      0x00000001

#define __CORCON__DL__POSITION                      0x00000008
#define __CORCON__DL__MASK                          0x00000700
#define __CORCON__DL__LENGTH                        0x00000003

#define __CORCON__EDT__POSITION                     0x0000000B
#define __CORCON__EDT__MASK                         0x00000800
#define __CORCON__EDT__LENGTH                       0x00000001

#define __CORCON__US__POSITION                      0x0000000C
#define __CORCON__US__MASK                          0x00001000
#define __CORCON__US__LENGTH                        0x00000001

#define __CORCON__DL0__POSITION                     0x00000008
#define __CORCON__DL0__MASK                         0x00000100
#define __CORCON__DL0__LENGTH                       0x00000001

#define __CORCON__DL1__POSITION                     0x00000009
#define __CORCON__DL1__MASK                         0x00000200
#define __CORCON__DL1__LENGTH                       0x00000001

#define __CORCON__DL2__POSITION                     0x0000000A
#define __CORCON__DL2__MASK                         0x00000400
#define __CORCON__DL2__LENGTH                       0x00000001

#define __MODCON__XWM__POSITION                     0x00000000
#define __MODCON__XWM__MASK                         0x0000000F
#define __MODCON__XWM__LENGTH                       0x00000004

#define __MODCON__YWM__POSITION                     0x00000004
#define __MODCON__YWM__MASK                         0x000000F0
#define __MODCON__YWM__LENGTH                       0x00000004

#define __MODCON__BWM__POSITION                     0x00000008
#define __MODCON__BWM__MASK                         0x00000F00
#define __MODCON__BWM__LENGTH                       0x00000004

#define __MODCON__YMODEN__POSITION                  0x0000000E
#define __MODCON__YMODEN__MASK                      0x00004000
#define __MODCON__YMODEN__LENGTH                    0x00000001

#define __MODCON__XMODEN__POSITION                  0x0000000F
#define __MODCON__XMODEN__MASK                      0x00008000
#define __MODCON__XMODEN__LENGTH                    0x00000001

#define __MODCON__XWM0__POSITION                    0x00000000
#define __MODCON__XWM0__MASK                        0x00000001
#define __MODCON__XWM0__LENGTH                      0x00000001

#define __MODCON__XWM1__POSITION                    0x00000001
#define __MODCON__XWM1__MASK                        0x00000002
#define __MODCON__XWM1__LENGTH                      0x00000001

#define __MODCON__XWM2__POSITION                    0x00000002
#define __MODCON__XWM2__MASK                        0x00000004
#define __MODCON__XWM2__LENGTH                      0x00000001

#define __MODCON__XWM3__POSITION                    0x00000003
#define __MODCON__XWM3__MASK                        0x00000008
#define __MODCON__XWM3__LENGTH                      0x00000001

#define __MODCON__YWM0__POSITION                    0x00000004
#define __MODCON__YWM0__MASK                        0x00000010
#define __MODCON__YWM0__LENGTH                      0x00000001

#define __MODCON__YWM1__POSITION                    0x00000005
#define __MODCON__YWM1__MASK                        0x00000020
#define __MODCON__YWM1__LENGTH                      0x00000001

#define __MODCON__YWM2__POSITION                    0x00000006
#define __MODCON__YWM2__MASK                        0x00000040
#define __MODCON__YWM2__LENGTH                      0x00000001

#define __MODCON__YWM3__POSITION                    0x00000007
#define __MODCON__YWM3__MASK                        0x00000080
#define __MODCON__YWM3__LENGTH                      0x00000001

#define __MODCON__BWM0__POSITION                    0x00000008
#define __MODCON__BWM0__MASK                        0x00000100
#define __MODCON__BWM0__LENGTH                      0x00000001

#define __MODCON__BWM1__POSITION                    0x00000009
#define __MODCON__BWM1__MASK                        0x00000200
#define __MODCON__BWM1__LENGTH                      0x00000001

#define __MODCON__BWM2__POSITION                    0x0000000A
#define __MODCON__BWM2__MASK                        0x00000400
#define __MODCON__BWM2__LENGTH                      0x00000001

#define __MODCON__BWM3__POSITION                    0x0000000B
#define __MODCON__BWM3__MASK                        0x00000800
#define __MODCON__BWM3__LENGTH                      0x00000001

#define __XBREV__XB__POSITION                       0x00000000
#define __XBREV__XB__MASK                           0x00007FFF
#define __XBREV__XB__LENGTH                         0x0000000F

#define __XBREV__BREN__POSITION                     0x0000000F
#define __XBREV__BREN__MASK                         0x00008000
#define __XBREV__BREN__LENGTH                       0x00000001

#define __XBREV__XB0__POSITION                      0x00000000
#define __XBREV__XB0__MASK                          0x00000001
#define __XBREV__XB0__LENGTH                        0x00000001

#define __XBREV__XB1__POSITION                      0x00000001
#define __XBREV__XB1__MASK                          0x00000002
#define __XBREV__XB1__LENGTH                        0x00000001

#define __XBREV__XB2__POSITION                      0x00000002
#define __XBREV__XB2__MASK                          0x00000004
#define __XBREV__XB2__LENGTH                        0x00000001

#define __XBREV__XB3__POSITION                      0x00000003
#define __XBREV__XB3__MASK                          0x00000008
#define __XBREV__XB3__LENGTH                        0x00000001

#define __XBREV__XB4__POSITION                      0x00000004
#define __XBREV__XB4__MASK                          0x00000010
#define __XBREV__XB4__LENGTH                        0x00000001

#define __XBREV__XB5__POSITION                      0x00000005
#define __XBREV__XB5__MASK                          0x00000020
#define __XBREV__XB5__LENGTH                        0x00000001

#define __XBREV__XB6__POSITION                      0x00000006
#define __XBREV__XB6__MASK                          0x00000040
#define __XBREV__XB6__LENGTH                        0x00000001

#define __XBREV__XB7__POSITION                      0x00000007
#define __XBREV__XB7__MASK                          0x00000080
#define __XBREV__XB7__LENGTH                        0x00000001

#define __XBREV__XB8__POSITION                      0x00000008
#define __XBREV__XB8__MASK                          0x00000100
#define __XBREV__XB8__LENGTH                        0x00000001

#define __XBREV__XB9__POSITION                      0x00000009
#define __XBREV__XB9__MASK                          0x00000200
#define __XBREV__XB9__LENGTH                        0x00000001

#define __XBREV__XB10__POSITION                     0x0000000A
#define __XBREV__XB10__MASK                         0x00000400
#define __XBREV__XB10__LENGTH                       0x00000001

#define __XBREV__XB11__POSITION                     0x0000000B
#define __XBREV__XB11__MASK                         0x00000800
#define __XBREV__XB11__LENGTH                       0x00000001

#define __XBREV__XB12__POSITION                     0x0000000C
#define __XBREV__XB12__MASK                         0x00001000
#define __XBREV__XB12__LENGTH                       0x00000001

#define __XBREV__XB13__POSITION                     0x0000000D
#define __XBREV__XB13__MASK                         0x00002000
#define __XBREV__XB13__LENGTH                       0x00000001

#define __XBREV__XB14__POSITION                     0x0000000E
#define __XBREV__XB14__MASK                         0x00004000
#define __XBREV__XB14__LENGTH                       0x00000001

#define __CNEN1__CN0IE__POSITION                    0x00000000
#define __CNEN1__CN0IE__MASK                        0x00000001
#define __CNEN1__CN0IE__LENGTH                      0x00000001

#define __CNEN1__CN1IE__POSITION                    0x00000001
#define __CNEN1__CN1IE__MASK                        0x00000002
#define __CNEN1__CN1IE__LENGTH                      0x00000001

#define __CNEN1__CN2IE__POSITION                    0x00000002
#define __CNEN1__CN2IE__MASK                        0x00000004
#define __CNEN1__CN2IE__LENGTH                      0x00000001

#define __CNEN1__CN3IE__POSITION                    0x00000003
#define __CNEN1__CN3IE__MASK                        0x00000008
#define __CNEN1__CN3IE__LENGTH                      0x00000001

#define __CNEN1__CN4IE__POSITION                    0x00000004
#define __CNEN1__CN4IE__MASK                        0x00000010
#define __CNEN1__CN4IE__LENGTH                      0x00000001

#define __CNEN1__CN5IE__POSITION                    0x00000005
#define __CNEN1__CN5IE__MASK                        0x00000020
#define __CNEN1__CN5IE__LENGTH                      0x00000001

#define __CNEN1__CN6IE__POSITION                    0x00000006
#define __CNEN1__CN6IE__MASK                        0x00000040
#define __CNEN1__CN6IE__LENGTH                      0x00000001

#define __CNEN1__CN7IE__POSITION                    0x00000007
#define __CNEN1__CN7IE__MASK                        0x00000080
#define __CNEN1__CN7IE__LENGTH                      0x00000001

#define __CNEN1__CN8IE__POSITION                    0x00000008
#define __CNEN1__CN8IE__MASK                        0x00000100
#define __CNEN1__CN8IE__LENGTH                      0x00000001

#define __CNEN1__CN9IE__POSITION                    0x00000009
#define __CNEN1__CN9IE__MASK                        0x00000200
#define __CNEN1__CN9IE__LENGTH                      0x00000001

#define __CNEN1__CN10IE__POSITION                   0x0000000A
#define __CNEN1__CN10IE__MASK                       0x00000400
#define __CNEN1__CN10IE__LENGTH                     0x00000001

#define __CNEN1__CN11IE__POSITION                   0x0000000B
#define __CNEN1__CN11IE__MASK                       0x00000800
#define __CNEN1__CN11IE__LENGTH                     0x00000001

#define __CNEN1__CN12IE__POSITION                   0x0000000C
#define __CNEN1__CN12IE__MASK                       0x00001000
#define __CNEN1__CN12IE__LENGTH                     0x00000001

#define __CNEN1__CN13IE__POSITION                   0x0000000D
#define __CNEN1__CN13IE__MASK                       0x00002000
#define __CNEN1__CN13IE__LENGTH                     0x00000001

#define __CNEN1__CN14IE__POSITION                   0x0000000E
#define __CNEN1__CN14IE__MASK                       0x00004000
#define __CNEN1__CN14IE__LENGTH                     0x00000001

#define __CNEN1__CN15IE__POSITION                   0x0000000F
#define __CNEN1__CN15IE__MASK                       0x00008000
#define __CNEN1__CN15IE__LENGTH                     0x00000001

#define __CNEN2__CN16IE__POSITION                   0x00000000
#define __CNEN2__CN16IE__MASK                       0x00000001
#define __CNEN2__CN16IE__LENGTH                     0x00000001

#define __CNEN2__CN17IE__POSITION                   0x00000001
#define __CNEN2__CN17IE__MASK                       0x00000002
#define __CNEN2__CN17IE__LENGTH                     0x00000001

#define __CNEN2__CN18IE__POSITION                   0x00000002
#define __CNEN2__CN18IE__MASK                       0x00000004
#define __CNEN2__CN18IE__LENGTH                     0x00000001

#define __CNEN2__CN19IE__POSITION                   0x00000003
#define __CNEN2__CN19IE__MASK                       0x00000008
#define __CNEN2__CN19IE__LENGTH                     0x00000001

#define __CNEN2__CN20IE__POSITION                   0x00000004
#define __CNEN2__CN20IE__MASK                       0x00000010
#define __CNEN2__CN20IE__LENGTH                     0x00000001

#define __CNEN2__CN21IE__POSITION                   0x00000005
#define __CNEN2__CN21IE__MASK                       0x00000020
#define __CNEN2__CN21IE__LENGTH                     0x00000001

#define __CNEN2__CN22IE__POSITION                   0x00000006
#define __CNEN2__CN22IE__MASK                       0x00000040
#define __CNEN2__CN22IE__LENGTH                     0x00000001

#define __CNEN2__CN23IE__POSITION                   0x00000007
#define __CNEN2__CN23IE__MASK                       0x00000080
#define __CNEN2__CN23IE__LENGTH                     0x00000001

#define __CNEN2__CN24IE__POSITION                   0x00000008
#define __CNEN2__CN24IE__MASK                       0x00000100
#define __CNEN2__CN24IE__LENGTH                     0x00000001

#define __CNEN2__CN25IE__POSITION                   0x00000009
#define __CNEN2__CN25IE__MASK                       0x00000200
#define __CNEN2__CN25IE__LENGTH                     0x00000001

#define __CNEN2__CN26IE__POSITION                   0x0000000A
#define __CNEN2__CN26IE__MASK                       0x00000400
#define __CNEN2__CN26IE__LENGTH                     0x00000001

#define __CNEN2__CN27IE__POSITION                   0x0000000B
#define __CNEN2__CN27IE__MASK                       0x00000800
#define __CNEN2__CN27IE__LENGTH                     0x00000001

#define __CNEN2__CN28IE__POSITION                   0x0000000C
#define __CNEN2__CN28IE__MASK                       0x00001000
#define __CNEN2__CN28IE__LENGTH                     0x00000001

#define __CNEN2__CN29IE__POSITION                   0x0000000D
#define __CNEN2__CN29IE__MASK                       0x00002000
#define __CNEN2__CN29IE__LENGTH                     0x00000001

#define __CNEN2__CN30IE__POSITION                   0x0000000E
#define __CNEN2__CN30IE__MASK                       0x00004000
#define __CNEN2__CN30IE__LENGTH                     0x00000001

#define __CNPU1__CN0PUE__POSITION                   0x00000000
#define __CNPU1__CN0PUE__MASK                       0x00000001
#define __CNPU1__CN0PUE__LENGTH                     0x00000001

#define __CNPU1__CN1PUE__POSITION                   0x00000001
#define __CNPU1__CN1PUE__MASK                       0x00000002
#define __CNPU1__CN1PUE__LENGTH                     0x00000001

#define __CNPU1__CN2PUE__POSITION                   0x00000002
#define __CNPU1__CN2PUE__MASK                       0x00000004
#define __CNPU1__CN2PUE__LENGTH                     0x00000001

#define __CNPU1__CN3PUE__POSITION                   0x00000003
#define __CNPU1__CN3PUE__MASK                       0x00000008
#define __CNPU1__CN3PUE__LENGTH                     0x00000001

#define __CNPU1__CN4PUE__POSITION                   0x00000004
#define __CNPU1__CN4PUE__MASK                       0x00000010
#define __CNPU1__CN4PUE__LENGTH                     0x00000001

#define __CNPU1__CN5PUE__POSITION                   0x00000005
#define __CNPU1__CN5PUE__MASK                       0x00000020
#define __CNPU1__CN5PUE__LENGTH                     0x00000001

#define __CNPU1__CN6PUE__POSITION                   0x00000006
#define __CNPU1__CN6PUE__MASK                       0x00000040
#define __CNPU1__CN6PUE__LENGTH                     0x00000001

#define __CNPU1__CN7PUE__POSITION                   0x00000007
#define __CNPU1__CN7PUE__MASK                       0x00000080
#define __CNPU1__CN7PUE__LENGTH                     0x00000001

#define __CNPU1__CN8PUE__POSITION                   0x00000008
#define __CNPU1__CN8PUE__MASK                       0x00000100
#define __CNPU1__CN8PUE__LENGTH                     0x00000001

#define __CNPU1__CN9PUE__POSITION                   0x00000009
#define __CNPU1__CN9PUE__MASK                       0x00000200
#define __CNPU1__CN9PUE__LENGTH                     0x00000001

#define __CNPU1__CN10PUE__POSITION                  0x0000000A
#define __CNPU1__CN10PUE__MASK                      0x00000400
#define __CNPU1__CN10PUE__LENGTH                    0x00000001

#define __CNPU1__CN11PUE__POSITION                  0x0000000B
#define __CNPU1__CN11PUE__MASK                      0x00000800
#define __CNPU1__CN11PUE__LENGTH                    0x00000001

#define __CNPU1__CN12PUE__POSITION                  0x0000000C
#define __CNPU1__CN12PUE__MASK                      0x00001000
#define __CNPU1__CN12PUE__LENGTH                    0x00000001

#define __CNPU1__CN13PUE__POSITION                  0x0000000D
#define __CNPU1__CN13PUE__MASK                      0x00002000
#define __CNPU1__CN13PUE__LENGTH                    0x00000001

#define __CNPU1__CN14PUE__POSITION                  0x0000000E
#define __CNPU1__CN14PUE__MASK                      0x00004000
#define __CNPU1__CN14PUE__LENGTH                    0x00000001

#define __CNPU1__CN15PUE__POSITION                  0x0000000F
#define __CNPU1__CN15PUE__MASK                      0x00008000
#define __CNPU1__CN15PUE__LENGTH                    0x00000001

#define __CNPU2__CN16PUE__POSITION                  0x00000000
#define __CNPU2__CN16PUE__MASK                      0x00000001
#define __CNPU2__CN16PUE__LENGTH                    0x00000001

#define __CNPU2__CN17PUE__POSITION                  0x00000001
#define __CNPU2__CN17PUE__MASK                      0x00000002
#define __CNPU2__CN17PUE__LENGTH                    0x00000001

#define __CNPU2__CN18PUE__POSITION                  0x00000002
#define __CNPU2__CN18PUE__MASK                      0x00000004
#define __CNPU2__CN18PUE__LENGTH                    0x00000001

#define __CNPU2__CN19PUE__POSITION                  0x00000003
#define __CNPU2__CN19PUE__MASK                      0x00000008
#define __CNPU2__CN19PUE__LENGTH                    0x00000001

#define __CNPU2__CN20PUE__POSITION                  0x00000004
#define __CNPU2__CN20PUE__MASK                      0x00000010
#define __CNPU2__CN20PUE__LENGTH                    0x00000001

#define __CNPU2__CN21PUE__POSITION                  0x00000005
#define __CNPU2__CN21PUE__MASK                      0x00000020
#define __CNPU2__CN21PUE__LENGTH                    0x00000001

#define __CNPU2__CN22PUE__POSITION                  0x00000006
#define __CNPU2__CN22PUE__MASK                      0x00000040
#define __CNPU2__CN22PUE__LENGTH                    0x00000001

#define __CNPU2__CN23PUE__POSITION                  0x00000007
#define __CNPU2__CN23PUE__MASK                      0x00000080
#define __CNPU2__CN23PUE__LENGTH                    0x00000001

#define __CNPU2__CN24PUE__POSITION                  0x00000008
#define __CNPU2__CN24PUE__MASK                      0x00000100
#define __CNPU2__CN24PUE__LENGTH                    0x00000001

#define __CNPU2__CN25PUE__POSITION                  0x00000009
#define __CNPU2__CN25PUE__MASK                      0x00000200
#define __CNPU2__CN25PUE__LENGTH                    0x00000001

#define __CNPU2__CN26PUE__POSITION                  0x0000000A
#define __CNPU2__CN26PUE__MASK                      0x00000400
#define __CNPU2__CN26PUE__LENGTH                    0x00000001

#define __CNPU2__CN27PUE__POSITION                  0x0000000B
#define __CNPU2__CN27PUE__MASK                      0x00000800
#define __CNPU2__CN27PUE__LENGTH                    0x00000001

#define __CNPU2__CN28PUE__POSITION                  0x0000000C
#define __CNPU2__CN28PUE__MASK                      0x00001000
#define __CNPU2__CN28PUE__LENGTH                    0x00000001

#define __CNPU2__CN29PUE__POSITION                  0x0000000D
#define __CNPU2__CN29PUE__MASK                      0x00002000
#define __CNPU2__CN29PUE__LENGTH                    0x00000001

#define __CNPU2__CN30PUE__POSITION                  0x0000000E
#define __CNPU2__CN30PUE__MASK                      0x00004000
#define __CNPU2__CN30PUE__LENGTH                    0x00000001

#define __INTCON1__OSCFAIL__POSITION                0x00000001
#define __INTCON1__OSCFAIL__MASK                    0x00000002
#define __INTCON1__OSCFAIL__LENGTH                  0x00000001

#define __INTCON1__STKERR__POSITION                 0x00000002
#define __INTCON1__STKERR__MASK                     0x00000004
#define __INTCON1__STKERR__LENGTH                   0x00000001

#define __INTCON1__ADDRERR__POSITION                0x00000003
#define __INTCON1__ADDRERR__MASK                    0x00000008
#define __INTCON1__ADDRERR__LENGTH                  0x00000001

#define __INTCON1__MATHERR__POSITION                0x00000004
#define __INTCON1__MATHERR__MASK                    0x00000010
#define __INTCON1__MATHERR__LENGTH                  0x00000001

#define __INTCON1__DMACERR__POSITION                0x00000005
#define __INTCON1__DMACERR__MASK                    0x00000020
#define __INTCON1__DMACERR__LENGTH                  0x00000001

#define __INTCON1__DIV0ERR__POSITION                0x00000006
#define __INTCON1__DIV0ERR__MASK                    0x00000040
#define __INTCON1__DIV0ERR__LENGTH                  0x00000001

#define __INTCON1__SFTACERR__POSITION               0x00000007
#define __INTCON1__SFTACERR__MASK                   0x00000080
#define __INTCON1__SFTACERR__LENGTH                 0x00000001

#define __INTCON1__COVTE__POSITION                  0x00000008
#define __INTCON1__COVTE__MASK                      0x00000100
#define __INTCON1__COVTE__LENGTH                    0x00000001

#define __INTCON1__OVBTE__POSITION                  0x00000009
#define __INTCON1__OVBTE__MASK                      0x00000200
#define __INTCON1__OVBTE__LENGTH                    0x00000001

#define __INTCON1__OVATE__POSITION                  0x0000000A
#define __INTCON1__OVATE__MASK                      0x00000400
#define __INTCON1__OVATE__LENGTH                    0x00000001

#define __INTCON1__COVBERR__POSITION                0x0000000B
#define __INTCON1__COVBERR__MASK                    0x00000800
#define __INTCON1__COVBERR__LENGTH                  0x00000001

#define __INTCON1__COVAERR__POSITION                0x0000000C
#define __INTCON1__COVAERR__MASK                    0x00001000
#define __INTCON1__COVAERR__LENGTH                  0x00000001

#define __INTCON1__OVBERR__POSITION                 0x0000000D
#define __INTCON1__OVBERR__MASK                     0x00002000
#define __INTCON1__OVBERR__LENGTH                   0x00000001

#define __INTCON1__OVAERR__POSITION                 0x0000000E
#define __INTCON1__OVAERR__MASK                     0x00004000
#define __INTCON1__OVAERR__LENGTH                   0x00000001

#define __INTCON1__NSTDIS__POSITION                 0x0000000F
#define __INTCON1__NSTDIS__MASK                     0x00008000
#define __INTCON1__NSTDIS__LENGTH                   0x00000001

#define __INTCON2__INT0EP__POSITION                 0x00000000
#define __INTCON2__INT0EP__MASK                     0x00000001
#define __INTCON2__INT0EP__LENGTH                   0x00000001

#define __INTCON2__INT1EP__POSITION                 0x00000001
#define __INTCON2__INT1EP__MASK                     0x00000002
#define __INTCON2__INT1EP__LENGTH                   0x00000001

#define __INTCON2__INT2EP__POSITION                 0x00000002
#define __INTCON2__INT2EP__MASK                     0x00000004
#define __INTCON2__INT2EP__LENGTH                   0x00000001

#define __INTCON2__DISI__POSITION                   0x0000000E
#define __INTCON2__DISI__MASK                       0x00004000
#define __INTCON2__DISI__LENGTH                     0x00000001

#define __INTCON2__ALTIVT__POSITION                 0x0000000F
#define __INTCON2__ALTIVT__MASK                     0x00008000
#define __INTCON2__ALTIVT__LENGTH                   0x00000001

#define __IFS0__INT0IF__POSITION                    0x00000000
#define __IFS0__INT0IF__MASK                        0x00000001
#define __IFS0__INT0IF__LENGTH                      0x00000001

#define __IFS0__IC1IF__POSITION                     0x00000001
#define __IFS0__IC1IF__MASK                         0x00000002
#define __IFS0__IC1IF__LENGTH                       0x00000001

#define __IFS0__OC1IF__POSITION                     0x00000002
#define __IFS0__OC1IF__MASK                         0x00000004
#define __IFS0__OC1IF__LENGTH                       0x00000001

#define __IFS0__T1IF__POSITION                      0x00000003
#define __IFS0__T1IF__MASK                          0x00000008
#define __IFS0__T1IF__LENGTH                        0x00000001

#define __IFS0__DMA0IF__POSITION                    0x00000004
#define __IFS0__DMA0IF__MASK                        0x00000010
#define __IFS0__DMA0IF__LENGTH                      0x00000001

#define __IFS0__IC2IF__POSITION                     0x00000005
#define __IFS0__IC2IF__MASK                         0x00000020
#define __IFS0__IC2IF__LENGTH                       0x00000001

#define __IFS0__OC2IF__POSITION                     0x00000006
#define __IFS0__OC2IF__MASK                         0x00000040
#define __IFS0__OC2IF__LENGTH                       0x00000001

#define __IFS0__T2IF__POSITION                      0x00000007
#define __IFS0__T2IF__MASK                          0x00000080
#define __IFS0__T2IF__LENGTH                        0x00000001

#define __IFS0__T3IF__POSITION                      0x00000008
#define __IFS0__T3IF__MASK                          0x00000100
#define __IFS0__T3IF__LENGTH                        0x00000001

#define __IFS0__SPI1EIF__POSITION                   0x00000009
#define __IFS0__SPI1EIF__MASK                       0x00000200
#define __IFS0__SPI1EIF__LENGTH                     0x00000001

#define __IFS0__SPI1IF__POSITION                    0x0000000A
#define __IFS0__SPI1IF__MASK                        0x00000400
#define __IFS0__SPI1IF__LENGTH                      0x00000001

#define __IFS0__U1RXIF__POSITION                    0x0000000B
#define __IFS0__U1RXIF__MASK                        0x00000800
#define __IFS0__U1RXIF__LENGTH                      0x00000001

#define __IFS0__U1TXIF__POSITION                    0x0000000C
#define __IFS0__U1TXIF__MASK                        0x00001000
#define __IFS0__U1TXIF__LENGTH                      0x00000001

#define __IFS0__AD1IF__POSITION                     0x0000000D
#define __IFS0__AD1IF__MASK                         0x00002000
#define __IFS0__AD1IF__LENGTH                       0x00000001

#define __IFS0__DMA1IF__POSITION                    0x0000000E
#define __IFS0__DMA1IF__MASK                        0x00004000
#define __IFS0__DMA1IF__LENGTH                      0x00000001

#define __IFS1__SI2C1IF__POSITION                   0x00000000
#define __IFS1__SI2C1IF__MASK                       0x00000001
#define __IFS1__SI2C1IF__LENGTH                     0x00000001

#define __IFS1__MI2C1IF__POSITION                   0x00000001
#define __IFS1__MI2C1IF__MASK                       0x00000002
#define __IFS1__MI2C1IF__LENGTH                     0x00000001

#define __IFS1__CMIF__POSITION                      0x00000002
#define __IFS1__CMIF__MASK                          0x00000004
#define __IFS1__CMIF__LENGTH                        0x00000001

#define __IFS1__CNIF__POSITION                      0x00000003
#define __IFS1__CNIF__MASK                          0x00000008
#define __IFS1__CNIF__LENGTH                        0x00000001

#define __IFS1__INT1IF__POSITION                    0x00000004
#define __IFS1__INT1IF__MASK                        0x00000010
#define __IFS1__INT1IF__LENGTH                      0x00000001

#define __IFS1__IC7IF__POSITION                     0x00000006
#define __IFS1__IC7IF__MASK                         0x00000040
#define __IFS1__IC7IF__LENGTH                       0x00000001

#define __IFS1__IC8IF__POSITION                     0x00000007
#define __IFS1__IC8IF__MASK                         0x00000080
#define __IFS1__IC8IF__LENGTH                       0x00000001

#define __IFS1__DMA2IF__POSITION                    0x00000008
#define __IFS1__DMA2IF__MASK                        0x00000100
#define __IFS1__DMA2IF__LENGTH                      0x00000001

#define __IFS1__OC3IF__POSITION                     0x00000009
#define __IFS1__OC3IF__MASK                         0x00000200
#define __IFS1__OC3IF__LENGTH                       0x00000001

#define __IFS1__OC4IF__POSITION                     0x0000000A
#define __IFS1__OC4IF__MASK                         0x00000400
#define __IFS1__OC4IF__LENGTH                       0x00000001

#define __IFS1__T4IF__POSITION                      0x0000000B
#define __IFS1__T4IF__MASK                          0x00000800
#define __IFS1__T4IF__LENGTH                        0x00000001

#define __IFS1__T5IF__POSITION                      0x0000000C
#define __IFS1__T5IF__MASK                          0x00001000
#define __IFS1__T5IF__LENGTH                        0x00000001

#define __IFS1__INT2IF__POSITION                    0x0000000D
#define __IFS1__INT2IF__MASK                        0x00002000
#define __IFS1__INT2IF__LENGTH                      0x00000001

#define __IFS1__U2RXIF__POSITION                    0x0000000E
#define __IFS1__U2RXIF__MASK                        0x00004000
#define __IFS1__U2RXIF__LENGTH                      0x00000001

#define __IFS1__U2TXIF__POSITION                    0x0000000F
#define __IFS1__U2TXIF__MASK                        0x00008000
#define __IFS1__U2TXIF__LENGTH                      0x00000001

#define __IFS1__SI2CIF__POSITION                    0x00000000
#define __IFS1__SI2CIF__MASK                        0x00000001
#define __IFS1__SI2CIF__LENGTH                      0x00000001

#define __IFS2__SPI2EIF__POSITION                   0x00000000
#define __IFS2__SPI2EIF__MASK                       0x00000001
#define __IFS2__SPI2EIF__LENGTH                     0x00000001

#define __IFS2__SPI2IF__POSITION                    0x00000001
#define __IFS2__SPI2IF__MASK                        0x00000002
#define __IFS2__SPI2IF__LENGTH                      0x00000001

#define __IFS2__C1RXIF__POSITION                    0x00000002
#define __IFS2__C1RXIF__MASK                        0x00000004
#define __IFS2__C1RXIF__LENGTH                      0x00000001

#define __IFS2__C1IF__POSITION                      0x00000003
#define __IFS2__C1IF__MASK                          0x00000008
#define __IFS2__C1IF__LENGTH                        0x00000001

#define __IFS2__DMA3IF__POSITION                    0x00000004
#define __IFS2__DMA3IF__MASK                        0x00000010
#define __IFS2__DMA3IF__LENGTH                      0x00000001

#define __IFS2__PMPIF__POSITION                     0x0000000D
#define __IFS2__PMPIF__MASK                         0x00002000
#define __IFS2__PMPIF__LENGTH                       0x00000001

#define __IFS2__DMA4IF__POSITION                    0x0000000E
#define __IFS2__DMA4IF__MASK                        0x00004000
#define __IFS2__DMA4IF__LENGTH                      0x00000001

#define __IFS3__PWM1IF__POSITION                    0x00000009
#define __IFS3__PWM1IF__MASK                        0x00000200
#define __IFS3__PWM1IF__LENGTH                      0x00000001

#define __IFS3__QEI1IF__POSITION                    0x0000000A
#define __IFS3__QEI1IF__MASK                        0x00000400
#define __IFS3__QEI1IF__LENGTH                      0x00000001

#define __IFS3__DMA5IF__POSITION                    0x0000000D
#define __IFS3__DMA5IF__MASK                        0x00002000
#define __IFS3__DMA5IF__LENGTH                      0x00000001

#define __IFS3__RTCIF__POSITION                     0x0000000E
#define __IFS3__RTCIF__MASK                         0x00004000
#define __IFS3__RTCIF__LENGTH                       0x00000001

#define __IFS3__FLTA1IF__POSITION                   0x0000000F
#define __IFS3__FLTA1IF__MASK                       0x00008000
#define __IFS3__FLTA1IF__LENGTH                     0x00000001

#define __IFS4__U1EIF__POSITION                     0x00000001
#define __IFS4__U1EIF__MASK                         0x00000002
#define __IFS4__U1EIF__LENGTH                       0x00000001

#define __IFS4__U2EIF__POSITION                     0x00000002
#define __IFS4__U2EIF__MASK                         0x00000004
#define __IFS4__U2EIF__LENGTH                       0x00000001

#define __IFS4__CRCIF__POSITION                     0x00000003
#define __IFS4__CRCIF__MASK                         0x00000008
#define __IFS4__CRCIF__LENGTH                       0x00000001

#define __IFS4__DMA6IF__POSITION                    0x00000004
#define __IFS4__DMA6IF__MASK                        0x00000010
#define __IFS4__DMA6IF__LENGTH                      0x00000001

#define __IFS4__DMA7IF__POSITION                    0x00000005
#define __IFS4__DMA7IF__MASK                        0x00000020
#define __IFS4__DMA7IF__LENGTH                      0x00000001

#define __IFS4__C1TXIF__POSITION                    0x00000006
#define __IFS4__C1TXIF__MASK                        0x00000040
#define __IFS4__C1TXIF__LENGTH                      0x00000001

#define __IFS4__PWM2IF__POSITION                    0x00000009
#define __IFS4__PWM2IF__MASK                        0x00000200
#define __IFS4__PWM2IF__LENGTH                      0x00000001

#define __IFS4__FLTA2IF__POSITION                   0x0000000A
#define __IFS4__FLTA2IF__MASK                       0x00000400
#define __IFS4__FLTA2IF__LENGTH                     0x00000001

#define __IFS4__QEI2IF__POSITION                    0x0000000B
#define __IFS4__QEI2IF__MASK                        0x00000800
#define __IFS4__QEI2IF__LENGTH                      0x00000001

#define __IFS4__DAC1RIF__POSITION                   0x0000000E
#define __IFS4__DAC1RIF__MASK                       0x00004000
#define __IFS4__DAC1RIF__LENGTH                     0x00000001

#define __IFS4__DAC1LIF__POSITION                   0x0000000F
#define __IFS4__DAC1LIF__MASK                       0x00008000
#define __IFS4__DAC1LIF__LENGTH                     0x00000001

#define __IEC0__INT0IE__POSITION                    0x00000000
#define __IEC0__INT0IE__MASK                        0x00000001
#define __IEC0__INT0IE__LENGTH                      0x00000001

#define __IEC0__IC1IE__POSITION                     0x00000001
#define __IEC0__IC1IE__MASK                         0x00000002
#define __IEC0__IC1IE__LENGTH                       0x00000001

#define __IEC0__OC1IE__POSITION                     0x00000002
#define __IEC0__OC1IE__MASK                         0x00000004
#define __IEC0__OC1IE__LENGTH                       0x00000001

#define __IEC0__T1IE__POSITION                      0x00000003
#define __IEC0__T1IE__MASK                          0x00000008
#define __IEC0__T1IE__LENGTH                        0x00000001

#define __IEC0__DMA0IE__POSITION                    0x00000004
#define __IEC0__DMA0IE__MASK                        0x00000010
#define __IEC0__DMA0IE__LENGTH                      0x00000001

#define __IEC0__IC2IE__POSITION                     0x00000005
#define __IEC0__IC2IE__MASK                         0x00000020
#define __IEC0__IC2IE__LENGTH                       0x00000001

#define __IEC0__OC2IE__POSITION                     0x00000006
#define __IEC0__OC2IE__MASK                         0x00000040
#define __IEC0__OC2IE__LENGTH                       0x00000001

#define __IEC0__T2IE__POSITION                      0x00000007
#define __IEC0__T2IE__MASK                          0x00000080
#define __IEC0__T2IE__LENGTH                        0x00000001

#define __IEC0__T3IE__POSITION                      0x00000008
#define __IEC0__T3IE__MASK                          0x00000100
#define __IEC0__T3IE__LENGTH                        0x00000001

#define __IEC0__SPI1EIE__POSITION                   0x00000009
#define __IEC0__SPI1EIE__MASK                       0x00000200
#define __IEC0__SPI1EIE__LENGTH                     0x00000001

#define __IEC0__SPI1IE__POSITION                    0x0000000A
#define __IEC0__SPI1IE__MASK                        0x00000400
#define __IEC0__SPI1IE__LENGTH                      0x00000001

#define __IEC0__U1RXIE__POSITION                    0x0000000B
#define __IEC0__U1RXIE__MASK                        0x00000800
#define __IEC0__U1RXIE__LENGTH                      0x00000001

#define __IEC0__U1TXIE__POSITION                    0x0000000C
#define __IEC0__U1TXIE__MASK                        0x00001000
#define __IEC0__U1TXIE__LENGTH                      0x00000001

#define __IEC0__AD1IE__POSITION                     0x0000000D
#define __IEC0__AD1IE__MASK                         0x00002000
#define __IEC0__AD1IE__LENGTH                       0x00000001

#define __IEC0__DMA1IE__POSITION                    0x0000000E
#define __IEC0__DMA1IE__MASK                        0x00004000
#define __IEC0__DMA1IE__LENGTH                      0x00000001

#define __IEC1__SI2C1IE__POSITION                   0x00000000
#define __IEC1__SI2C1IE__MASK                       0x00000001
#define __IEC1__SI2C1IE__LENGTH                     0x00000001

#define __IEC1__MI2C1IE__POSITION                   0x00000001
#define __IEC1__MI2C1IE__MASK                       0x00000002
#define __IEC1__MI2C1IE__LENGTH                     0x00000001

#define __IEC1__CMIE__POSITION                      0x00000002
#define __IEC1__CMIE__MASK                          0x00000004
#define __IEC1__CMIE__LENGTH                        0x00000001

#define __IEC1__CNIE__POSITION                      0x00000003
#define __IEC1__CNIE__MASK                          0x00000008
#define __IEC1__CNIE__LENGTH                        0x00000001

#define __IEC1__INT1IE__POSITION                    0x00000004
#define __IEC1__INT1IE__MASK                        0x00000010
#define __IEC1__INT1IE__LENGTH                      0x00000001

#define __IEC1__IC7IE__POSITION                     0x00000006
#define __IEC1__IC7IE__MASK                         0x00000040
#define __IEC1__IC7IE__LENGTH                       0x00000001

#define __IEC1__IC8IE__POSITION                     0x00000007
#define __IEC1__IC8IE__MASK                         0x00000080
#define __IEC1__IC8IE__LENGTH                       0x00000001

#define __IEC1__DMA2IE__POSITION                    0x00000008
#define __IEC1__DMA2IE__MASK                        0x00000100
#define __IEC1__DMA2IE__LENGTH                      0x00000001

#define __IEC1__OC3IE__POSITION                     0x00000009
#define __IEC1__OC3IE__MASK                         0x00000200
#define __IEC1__OC3IE__LENGTH                       0x00000001

#define __IEC1__OC4IE__POSITION                     0x0000000A
#define __IEC1__OC4IE__MASK                         0x00000400
#define __IEC1__OC4IE__LENGTH                       0x00000001

#define __IEC1__T4IE__POSITION                      0x0000000B
#define __IEC1__T4IE__MASK                          0x00000800
#define __IEC1__T4IE__LENGTH                        0x00000001

#define __IEC1__T5IE__POSITION                      0x0000000C
#define __IEC1__T5IE__MASK                          0x00001000
#define __IEC1__T5IE__LENGTH                        0x00000001

#define __IEC1__INT2IE__POSITION                    0x0000000D
#define __IEC1__INT2IE__MASK                        0x00002000
#define __IEC1__INT2IE__LENGTH                      0x00000001

#define __IEC1__U2RXIE__POSITION                    0x0000000E
#define __IEC1__U2RXIE__MASK                        0x00004000
#define __IEC1__U2RXIE__LENGTH                      0x00000001

#define __IEC1__U2TXIE__POSITION                    0x0000000F
#define __IEC1__U2TXIE__MASK                        0x00008000
#define __IEC1__U2TXIE__LENGTH                      0x00000001

#define __IEC1__SI2CIE__POSITION                    0x00000000
#define __IEC1__SI2CIE__MASK                        0x00000001
#define __IEC1__SI2CIE__LENGTH                      0x00000001

#define __IEC2__SPI2EIE__POSITION                   0x00000000
#define __IEC2__SPI2EIE__MASK                       0x00000001
#define __IEC2__SPI2EIE__LENGTH                     0x00000001

#define __IEC2__SPI2IE__POSITION                    0x00000001
#define __IEC2__SPI2IE__MASK                        0x00000002
#define __IEC2__SPI2IE__LENGTH                      0x00000001

#define __IEC2__C1RXIE__POSITION                    0x00000002
#define __IEC2__C1RXIE__MASK                        0x00000004
#define __IEC2__C1RXIE__LENGTH                      0x00000001

#define __IEC2__C1IE__POSITION                      0x00000003
#define __IEC2__C1IE__MASK                          0x00000008
#define __IEC2__C1IE__LENGTH                        0x00000001

#define __IEC2__DMA3IE__POSITION                    0x00000004
#define __IEC2__DMA3IE__MASK                        0x00000010
#define __IEC2__DMA3IE__LENGTH                      0x00000001

#define __IEC2__PMPIE__POSITION                     0x0000000D
#define __IEC2__PMPIE__MASK                         0x00002000
#define __IEC2__PMPIE__LENGTH                       0x00000001

#define __IEC2__DMA4IE__POSITION                    0x0000000E
#define __IEC2__DMA4IE__MASK                        0x00004000
#define __IEC2__DMA4IE__LENGTH                      0x00000001

#define __IEC3__PWM1IE__POSITION                    0x00000009
#define __IEC3__PWM1IE__MASK                        0x00000200
#define __IEC3__PWM1IE__LENGTH                      0x00000001

#define __IEC3__QEI1IE__POSITION                    0x0000000A
#define __IEC3__QEI1IE__MASK                        0x00000400
#define __IEC3__QEI1IE__LENGTH                      0x00000001

#define __IEC3__DMA5IE__POSITION                    0x0000000D
#define __IEC3__DMA5IE__MASK                        0x00002000
#define __IEC3__DMA5IE__LENGTH                      0x00000001

#define __IEC3__RTCIE__POSITION                     0x0000000E
#define __IEC3__RTCIE__MASK                         0x00004000
#define __IEC3__RTCIE__LENGTH                       0x00000001

#define __IEC3__FLTA1IE__POSITION                   0x0000000F
#define __IEC3__FLTA1IE__MASK                       0x00008000
#define __IEC3__FLTA1IE__LENGTH                     0x00000001

#define __IEC4__U1EIE__POSITION                     0x00000001
#define __IEC4__U1EIE__MASK                         0x00000002
#define __IEC4__U1EIE__LENGTH                       0x00000001

#define __IEC4__U2EIE__POSITION                     0x00000002
#define __IEC4__U2EIE__MASK                         0x00000004
#define __IEC4__U2EIE__LENGTH                       0x00000001

#define __IEC4__CRCIE__POSITION                     0x00000003
#define __IEC4__CRCIE__MASK                         0x00000008
#define __IEC4__CRCIE__LENGTH                       0x00000001

#define __IEC4__DMA6IE__POSITION                    0x00000004
#define __IEC4__DMA6IE__MASK                        0x00000010
#define __IEC4__DMA6IE__LENGTH                      0x00000001

#define __IEC4__DMA7IE__POSITION                    0x00000005
#define __IEC4__DMA7IE__MASK                        0x00000020
#define __IEC4__DMA7IE__LENGTH                      0x00000001

#define __IEC4__C1TXIE__POSITION                    0x00000006
#define __IEC4__C1TXIE__MASK                        0x00000040
#define __IEC4__C1TXIE__LENGTH                      0x00000001

#define __IEC4__PWM2IE__POSITION                    0x00000009
#define __IEC4__PWM2IE__MASK                        0x00000200
#define __IEC4__PWM2IE__LENGTH                      0x00000001

#define __IEC4__FLTA2IE__POSITION                   0x0000000A
#define __IEC4__FLTA2IE__MASK                       0x00000400
#define __IEC4__FLTA2IE__LENGTH                     0x00000001

#define __IEC4__QEI2IE__POSITION                    0x0000000B
#define __IEC4__QEI2IE__MASK                        0x00000800
#define __IEC4__QEI2IE__LENGTH                      0x00000001

#define __IEC4__DAC1RIE__POSITION                   0x0000000E
#define __IEC4__DAC1RIE__MASK                       0x00004000
#define __IEC4__DAC1RIE__LENGTH                     0x00000001

#define __IEC4__DAC1LIE__POSITION                   0x0000000F
#define __IEC4__DAC1LIE__MASK                       0x00008000
#define __IEC4__DAC1LIE__LENGTH                     0x00000001

#define __IPC0__INT0IP__POSITION                    0x00000000
#define __IPC0__INT0IP__MASK                        0x00000007
#define __IPC0__INT0IP__LENGTH                      0x00000003

#define __IPC0__IC1IP__POSITION                     0x00000004
#define __IPC0__IC1IP__MASK                         0x00000070
#define __IPC0__IC1IP__LENGTH                       0x00000003

#define __IPC0__OC1IP__POSITION                     0x00000008
#define __IPC0__OC1IP__MASK                         0x00000700
#define __IPC0__OC1IP__LENGTH                       0x00000003

#define __IPC0__T1IP__POSITION                      0x0000000C
#define __IPC0__T1IP__MASK                          0x00007000
#define __IPC0__T1IP__LENGTH                        0x00000003

#define __IPC0__INT0IP0__POSITION                   0x00000000
#define __IPC0__INT0IP0__MASK                       0x00000001
#define __IPC0__INT0IP0__LENGTH                     0x00000001

#define __IPC0__INT0IP1__POSITION                   0x00000001
#define __IPC0__INT0IP1__MASK                       0x00000002
#define __IPC0__INT0IP1__LENGTH                     0x00000001

#define __IPC0__INT0IP2__POSITION                   0x00000002
#define __IPC0__INT0IP2__MASK                       0x00000004
#define __IPC0__INT0IP2__LENGTH                     0x00000001

#define __IPC0__IC1IP0__POSITION                    0x00000004
#define __IPC0__IC1IP0__MASK                        0x00000010
#define __IPC0__IC1IP0__LENGTH                      0x00000001

#define __IPC0__IC1IP1__POSITION                    0x00000005
#define __IPC0__IC1IP1__MASK                        0x00000020
#define __IPC0__IC1IP1__LENGTH                      0x00000001

#define __IPC0__IC1IP2__POSITION                    0x00000006
#define __IPC0__IC1IP2__MASK                        0x00000040
#define __IPC0__IC1IP2__LENGTH                      0x00000001

#define __IPC0__OC1IP0__POSITION                    0x00000008
#define __IPC0__OC1IP0__MASK                        0x00000100
#define __IPC0__OC1IP0__LENGTH                      0x00000001

#define __IPC0__OC1IP1__POSITION                    0x00000009
#define __IPC0__OC1IP1__MASK                        0x00000200
#define __IPC0__OC1IP1__LENGTH                      0x00000001

#define __IPC0__OC1IP2__POSITION                    0x0000000A
#define __IPC0__OC1IP2__MASK                        0x00000400
#define __IPC0__OC1IP2__LENGTH                      0x00000001

#define __IPC0__T1IP0__POSITION                     0x0000000C
#define __IPC0__T1IP0__MASK                         0x00001000
#define __IPC0__T1IP0__LENGTH                       0x00000001

#define __IPC0__T1IP1__POSITION                     0x0000000D
#define __IPC0__T1IP1__MASK                         0x00002000
#define __IPC0__T1IP1__LENGTH                       0x00000001

#define __IPC0__T1IP2__POSITION                     0x0000000E
#define __IPC0__T1IP2__MASK                         0x00004000
#define __IPC0__T1IP2__LENGTH                       0x00000001

#define __IPC1__DMA0IP__POSITION                    0x00000000
#define __IPC1__DMA0IP__MASK                        0x00000007
#define __IPC1__DMA0IP__LENGTH                      0x00000003

#define __IPC1__IC2IP__POSITION                     0x00000004
#define __IPC1__IC2IP__MASK                         0x00000070
#define __IPC1__IC2IP__LENGTH                       0x00000003

#define __IPC1__OC2IP__POSITION                     0x00000008
#define __IPC1__OC2IP__MASK                         0x00000700
#define __IPC1__OC2IP__LENGTH                       0x00000003

#define __IPC1__T2IP__POSITION                      0x0000000C
#define __IPC1__T2IP__MASK                          0x00007000
#define __IPC1__T2IP__LENGTH                        0x00000003

#define __IPC1__DMA0IP0__POSITION                   0x00000000
#define __IPC1__DMA0IP0__MASK                       0x00000001
#define __IPC1__DMA0IP0__LENGTH                     0x00000001

#define __IPC1__DMA0IP1__POSITION                   0x00000001
#define __IPC1__DMA0IP1__MASK                       0x00000002
#define __IPC1__DMA0IP1__LENGTH                     0x00000001

#define __IPC1__DMA0IP2__POSITION                   0x00000002
#define __IPC1__DMA0IP2__MASK                       0x00000004
#define __IPC1__DMA0IP2__LENGTH                     0x00000001

#define __IPC1__IC2IP0__POSITION                    0x00000004
#define __IPC1__IC2IP0__MASK                        0x00000010
#define __IPC1__IC2IP0__LENGTH                      0x00000001

#define __IPC1__IC2IP1__POSITION                    0x00000005
#define __IPC1__IC2IP1__MASK                        0x00000020
#define __IPC1__IC2IP1__LENGTH                      0x00000001

#define __IPC1__IC2IP2__POSITION                    0x00000006
#define __IPC1__IC2IP2__MASK                        0x00000040
#define __IPC1__IC2IP2__LENGTH                      0x00000001

#define __IPC1__OC2IP0__POSITION                    0x00000008
#define __IPC1__OC2IP0__MASK                        0x00000100
#define __IPC1__OC2IP0__LENGTH                      0x00000001

#define __IPC1__OC2IP1__POSITION                    0x00000009
#define __IPC1__OC2IP1__MASK                        0x00000200
#define __IPC1__OC2IP1__LENGTH                      0x00000001

#define __IPC1__OC2IP2__POSITION                    0x0000000A
#define __IPC1__OC2IP2__MASK                        0x00000400
#define __IPC1__OC2IP2__LENGTH                      0x00000001

#define __IPC1__T2IP0__POSITION                     0x0000000C
#define __IPC1__T2IP0__MASK                         0x00001000
#define __IPC1__T2IP0__LENGTH                       0x00000001

#define __IPC1__T2IP1__POSITION                     0x0000000D
#define __IPC1__T2IP1__MASK                         0x00002000
#define __IPC1__T2IP1__LENGTH                       0x00000001

#define __IPC1__T2IP2__POSITION                     0x0000000E
#define __IPC1__T2IP2__MASK                         0x00004000
#define __IPC1__T2IP2__LENGTH                       0x00000001

#define __IPC2__T3IP__POSITION                      0x00000000
#define __IPC2__T3IP__MASK                          0x00000007
#define __IPC2__T3IP__LENGTH                        0x00000003

#define __IPC2__SPI1EIP__POSITION                   0x00000004
#define __IPC2__SPI1EIP__MASK                       0x00000070
#define __IPC2__SPI1EIP__LENGTH                     0x00000003

#define __IPC2__SPI1IP__POSITION                    0x00000008
#define __IPC2__SPI1IP__MASK                        0x00000700
#define __IPC2__SPI1IP__LENGTH                      0x00000003

#define __IPC2__U1RXIP__POSITION                    0x0000000C
#define __IPC2__U1RXIP__MASK                        0x00007000
#define __IPC2__U1RXIP__LENGTH                      0x00000003

#define __IPC2__T3IP0__POSITION                     0x00000000
#define __IPC2__T3IP0__MASK                         0x00000001
#define __IPC2__T3IP0__LENGTH                       0x00000001

#define __IPC2__T3IP1__POSITION                     0x00000001
#define __IPC2__T3IP1__MASK                         0x00000002
#define __IPC2__T3IP1__LENGTH                       0x00000001

#define __IPC2__T3IP2__POSITION                     0x00000002
#define __IPC2__T3IP2__MASK                         0x00000004
#define __IPC2__T3IP2__LENGTH                       0x00000001

#define __IPC2__SPI1EIP0__POSITION                  0x00000004
#define __IPC2__SPI1EIP0__MASK                      0x00000010
#define __IPC2__SPI1EIP0__LENGTH                    0x00000001

#define __IPC2__SPI1EIP1__POSITION                  0x00000005
#define __IPC2__SPI1EIP1__MASK                      0x00000020
#define __IPC2__SPI1EIP1__LENGTH                    0x00000001

#define __IPC2__SPI1EIP2__POSITION                  0x00000006
#define __IPC2__SPI1EIP2__MASK                      0x00000040
#define __IPC2__SPI1EIP2__LENGTH                    0x00000001

#define __IPC2__SPI1IP0__POSITION                   0x00000008
#define __IPC2__SPI1IP0__MASK                       0x00000100
#define __IPC2__SPI1IP0__LENGTH                     0x00000001

#define __IPC2__SPI1IP1__POSITION                   0x00000009
#define __IPC2__SPI1IP1__MASK                       0x00000200
#define __IPC2__SPI1IP1__LENGTH                     0x00000001

#define __IPC2__SPI1IP2__POSITION                   0x0000000A
#define __IPC2__SPI1IP2__MASK                       0x00000400
#define __IPC2__SPI1IP2__LENGTH                     0x00000001

#define __IPC2__U1RXIP0__POSITION                   0x0000000C
#define __IPC2__U1RXIP0__MASK                       0x00001000
#define __IPC2__U1RXIP0__LENGTH                     0x00000001

#define __IPC2__U1RXIP1__POSITION                   0x0000000D
#define __IPC2__U1RXIP1__MASK                       0x00002000
#define __IPC2__U1RXIP1__LENGTH                     0x00000001

#define __IPC2__U1RXIP2__POSITION                   0x0000000E
#define __IPC2__U1RXIP2__MASK                       0x00004000
#define __IPC2__U1RXIP2__LENGTH                     0x00000001

#define __IPC3__U1TXIP__POSITION                    0x00000000
#define __IPC3__U1TXIP__MASK                        0x00000007
#define __IPC3__U1TXIP__LENGTH                      0x00000003

#define __IPC3__AD1IP__POSITION                     0x00000004
#define __IPC3__AD1IP__MASK                         0x00000070
#define __IPC3__AD1IP__LENGTH                       0x00000003

#define __IPC3__DMA1IP__POSITION                    0x00000008
#define __IPC3__DMA1IP__MASK                        0x00000700
#define __IPC3__DMA1IP__LENGTH                      0x00000003

#define __IPC3__U1TXIP0__POSITION                   0x00000000
#define __IPC3__U1TXIP0__MASK                       0x00000001
#define __IPC3__U1TXIP0__LENGTH                     0x00000001

#define __IPC3__U1TXIP1__POSITION                   0x00000001
#define __IPC3__U1TXIP1__MASK                       0x00000002
#define __IPC3__U1TXIP1__LENGTH                     0x00000001

#define __IPC3__U1TXIP2__POSITION                   0x00000002
#define __IPC3__U1TXIP2__MASK                       0x00000004
#define __IPC3__U1TXIP2__LENGTH                     0x00000001

#define __IPC3__AD1IP0__POSITION                    0x00000004
#define __IPC3__AD1IP0__MASK                        0x00000010
#define __IPC3__AD1IP0__LENGTH                      0x00000001

#define __IPC3__AD1IP1__POSITION                    0x00000005
#define __IPC3__AD1IP1__MASK                        0x00000020
#define __IPC3__AD1IP1__LENGTH                      0x00000001

#define __IPC3__AD1IP2__POSITION                    0x00000006
#define __IPC3__AD1IP2__MASK                        0x00000040
#define __IPC3__AD1IP2__LENGTH                      0x00000001

#define __IPC3__DMA1IP0__POSITION                   0x00000008
#define __IPC3__DMA1IP0__MASK                       0x00000100
#define __IPC3__DMA1IP0__LENGTH                     0x00000001

#define __IPC3__DMA1IP1__POSITION                   0x00000009
#define __IPC3__DMA1IP1__MASK                       0x00000200
#define __IPC3__DMA1IP1__LENGTH                     0x00000001

#define __IPC3__DMA1IP2__POSITION                   0x0000000A
#define __IPC3__DMA1IP2__MASK                       0x00000400
#define __IPC3__DMA1IP2__LENGTH                     0x00000001

#define __IPC4__SI2C1IP__POSITION                   0x00000000
#define __IPC4__SI2C1IP__MASK                       0x00000007
#define __IPC4__SI2C1IP__LENGTH                     0x00000003

#define __IPC4__MI2C1IP__POSITION                   0x00000004
#define __IPC4__MI2C1IP__MASK                       0x00000070
#define __IPC4__MI2C1IP__LENGTH                     0x00000003

#define __IPC4__CMIP__POSITION                      0x00000008
#define __IPC4__CMIP__MASK                          0x00000700
#define __IPC4__CMIP__LENGTH                        0x00000003

#define __IPC4__CNIP__POSITION                      0x0000000C
#define __IPC4__CNIP__MASK                          0x00007000
#define __IPC4__CNIP__LENGTH                        0x00000003

#define __IPC4__SI2C1IP0__POSITION                  0x00000000
#define __IPC4__SI2C1IP0__MASK                      0x00000001
#define __IPC4__SI2C1IP0__LENGTH                    0x00000001

#define __IPC4__SI2C1IP1__POSITION                  0x00000001
#define __IPC4__SI2C1IP1__MASK                      0x00000002
#define __IPC4__SI2C1IP1__LENGTH                    0x00000001

#define __IPC4__SI2C1IP2__POSITION                  0x00000002
#define __IPC4__SI2C1IP2__MASK                      0x00000004
#define __IPC4__SI2C1IP2__LENGTH                    0x00000001

#define __IPC4__MI2C1IP0__POSITION                  0x00000004
#define __IPC4__MI2C1IP0__MASK                      0x00000010
#define __IPC4__MI2C1IP0__LENGTH                    0x00000001

#define __IPC4__MI2C1IP1__POSITION                  0x00000005
#define __IPC4__MI2C1IP1__MASK                      0x00000020
#define __IPC4__MI2C1IP1__LENGTH                    0x00000001

#define __IPC4__MI2C1IP2__POSITION                  0x00000006
#define __IPC4__MI2C1IP2__MASK                      0x00000040
#define __IPC4__MI2C1IP2__LENGTH                    0x00000001

#define __IPC4__CMIP0__POSITION                     0x00000008
#define __IPC4__CMIP0__MASK                         0x00000100
#define __IPC4__CMIP0__LENGTH                       0x00000001

#define __IPC4__CMIP1__POSITION                     0x00000009
#define __IPC4__CMIP1__MASK                         0x00000200
#define __IPC4__CMIP1__LENGTH                       0x00000001

#define __IPC4__CMIP2__POSITION                     0x0000000A
#define __IPC4__CMIP2__MASK                         0x00000400
#define __IPC4__CMIP2__LENGTH                       0x00000001

#define __IPC4__CNIP0__POSITION                     0x0000000C
#define __IPC4__CNIP0__MASK                         0x00001000
#define __IPC4__CNIP0__LENGTH                       0x00000001

#define __IPC4__CNIP1__POSITION                     0x0000000D
#define __IPC4__CNIP1__MASK                         0x00002000
#define __IPC4__CNIP1__LENGTH                       0x00000001

#define __IPC4__CNIP2__POSITION                     0x0000000E
#define __IPC4__CNIP2__MASK                         0x00004000
#define __IPC4__CNIP2__LENGTH                       0x00000001

#define __IPC5__INT1IP__POSITION                    0x00000000
#define __IPC5__INT1IP__MASK                        0x00000007
#define __IPC5__INT1IP__LENGTH                      0x00000003

#define __IPC5__IC7IP__POSITION                     0x00000008
#define __IPC5__IC7IP__MASK                         0x00000700
#define __IPC5__IC7IP__LENGTH                       0x00000003

#define __IPC5__IC8IP__POSITION                     0x0000000C
#define __IPC5__IC8IP__MASK                         0x00007000
#define __IPC5__IC8IP__LENGTH                       0x00000003

#define __IPC5__INT1IP0__POSITION                   0x00000000
#define __IPC5__INT1IP0__MASK                       0x00000001
#define __IPC5__INT1IP0__LENGTH                     0x00000001

#define __IPC5__INT1IP1__POSITION                   0x00000001
#define __IPC5__INT1IP1__MASK                       0x00000002
#define __IPC5__INT1IP1__LENGTH                     0x00000001

#define __IPC5__INT1IP2__POSITION                   0x00000002
#define __IPC5__INT1IP2__MASK                       0x00000004
#define __IPC5__INT1IP2__LENGTH                     0x00000001

#define __IPC5__IC7IP0__POSITION                    0x00000008
#define __IPC5__IC7IP0__MASK                        0x00000100
#define __IPC5__IC7IP0__LENGTH                      0x00000001

#define __IPC5__IC7IP1__POSITION                    0x00000009
#define __IPC5__IC7IP1__MASK                        0x00000200
#define __IPC5__IC7IP1__LENGTH                      0x00000001

#define __IPC5__IC7IP2__POSITION                    0x0000000A
#define __IPC5__IC7IP2__MASK                        0x00000400
#define __IPC5__IC7IP2__LENGTH                      0x00000001

#define __IPC5__IC8IP0__POSITION                    0x0000000C
#define __IPC5__IC8IP0__MASK                        0x00001000
#define __IPC5__IC8IP0__LENGTH                      0x00000001

#define __IPC5__IC8IP1__POSITION                    0x0000000D
#define __IPC5__IC8IP1__MASK                        0x00002000
#define __IPC5__IC8IP1__LENGTH                      0x00000001

#define __IPC5__IC8IP2__POSITION                    0x0000000E
#define __IPC5__IC8IP2__MASK                        0x00004000
#define __IPC5__IC8IP2__LENGTH                      0x00000001

#define __IPC6__DMA2IP__POSITION                    0x00000000
#define __IPC6__DMA2IP__MASK                        0x00000007
#define __IPC6__DMA2IP__LENGTH                      0x00000003

#define __IPC6__OC3IP__POSITION                     0x00000004
#define __IPC6__OC3IP__MASK                         0x00000070
#define __IPC6__OC3IP__LENGTH                       0x00000003

#define __IPC6__OC4IP__POSITION                     0x00000008
#define __IPC6__OC4IP__MASK                         0x00000700
#define __IPC6__OC4IP__LENGTH                       0x00000003

#define __IPC6__T4IP__POSITION                      0x0000000C
#define __IPC6__T4IP__MASK                          0x00007000
#define __IPC6__T4IP__LENGTH                        0x00000003

#define __IPC6__DMA2IP0__POSITION                   0x00000000
#define __IPC6__DMA2IP0__MASK                       0x00000001
#define __IPC6__DMA2IP0__LENGTH                     0x00000001

#define __IPC6__DMA2IP1__POSITION                   0x00000001
#define __IPC6__DMA2IP1__MASK                       0x00000002
#define __IPC6__DMA2IP1__LENGTH                     0x00000001

#define __IPC6__DMA2IP2__POSITION                   0x00000002
#define __IPC6__DMA2IP2__MASK                       0x00000004
#define __IPC6__DMA2IP2__LENGTH                     0x00000001

#define __IPC6__OC3IP0__POSITION                    0x00000004
#define __IPC6__OC3IP0__MASK                        0x00000010
#define __IPC6__OC3IP0__LENGTH                      0x00000001

#define __IPC6__OC3IP1__POSITION                    0x00000005
#define __IPC6__OC3IP1__MASK                        0x00000020
#define __IPC6__OC3IP1__LENGTH                      0x00000001

#define __IPC6__OC3IP2__POSITION                    0x00000006
#define __IPC6__OC3IP2__MASK                        0x00000040
#define __IPC6__OC3IP2__LENGTH                      0x00000001

#define __IPC6__OC4IP0__POSITION                    0x00000008
#define __IPC6__OC4IP0__MASK                        0x00000100
#define __IPC6__OC4IP0__LENGTH                      0x00000001

#define __IPC6__OC4IP1__POSITION                    0x00000009
#define __IPC6__OC4IP1__MASK                        0x00000200
#define __IPC6__OC4IP1__LENGTH                      0x00000001

#define __IPC6__OC4IP2__POSITION                    0x0000000A
#define __IPC6__OC4IP2__MASK                        0x00000400
#define __IPC6__OC4IP2__LENGTH                      0x00000001

#define __IPC6__T4IP0__POSITION                     0x0000000C
#define __IPC6__T4IP0__MASK                         0x00001000
#define __IPC6__T4IP0__LENGTH                       0x00000001

#define __IPC6__T4IP1__POSITION                     0x0000000D
#define __IPC6__T4IP1__MASK                         0x00002000
#define __IPC6__T4IP1__LENGTH                       0x00000001

#define __IPC6__T4IP2__POSITION                     0x0000000E
#define __IPC6__T4IP2__MASK                         0x00004000
#define __IPC6__T4IP2__LENGTH                       0x00000001

#define __IPC7__T5IP__POSITION                      0x00000000
#define __IPC7__T5IP__MASK                          0x00000007
#define __IPC7__T5IP__LENGTH                        0x00000003

#define __IPC7__INT2IP__POSITION                    0x00000004
#define __IPC7__INT2IP__MASK                        0x00000070
#define __IPC7__INT2IP__LENGTH                      0x00000003

#define __IPC7__U2RXIP__POSITION                    0x00000008
#define __IPC7__U2RXIP__MASK                        0x00000700
#define __IPC7__U2RXIP__LENGTH                      0x00000003

#define __IPC7__U2TXIP__POSITION                    0x0000000C
#define __IPC7__U2TXIP__MASK                        0x00007000
#define __IPC7__U2TXIP__LENGTH                      0x00000003

#define __IPC7__T5IP0__POSITION                     0x00000000
#define __IPC7__T5IP0__MASK                         0x00000001
#define __IPC7__T5IP0__LENGTH                       0x00000001

#define __IPC7__T5IP1__POSITION                     0x00000001
#define __IPC7__T5IP1__MASK                         0x00000002
#define __IPC7__T5IP1__LENGTH                       0x00000001

#define __IPC7__T5IP2__POSITION                     0x00000002
#define __IPC7__T5IP2__MASK                         0x00000004
#define __IPC7__T5IP2__LENGTH                       0x00000001

#define __IPC7__INT2IP0__POSITION                   0x00000004
#define __IPC7__INT2IP0__MASK                       0x00000010
#define __IPC7__INT2IP0__LENGTH                     0x00000001

#define __IPC7__INT2IP1__POSITION                   0x00000005
#define __IPC7__INT2IP1__MASK                       0x00000020
#define __IPC7__INT2IP1__LENGTH                     0x00000001

#define __IPC7__INT2IP2__POSITION                   0x00000006
#define __IPC7__INT2IP2__MASK                       0x00000040
#define __IPC7__INT2IP2__LENGTH                     0x00000001

#define __IPC7__U2RXIP0__POSITION                   0x00000008
#define __IPC7__U2RXIP0__MASK                       0x00000100
#define __IPC7__U2RXIP0__LENGTH                     0x00000001

#define __IPC7__U2RXIP1__POSITION                   0x00000009
#define __IPC7__U2RXIP1__MASK                       0x00000200
#define __IPC7__U2RXIP1__LENGTH                     0x00000001

#define __IPC7__U2RXIP2__POSITION                   0x0000000A
#define __IPC7__U2RXIP2__MASK                       0x00000400
#define __IPC7__U2RXIP2__LENGTH                     0x00000001

#define __IPC7__U2TXIP0__POSITION                   0x0000000C
#define __IPC7__U2TXIP0__MASK                       0x00001000
#define __IPC7__U2TXIP0__LENGTH                     0x00000001

#define __IPC7__U2TXIP1__POSITION                   0x0000000D
#define __IPC7__U2TXIP1__MASK                       0x00002000
#define __IPC7__U2TXIP1__LENGTH                     0x00000001

#define __IPC7__U2TXIP2__POSITION                   0x0000000E
#define __IPC7__U2TXIP2__MASK                       0x00004000
#define __IPC7__U2TXIP2__LENGTH                     0x00000001

#define __IPC8__SPI2EIP__POSITION                   0x00000000
#define __IPC8__SPI2EIP__MASK                       0x00000007
#define __IPC8__SPI2EIP__LENGTH                     0x00000003

#define __IPC8__SPI2IP__POSITION                    0x00000004
#define __IPC8__SPI2IP__MASK                        0x00000070
#define __IPC8__SPI2IP__LENGTH                      0x00000003

#define __IPC8__C1RXIP__POSITION                    0x00000008
#define __IPC8__C1RXIP__MASK                        0x00000700
#define __IPC8__C1RXIP__LENGTH                      0x00000003

#define __IPC8__C1IP__POSITION                      0x0000000C
#define __IPC8__C1IP__MASK                          0x00007000
#define __IPC8__C1IP__LENGTH                        0x00000003

#define __IPC8__SPI2EIP0__POSITION                  0x00000000
#define __IPC8__SPI2EIP0__MASK                      0x00000001
#define __IPC8__SPI2EIP0__LENGTH                    0x00000001

#define __IPC8__SPI2EIP1__POSITION                  0x00000001
#define __IPC8__SPI2EIP1__MASK                      0x00000002
#define __IPC8__SPI2EIP1__LENGTH                    0x00000001

#define __IPC8__SPI2EIP2__POSITION                  0x00000002
#define __IPC8__SPI2EIP2__MASK                      0x00000004
#define __IPC8__SPI2EIP2__LENGTH                    0x00000001

#define __IPC8__SPI2IP0__POSITION                   0x00000004
#define __IPC8__SPI2IP0__MASK                       0x00000010
#define __IPC8__SPI2IP0__LENGTH                     0x00000001

#define __IPC8__SPI2IP1__POSITION                   0x00000005
#define __IPC8__SPI2IP1__MASK                       0x00000020
#define __IPC8__SPI2IP1__LENGTH                     0x00000001

#define __IPC8__SPI2IP2__POSITION                   0x00000006
#define __IPC8__SPI2IP2__MASK                       0x00000040
#define __IPC8__SPI2IP2__LENGTH                     0x00000001

#define __IPC8__C1RXIP0__POSITION                   0x00000008
#define __IPC8__C1RXIP0__MASK                       0x00000100
#define __IPC8__C1RXIP0__LENGTH                     0x00000001

#define __IPC8__C1RXIP1__POSITION                   0x00000009
#define __IPC8__C1RXIP1__MASK                       0x00000200
#define __IPC8__C1RXIP1__LENGTH                     0x00000001

#define __IPC8__C1RXIP2__POSITION                   0x0000000A
#define __IPC8__C1RXIP2__MASK                       0x00000400
#define __IPC8__C1RXIP2__LENGTH                     0x00000001

#define __IPC8__C1IP0__POSITION                     0x0000000C
#define __IPC8__C1IP0__MASK                         0x00001000
#define __IPC8__C1IP0__LENGTH                       0x00000001

#define __IPC8__C1IP1__POSITION                     0x0000000D
#define __IPC8__C1IP1__MASK                         0x00002000
#define __IPC8__C1IP1__LENGTH                       0x00000001

#define __IPC8__C1IP2__POSITION                     0x0000000E
#define __IPC8__C1IP2__MASK                         0x00004000
#define __IPC8__C1IP2__LENGTH                       0x00000001

#define __IPC9__DMA3IP__POSITION                    0x00000000
#define __IPC9__DMA3IP__MASK                        0x00000007
#define __IPC9__DMA3IP__LENGTH                      0x00000003

#define __IPC9__DMA3IP0__POSITION                   0x00000000
#define __IPC9__DMA3IP0__MASK                       0x00000001
#define __IPC9__DMA3IP0__LENGTH                     0x00000001

#define __IPC9__DMA3IP1__POSITION                   0x00000001
#define __IPC9__DMA3IP1__MASK                       0x00000002
#define __IPC9__DMA3IP1__LENGTH                     0x00000001

#define __IPC9__DMA3IP2__POSITION                   0x00000002
#define __IPC9__DMA3IP2__MASK                       0x00000004
#define __IPC9__DMA3IP2__LENGTH                     0x00000001

#define __IPC11__PMPIP__POSITION                    0x00000004
#define __IPC11__PMPIP__MASK                        0x00000070
#define __IPC11__PMPIP__LENGTH                      0x00000003

#define __IPC11__DMA4IP__POSITION                   0x00000008
#define __IPC11__DMA4IP__MASK                       0x00000700
#define __IPC11__DMA4IP__LENGTH                     0x00000003

#define __IPC11__PMPIP0__POSITION                   0x00000004
#define __IPC11__PMPIP0__MASK                       0x00000010
#define __IPC11__PMPIP0__LENGTH                     0x00000001

#define __IPC11__PMPIP1__POSITION                   0x00000005
#define __IPC11__PMPIP1__MASK                       0x00000020
#define __IPC11__PMPIP1__LENGTH                     0x00000001

#define __IPC11__PMPIP2__POSITION                   0x00000006
#define __IPC11__PMPIP2__MASK                       0x00000040
#define __IPC11__PMPIP2__LENGTH                     0x00000001

#define __IPC11__DMA4IP0__POSITION                  0x00000008
#define __IPC11__DMA4IP0__MASK                      0x00000100
#define __IPC11__DMA4IP0__LENGTH                    0x00000001

#define __IPC11__DMA4IP1__POSITION                  0x00000009
#define __IPC11__DMA4IP1__MASK                      0x00000200
#define __IPC11__DMA4IP1__LENGTH                    0x00000001

#define __IPC11__DMA4IP2__POSITION                  0x0000000A
#define __IPC11__DMA4IP2__MASK                      0x00000400
#define __IPC11__DMA4IP2__LENGTH                    0x00000001

#define __IPC14__PWM1IP__POSITION                   0x00000004
#define __IPC14__PWM1IP__MASK                       0x00000070
#define __IPC14__PWM1IP__LENGTH                     0x00000003

#define __IPC14__QEI1IP__POSITION                   0x00000008
#define __IPC14__QEI1IP__MASK                       0x00000700
#define __IPC14__QEI1IP__LENGTH                     0x00000003

#define __IPC14__PWM1IP0__POSITION                  0x00000004
#define __IPC14__PWM1IP0__MASK                      0x00000010
#define __IPC14__PWM1IP0__LENGTH                    0x00000001

#define __IPC14__PWM1IP1__POSITION                  0x00000005
#define __IPC14__PWM1IP1__MASK                      0x00000020
#define __IPC14__PWM1IP1__LENGTH                    0x00000001

#define __IPC14__PWM1IP2__POSITION                  0x00000006
#define __IPC14__PWM1IP2__MASK                      0x00000040
#define __IPC14__PWM1IP2__LENGTH                    0x00000001

#define __IPC14__QEI1IP0__POSITION                  0x00000008
#define __IPC14__QEI1IP0__MASK                      0x00000100
#define __IPC14__QEI1IP0__LENGTH                    0x00000001

#define __IPC14__QEI1IP1__POSITION                  0x00000009
#define __IPC14__QEI1IP1__MASK                      0x00000200
#define __IPC14__QEI1IP1__LENGTH                    0x00000001

#define __IPC14__QEI1IP2__POSITION                  0x0000000A
#define __IPC14__QEI1IP2__MASK                      0x00000400
#define __IPC14__QEI1IP2__LENGTH                    0x00000001

#define __IPC15__DMA5IP__POSITION                   0x00000004
#define __IPC15__DMA5IP__MASK                       0x00000070
#define __IPC15__DMA5IP__LENGTH                     0x00000003

#define __IPC15__RTCIP__POSITION                    0x00000008
#define __IPC15__RTCIP__MASK                        0x00000700
#define __IPC15__RTCIP__LENGTH                      0x00000003

#define __IPC15__FLTA1IP__POSITION                  0x0000000C
#define __IPC15__FLTA1IP__MASK                      0x00007000
#define __IPC15__FLTA1IP__LENGTH                    0x00000003

#define __IPC15__DMA5IP0__POSITION                  0x00000004
#define __IPC15__DMA5IP0__MASK                      0x00000010
#define __IPC15__DMA5IP0__LENGTH                    0x00000001

#define __IPC15__DMA5IP1__POSITION                  0x00000005
#define __IPC15__DMA5IP1__MASK                      0x00000020
#define __IPC15__DMA5IP1__LENGTH                    0x00000001

#define __IPC15__DMA5IP2__POSITION                  0x00000006
#define __IPC15__DMA5IP2__MASK                      0x00000040
#define __IPC15__DMA5IP2__LENGTH                    0x00000001

#define __IPC15__RTCIP0__POSITION                   0x00000008
#define __IPC15__RTCIP0__MASK                       0x00000100
#define __IPC15__RTCIP0__LENGTH                     0x00000001

#define __IPC15__RTCIP1__POSITION                   0x00000009
#define __IPC15__RTCIP1__MASK                       0x00000200
#define __IPC15__RTCIP1__LENGTH                     0x00000001

#define __IPC15__RTCIP2__POSITION                   0x0000000A
#define __IPC15__RTCIP2__MASK                       0x00000400
#define __IPC15__RTCIP2__LENGTH                     0x00000001

#define __IPC15__FLTA1IP0__POSITION                 0x0000000C
#define __IPC15__FLTA1IP0__MASK                     0x00001000
#define __IPC15__FLTA1IP0__LENGTH                   0x00000001

#define __IPC15__FLTA1IP1__POSITION                 0x0000000D
#define __IPC15__FLTA1IP1__MASK                     0x00002000
#define __IPC15__FLTA1IP1__LENGTH                   0x00000001

#define __IPC15__FLTA1IP2__POSITION                 0x0000000E
#define __IPC15__FLTA1IP2__MASK                     0x00004000
#define __IPC15__FLTA1IP2__LENGTH                   0x00000001

#define __IPC16__U1EIP__POSITION                    0x00000004
#define __IPC16__U1EIP__MASK                        0x00000070
#define __IPC16__U1EIP__LENGTH                      0x00000003

#define __IPC16__U2EIP__POSITION                    0x00000008
#define __IPC16__U2EIP__MASK                        0x00000700
#define __IPC16__U2EIP__LENGTH                      0x00000003

#define __IPC16__CRCIP__POSITION                    0x0000000C
#define __IPC16__CRCIP__MASK                        0x00007000
#define __IPC16__CRCIP__LENGTH                      0x00000003

#define __IPC16__U1EIP0__POSITION                   0x00000004
#define __IPC16__U1EIP0__MASK                       0x00000010
#define __IPC16__U1EIP0__LENGTH                     0x00000001

#define __IPC16__U1EIP1__POSITION                   0x00000005
#define __IPC16__U1EIP1__MASK                       0x00000020
#define __IPC16__U1EIP1__LENGTH                     0x00000001

#define __IPC16__U1EIP2__POSITION                   0x00000006
#define __IPC16__U1EIP2__MASK                       0x00000040
#define __IPC16__U1EIP2__LENGTH                     0x00000001

#define __IPC16__U2EIP0__POSITION                   0x00000008
#define __IPC16__U2EIP0__MASK                       0x00000100
#define __IPC16__U2EIP0__LENGTH                     0x00000001

#define __IPC16__U2EIP1__POSITION                   0x00000009
#define __IPC16__U2EIP1__MASK                       0x00000200
#define __IPC16__U2EIP1__LENGTH                     0x00000001

#define __IPC16__U2EIP2__POSITION                   0x0000000A
#define __IPC16__U2EIP2__MASK                       0x00000400
#define __IPC16__U2EIP2__LENGTH                     0x00000001

#define __IPC16__CRCIP0__POSITION                   0x0000000C
#define __IPC16__CRCIP0__MASK                       0x00001000
#define __IPC16__CRCIP0__LENGTH                     0x00000001

#define __IPC16__CRCIP1__POSITION                   0x0000000D
#define __IPC16__CRCIP1__MASK                       0x00002000
#define __IPC16__CRCIP1__LENGTH                     0x00000001

#define __IPC16__CRCIP2__POSITION                   0x0000000E
#define __IPC16__CRCIP2__MASK                       0x00004000
#define __IPC16__CRCIP2__LENGTH                     0x00000001

#define __IPC17__DMA6IP__POSITION                   0x00000000
#define __IPC17__DMA6IP__MASK                       0x00000007
#define __IPC17__DMA6IP__LENGTH                     0x00000003

#define __IPC17__DMA7IP__POSITION                   0x00000004
#define __IPC17__DMA7IP__MASK                       0x00000070
#define __IPC17__DMA7IP__LENGTH                     0x00000003

#define __IPC17__C1TXIP__POSITION                   0x00000008
#define __IPC17__C1TXIP__MASK                       0x00000700
#define __IPC17__C1TXIP__LENGTH                     0x00000003

#define __IPC17__DMA6IP0__POSITION                  0x00000000
#define __IPC17__DMA6IP0__MASK                      0x00000001
#define __IPC17__DMA6IP0__LENGTH                    0x00000001

#define __IPC17__DMA6IP1__POSITION                  0x00000001
#define __IPC17__DMA6IP1__MASK                      0x00000002
#define __IPC17__DMA6IP1__LENGTH                    0x00000001

#define __IPC17__DMA6IP2__POSITION                  0x00000002
#define __IPC17__DMA6IP2__MASK                      0x00000004
#define __IPC17__DMA6IP2__LENGTH                    0x00000001

#define __IPC17__DMA7IP0__POSITION                  0x00000004
#define __IPC17__DMA7IP0__MASK                      0x00000010
#define __IPC17__DMA7IP0__LENGTH                    0x00000001

#define __IPC17__DMA7IP1__POSITION                  0x00000005
#define __IPC17__DMA7IP1__MASK                      0x00000020
#define __IPC17__DMA7IP1__LENGTH                    0x00000001

#define __IPC17__DMA7IP2__POSITION                  0x00000006
#define __IPC17__DMA7IP2__MASK                      0x00000040
#define __IPC17__DMA7IP2__LENGTH                    0x00000001

#define __IPC17__C1TXIP0__POSITION                  0x00000008
#define __IPC17__C1TXIP0__MASK                      0x00000100
#define __IPC17__C1TXIP0__LENGTH                    0x00000001

#define __IPC17__C1TXIP1__POSITION                  0x00000009
#define __IPC17__C1TXIP1__MASK                      0x00000200
#define __IPC17__C1TXIP1__LENGTH                    0x00000001

#define __IPC17__C1TXIP2__POSITION                  0x0000000A
#define __IPC17__C1TXIP2__MASK                      0x00000400
#define __IPC17__C1TXIP2__LENGTH                    0x00000001

#define __IPC18__PWM2IP__POSITION                   0x00000004
#define __IPC18__PWM2IP__MASK                       0x00000070
#define __IPC18__PWM2IP__LENGTH                     0x00000003

#define __IPC18__FLTA2IP__POSITION                  0x00000008
#define __IPC18__FLTA2IP__MASK                      0x00000700
#define __IPC18__FLTA2IP__LENGTH                    0x00000003

#define __IPC18__QEI2IP__POSITION                   0x0000000C
#define __IPC18__QEI2IP__MASK                       0x00007000
#define __IPC18__QEI2IP__LENGTH                     0x00000003

#define __IPC18__PWM2IP0__POSITION                  0x00000004
#define __IPC18__PWM2IP0__MASK                      0x00000010
#define __IPC18__PWM2IP0__LENGTH                    0x00000001

#define __IPC18__PWM2IP1__POSITION                  0x00000005
#define __IPC18__PWM2IP1__MASK                      0x00000020
#define __IPC18__PWM2IP1__LENGTH                    0x00000001

#define __IPC18__PWM2IP2__POSITION                  0x00000006
#define __IPC18__PWM2IP2__MASK                      0x00000040
#define __IPC18__PWM2IP2__LENGTH                    0x00000001

#define __IPC18__FLTA2IP0__POSITION                 0x00000008
#define __IPC18__FLTA2IP0__MASK                     0x00000100
#define __IPC18__FLTA2IP0__LENGTH                   0x00000001

#define __IPC18__FLTA2IP1__POSITION                 0x00000009
#define __IPC18__FLTA2IP1__MASK                     0x00000200
#define __IPC18__FLTA2IP1__LENGTH                   0x00000001

#define __IPC18__FLTA2IP2__POSITION                 0x0000000A
#define __IPC18__FLTA2IP2__MASK                     0x00000400
#define __IPC18__FLTA2IP2__LENGTH                   0x00000001

#define __IPC18__QEI2IP0__POSITION                  0x0000000C
#define __IPC18__QEI2IP0__MASK                      0x00001000
#define __IPC18__QEI2IP0__LENGTH                    0x00000001

#define __IPC18__QEI2IP1__POSITION                  0x0000000D
#define __IPC18__QEI2IP1__MASK                      0x00002000
#define __IPC18__QEI2IP1__LENGTH                    0x00000001

#define __IPC18__QEI2IP2__POSITION                  0x0000000E
#define __IPC18__QEI2IP2__MASK                      0x00004000
#define __IPC18__QEI2IP2__LENGTH                    0x00000001

#define __IPC19__DAC1RIP__POSITION                  0x00000008
#define __IPC19__DAC1RIP__MASK                      0x00000700
#define __IPC19__DAC1RIP__LENGTH                    0x00000003

#define __IPC19__DAC1LIP__POSITION                  0x0000000C
#define __IPC19__DAC1LIP__MASK                      0x00007000
#define __IPC19__DAC1LIP__LENGTH                    0x00000003

#define __IPC19__DAC1RIP0__POSITION                 0x00000008
#define __IPC19__DAC1RIP0__MASK                     0x00000100
#define __IPC19__DAC1RIP0__LENGTH                   0x00000001

#define __IPC19__DAC1RIP1__POSITION                 0x00000009
#define __IPC19__DAC1RIP1__MASK                     0x00000200
#define __IPC19__DAC1RIP1__LENGTH                   0x00000001

#define __IPC19__DAC1RIP2__POSITION                 0x0000000A
#define __IPC19__DAC1RIP2__MASK                     0x00000400
#define __IPC19__DAC1RIP2__LENGTH                   0x00000001

#define __IPC19__DAC1LIP0__POSITION                 0x0000000C
#define __IPC19__DAC1LIP0__MASK                     0x00001000
#define __IPC19__DAC1LIP0__LENGTH                   0x00000001

#define __IPC19__DAC1LIP1__POSITION                 0x0000000D
#define __IPC19__DAC1LIP1__MASK                     0x00002000
#define __IPC19__DAC1LIP1__LENGTH                   0x00000001

#define __IPC19__DAC1LIP2__POSITION                 0x0000000E
#define __IPC19__DAC1LIP2__MASK                     0x00004000
#define __IPC19__DAC1LIP2__LENGTH                   0x00000001

#define __INTTREG__VECNUM__POSITION                 0x00000000
#define __INTTREG__VECNUM__MASK                     0x0000007F
#define __INTTREG__VECNUM__LENGTH                   0x00000007

#define __INTTREG__ILR__POSITION                    0x00000008
#define __INTTREG__ILR__MASK                        0x00000F00
#define __INTTREG__ILR__LENGTH                      0x00000004

#define __INTTREG__VECNUM0__POSITION                0x00000000
#define __INTTREG__VECNUM0__MASK                    0x00000001
#define __INTTREG__VECNUM0__LENGTH                  0x00000001

#define __INTTREG__VECNUM1__POSITION                0x00000001
#define __INTTREG__VECNUM1__MASK                    0x00000002
#define __INTTREG__VECNUM1__LENGTH                  0x00000001

#define __INTTREG__VECNUM2__POSITION                0x00000002
#define __INTTREG__VECNUM2__MASK                    0x00000004
#define __INTTREG__VECNUM2__LENGTH                  0x00000001

#define __INTTREG__VECNUM3__POSITION                0x00000003
#define __INTTREG__VECNUM3__MASK                    0x00000008
#define __INTTREG__VECNUM3__LENGTH                  0x00000001

#define __INTTREG__VECNUM4__POSITION                0x00000004
#define __INTTREG__VECNUM4__MASK                    0x00000010
#define __INTTREG__VECNUM4__LENGTH                  0x00000001

#define __INTTREG__VECNUM5__POSITION                0x00000005
#define __INTTREG__VECNUM5__MASK                    0x00000020
#define __INTTREG__VECNUM5__LENGTH                  0x00000001

#define __INTTREG__VECNUM6__POSITION                0x00000006
#define __INTTREG__VECNUM6__MASK                    0x00000040
#define __INTTREG__VECNUM6__LENGTH                  0x00000001

#define __INTTREG__ILR0__POSITION                   0x00000008
#define __INTTREG__ILR0__MASK                       0x00000100
#define __INTTREG__ILR0__LENGTH                     0x00000001

#define __INTTREG__ILR1__POSITION                   0x00000009
#define __INTTREG__ILR1__MASK                       0x00000200
#define __INTTREG__ILR1__LENGTH                     0x00000001

#define __INTTREG__ILR2__POSITION                   0x0000000A
#define __INTTREG__ILR2__MASK                       0x00000400
#define __INTTREG__ILR2__LENGTH                     0x00000001

#define __INTTREG__ILR3__POSITION                   0x0000000B
#define __INTTREG__ILR3__MASK                       0x00000800
#define __INTTREG__ILR3__LENGTH                     0x00000001

#define __T1CON__TCS__POSITION                      0x00000001
#define __T1CON__TCS__MASK                          0x00000002
#define __T1CON__TCS__LENGTH                        0x00000001

#define __T1CON__TSYNC__POSITION                    0x00000002
#define __T1CON__TSYNC__MASK                        0x00000004
#define __T1CON__TSYNC__LENGTH                      0x00000001

#define __T1CON__TCKPS__POSITION                    0x00000004
#define __T1CON__TCKPS__MASK                        0x00000030
#define __T1CON__TCKPS__LENGTH                      0x00000002

#define __T1CON__TGATE__POSITION                    0x00000006
#define __T1CON__TGATE__MASK                        0x00000040
#define __T1CON__TGATE__LENGTH                      0x00000001

#define __T1CON__TSIDL__POSITION                    0x0000000D
#define __T1CON__TSIDL__MASK                        0x00002000
#define __T1CON__TSIDL__LENGTH                      0x00000001

#define __T1CON__TON__POSITION                      0x0000000F
#define __T1CON__TON__MASK                          0x00008000
#define __T1CON__TON__LENGTH                        0x00000001

#define __T1CON__TCKPS0__POSITION                   0x00000004
#define __T1CON__TCKPS0__MASK                       0x00000010
#define __T1CON__TCKPS0__LENGTH                     0x00000001

#define __T1CON__TCKPS1__POSITION                   0x00000005
#define __T1CON__TCKPS1__MASK                       0x00000020
#define __T1CON__TCKPS1__LENGTH                     0x00000001

#define __T2CON__TCS__POSITION                      0x00000001
#define __T2CON__TCS__MASK                          0x00000002
#define __T2CON__TCS__LENGTH                        0x00000001

#define __T2CON__T32__POSITION                      0x00000003
#define __T2CON__T32__MASK                          0x00000008
#define __T2CON__T32__LENGTH                        0x00000001

#define __T2CON__TCKPS__POSITION                    0x00000004
#define __T2CON__TCKPS__MASK                        0x00000030
#define __T2CON__TCKPS__LENGTH                      0x00000002

#define __T2CON__TGATE__POSITION                    0x00000006
#define __T2CON__TGATE__MASK                        0x00000040
#define __T2CON__TGATE__LENGTH                      0x00000001

#define __T2CON__TSIDL__POSITION                    0x0000000D
#define __T2CON__TSIDL__MASK                        0x00002000
#define __T2CON__TSIDL__LENGTH                      0x00000001

#define __T2CON__TON__POSITION                      0x0000000F
#define __T2CON__TON__MASK                          0x00008000
#define __T2CON__TON__LENGTH                        0x00000001

#define __T2CON__TCKPS0__POSITION                   0x00000004
#define __T2CON__TCKPS0__MASK                       0x00000010
#define __T2CON__TCKPS0__LENGTH                     0x00000001

#define __T2CON__TCKPS1__POSITION                   0x00000005
#define __T2CON__TCKPS1__MASK                       0x00000020
#define __T2CON__TCKPS1__LENGTH                     0x00000001

#define __T3CON__TCS__POSITION                      0x00000001
#define __T3CON__TCS__MASK                          0x00000002
#define __T3CON__TCS__LENGTH                        0x00000001

#define __T3CON__TCKPS__POSITION                    0x00000004
#define __T3CON__TCKPS__MASK                        0x00000030
#define __T3CON__TCKPS__LENGTH                      0x00000002

#define __T3CON__TGATE__POSITION                    0x00000006
#define __T3CON__TGATE__MASK                        0x00000040
#define __T3CON__TGATE__LENGTH                      0x00000001

#define __T3CON__TSIDL__POSITION                    0x0000000D
#define __T3CON__TSIDL__MASK                        0x00002000
#define __T3CON__TSIDL__LENGTH                      0x00000001

#define __T3CON__TON__POSITION                      0x0000000F
#define __T3CON__TON__MASK                          0x00008000
#define __T3CON__TON__LENGTH                        0x00000001

#define __T3CON__TCKPS0__POSITION                   0x00000004
#define __T3CON__TCKPS0__MASK                       0x00000010
#define __T3CON__TCKPS0__LENGTH                     0x00000001

#define __T3CON__TCKPS1__POSITION                   0x00000005
#define __T3CON__TCKPS1__MASK                       0x00000020
#define __T3CON__TCKPS1__LENGTH                     0x00000001

#define __T4CON__TCS__POSITION                      0x00000001
#define __T4CON__TCS__MASK                          0x00000002
#define __T4CON__TCS__LENGTH                        0x00000001

#define __T4CON__T32__POSITION                      0x00000003
#define __T4CON__T32__MASK                          0x00000008
#define __T4CON__T32__LENGTH                        0x00000001

#define __T4CON__TCKPS__POSITION                    0x00000004
#define __T4CON__TCKPS__MASK                        0x00000030
#define __T4CON__TCKPS__LENGTH                      0x00000002

#define __T4CON__TGATE__POSITION                    0x00000006
#define __T4CON__TGATE__MASK                        0x00000040
#define __T4CON__TGATE__LENGTH                      0x00000001

#define __T4CON__TSIDL__POSITION                    0x0000000D
#define __T4CON__TSIDL__MASK                        0x00002000
#define __T4CON__TSIDL__LENGTH                      0x00000001

#define __T4CON__TON__POSITION                      0x0000000F
#define __T4CON__TON__MASK                          0x00008000
#define __T4CON__TON__LENGTH                        0x00000001

#define __T4CON__TCKPS0__POSITION                   0x00000004
#define __T4CON__TCKPS0__MASK                       0x00000010
#define __T4CON__TCKPS0__LENGTH                     0x00000001

#define __T4CON__TCKPS1__POSITION                   0x00000005
#define __T4CON__TCKPS1__MASK                       0x00000020
#define __T4CON__TCKPS1__LENGTH                     0x00000001

#define __T5CON__TCS__POSITION                      0x00000001
#define __T5CON__TCS__MASK                          0x00000002
#define __T5CON__TCS__LENGTH                        0x00000001

#define __T5CON__TCKPS__POSITION                    0x00000004
#define __T5CON__TCKPS__MASK                        0x00000030
#define __T5CON__TCKPS__LENGTH                      0x00000002

#define __T5CON__TGATE__POSITION                    0x00000006
#define __T5CON__TGATE__MASK                        0x00000040
#define __T5CON__TGATE__LENGTH                      0x00000001

#define __T5CON__TSIDL__POSITION                    0x0000000D
#define __T5CON__TSIDL__MASK                        0x00002000
#define __T5CON__TSIDL__LENGTH                      0x00000001

#define __T5CON__TON__POSITION                      0x0000000F
#define __T5CON__TON__MASK                          0x00008000
#define __T5CON__TON__LENGTH                        0x00000001

#define __T5CON__TCKPS0__POSITION                   0x00000004
#define __T5CON__TCKPS0__MASK                       0x00000010
#define __T5CON__TCKPS0__LENGTH                     0x00000001

#define __T5CON__TCKPS1__POSITION                   0x00000005
#define __T5CON__TCKPS1__MASK                       0x00000020
#define __T5CON__TCKPS1__LENGTH                     0x00000001

#define __IC1CON__ICM__POSITION                     0x00000000
#define __IC1CON__ICM__MASK                         0x00000007
#define __IC1CON__ICM__LENGTH                       0x00000003

#define __IC1CON__ICBNE__POSITION                   0x00000003
#define __IC1CON__ICBNE__MASK                       0x00000008
#define __IC1CON__ICBNE__LENGTH                     0x00000001

#define __IC1CON__ICOV__POSITION                    0x00000004
#define __IC1CON__ICOV__MASK                        0x00000010
#define __IC1CON__ICOV__LENGTH                      0x00000001

#define __IC1CON__ICI__POSITION                     0x00000005
#define __IC1CON__ICI__MASK                         0x00000060
#define __IC1CON__ICI__LENGTH                       0x00000002

#define __IC1CON__ICTMR__POSITION                   0x00000007
#define __IC1CON__ICTMR__MASK                       0x00000080
#define __IC1CON__ICTMR__LENGTH                     0x00000001

#define __IC1CON__ICSIDL__POSITION                  0x0000000D
#define __IC1CON__ICSIDL__MASK                      0x00002000
#define __IC1CON__ICSIDL__LENGTH                    0x00000001

#define __IC1CON__ICM0__POSITION                    0x00000000
#define __IC1CON__ICM0__MASK                        0x00000001
#define __IC1CON__ICM0__LENGTH                      0x00000001

#define __IC1CON__ICM1__POSITION                    0x00000001
#define __IC1CON__ICM1__MASK                        0x00000002
#define __IC1CON__ICM1__LENGTH                      0x00000001

#define __IC1CON__ICM2__POSITION                    0x00000002
#define __IC1CON__ICM2__MASK                        0x00000004
#define __IC1CON__ICM2__LENGTH                      0x00000001

#define __IC1CON__ICI0__POSITION                    0x00000005
#define __IC1CON__ICI0__MASK                        0x00000020
#define __IC1CON__ICI0__LENGTH                      0x00000001

#define __IC1CON__ICI1__POSITION                    0x00000006
#define __IC1CON__ICI1__MASK                        0x00000040
#define __IC1CON__ICI1__LENGTH                      0x00000001

#define __IC2CON__ICM__POSITION                     0x00000000
#define __IC2CON__ICM__MASK                         0x00000007
#define __IC2CON__ICM__LENGTH                       0x00000003

#define __IC2CON__ICBNE__POSITION                   0x00000003
#define __IC2CON__ICBNE__MASK                       0x00000008
#define __IC2CON__ICBNE__LENGTH                     0x00000001

#define __IC2CON__ICOV__POSITION                    0x00000004
#define __IC2CON__ICOV__MASK                        0x00000010
#define __IC2CON__ICOV__LENGTH                      0x00000001

#define __IC2CON__ICI__POSITION                     0x00000005
#define __IC2CON__ICI__MASK                         0x00000060
#define __IC2CON__ICI__LENGTH                       0x00000002

#define __IC2CON__ICTMR__POSITION                   0x00000007
#define __IC2CON__ICTMR__MASK                       0x00000080
#define __IC2CON__ICTMR__LENGTH                     0x00000001

#define __IC2CON__ICSIDL__POSITION                  0x0000000D
#define __IC2CON__ICSIDL__MASK                      0x00002000
#define __IC2CON__ICSIDL__LENGTH                    0x00000001

#define __IC2CON__ICM0__POSITION                    0x00000000
#define __IC2CON__ICM0__MASK                        0x00000001
#define __IC2CON__ICM0__LENGTH                      0x00000001

#define __IC2CON__ICM1__POSITION                    0x00000001
#define __IC2CON__ICM1__MASK                        0x00000002
#define __IC2CON__ICM1__LENGTH                      0x00000001

#define __IC2CON__ICM2__POSITION                    0x00000002
#define __IC2CON__ICM2__MASK                        0x00000004
#define __IC2CON__ICM2__LENGTH                      0x00000001

#define __IC2CON__ICI0__POSITION                    0x00000005
#define __IC2CON__ICI0__MASK                        0x00000020
#define __IC2CON__ICI0__LENGTH                      0x00000001

#define __IC2CON__ICI1__POSITION                    0x00000006
#define __IC2CON__ICI1__MASK                        0x00000040
#define __IC2CON__ICI1__LENGTH                      0x00000001

#define __IC7CON__ICM__POSITION                     0x00000000
#define __IC7CON__ICM__MASK                         0x00000007
#define __IC7CON__ICM__LENGTH                       0x00000003

#define __IC7CON__ICBNE__POSITION                   0x00000003
#define __IC7CON__ICBNE__MASK                       0x00000008
#define __IC7CON__ICBNE__LENGTH                     0x00000001

#define __IC7CON__ICOV__POSITION                    0x00000004
#define __IC7CON__ICOV__MASK                        0x00000010
#define __IC7CON__ICOV__LENGTH                      0x00000001

#define __IC7CON__ICI__POSITION                     0x00000005
#define __IC7CON__ICI__MASK                         0x00000060
#define __IC7CON__ICI__LENGTH                       0x00000002

#define __IC7CON__ICTMR__POSITION                   0x00000007
#define __IC7CON__ICTMR__MASK                       0x00000080
#define __IC7CON__ICTMR__LENGTH                     0x00000001

#define __IC7CON__ICSIDL__POSITION                  0x0000000D
#define __IC7CON__ICSIDL__MASK                      0x00002000
#define __IC7CON__ICSIDL__LENGTH                    0x00000001

#define __IC7CON__ICM0__POSITION                    0x00000000
#define __IC7CON__ICM0__MASK                        0x00000001
#define __IC7CON__ICM0__LENGTH                      0x00000001

#define __IC7CON__ICM1__POSITION                    0x00000001
#define __IC7CON__ICM1__MASK                        0x00000002
#define __IC7CON__ICM1__LENGTH                      0x00000001

#define __IC7CON__ICM2__POSITION                    0x00000002
#define __IC7CON__ICM2__MASK                        0x00000004
#define __IC7CON__ICM2__LENGTH                      0x00000001

#define __IC7CON__ICI0__POSITION                    0x00000005
#define __IC7CON__ICI0__MASK                        0x00000020
#define __IC7CON__ICI0__LENGTH                      0x00000001

#define __IC7CON__ICI1__POSITION                    0x00000006
#define __IC7CON__ICI1__MASK                        0x00000040
#define __IC7CON__ICI1__LENGTH                      0x00000001

#define __IC8CON__ICM__POSITION                     0x00000000
#define __IC8CON__ICM__MASK                         0x00000007
#define __IC8CON__ICM__LENGTH                       0x00000003

#define __IC8CON__ICBNE__POSITION                   0x00000003
#define __IC8CON__ICBNE__MASK                       0x00000008
#define __IC8CON__ICBNE__LENGTH                     0x00000001

#define __IC8CON__ICOV__POSITION                    0x00000004
#define __IC8CON__ICOV__MASK                        0x00000010
#define __IC8CON__ICOV__LENGTH                      0x00000001

#define __IC8CON__ICI__POSITION                     0x00000005
#define __IC8CON__ICI__MASK                         0x00000060
#define __IC8CON__ICI__LENGTH                       0x00000002

#define __IC8CON__ICTMR__POSITION                   0x00000007
#define __IC8CON__ICTMR__MASK                       0x00000080
#define __IC8CON__ICTMR__LENGTH                     0x00000001

#define __IC8CON__ICSIDL__POSITION                  0x0000000D
#define __IC8CON__ICSIDL__MASK                      0x00002000
#define __IC8CON__ICSIDL__LENGTH                    0x00000001

#define __IC8CON__ICM0__POSITION                    0x00000000
#define __IC8CON__ICM0__MASK                        0x00000001
#define __IC8CON__ICM0__LENGTH                      0x00000001

#define __IC8CON__ICM1__POSITION                    0x00000001
#define __IC8CON__ICM1__MASK                        0x00000002
#define __IC8CON__ICM1__LENGTH                      0x00000001

#define __IC8CON__ICM2__POSITION                    0x00000002
#define __IC8CON__ICM2__MASK                        0x00000004
#define __IC8CON__ICM2__LENGTH                      0x00000001

#define __IC8CON__ICI0__POSITION                    0x00000005
#define __IC8CON__ICI0__MASK                        0x00000020
#define __IC8CON__ICI0__LENGTH                      0x00000001

#define __IC8CON__ICI1__POSITION                    0x00000006
#define __IC8CON__ICI1__MASK                        0x00000040
#define __IC8CON__ICI1__LENGTH                      0x00000001

#define __OC1CON__OCM__POSITION                     0x00000000
#define __OC1CON__OCM__MASK                         0x00000007
#define __OC1CON__OCM__LENGTH                       0x00000003

#define __OC1CON__OCTSEL__POSITION                  0x00000003
#define __OC1CON__OCTSEL__MASK                      0x00000008
#define __OC1CON__OCTSEL__LENGTH                    0x00000001

#define __OC1CON__OCFLT__POSITION                   0x00000004
#define __OC1CON__OCFLT__MASK                       0x00000010
#define __OC1CON__OCFLT__LENGTH                     0x00000001

#define __OC1CON__OCSIDL__POSITION                  0x0000000D
#define __OC1CON__OCSIDL__MASK                      0x00002000
#define __OC1CON__OCSIDL__LENGTH                    0x00000001

#define __OC1CON__OCM0__POSITION                    0x00000000
#define __OC1CON__OCM0__MASK                        0x00000001
#define __OC1CON__OCM0__LENGTH                      0x00000001

#define __OC1CON__OCM1__POSITION                    0x00000001
#define __OC1CON__OCM1__MASK                        0x00000002
#define __OC1CON__OCM1__LENGTH                      0x00000001

#define __OC1CON__OCM2__POSITION                    0x00000002
#define __OC1CON__OCM2__MASK                        0x00000004
#define __OC1CON__OCM2__LENGTH                      0x00000001

#define __OC2CON__OCM__POSITION                     0x00000000
#define __OC2CON__OCM__MASK                         0x00000007
#define __OC2CON__OCM__LENGTH                       0x00000003

#define __OC2CON__OCTSEL__POSITION                  0x00000003
#define __OC2CON__OCTSEL__MASK                      0x00000008
#define __OC2CON__OCTSEL__LENGTH                    0x00000001

#define __OC2CON__OCFLT__POSITION                   0x00000004
#define __OC2CON__OCFLT__MASK                       0x00000010
#define __OC2CON__OCFLT__LENGTH                     0x00000001

#define __OC2CON__OCSIDL__POSITION                  0x0000000D
#define __OC2CON__OCSIDL__MASK                      0x00002000
#define __OC2CON__OCSIDL__LENGTH                    0x00000001

#define __OC2CON__OCM0__POSITION                    0x00000000
#define __OC2CON__OCM0__MASK                        0x00000001
#define __OC2CON__OCM0__LENGTH                      0x00000001

#define __OC2CON__OCM1__POSITION                    0x00000001
#define __OC2CON__OCM1__MASK                        0x00000002
#define __OC2CON__OCM1__LENGTH                      0x00000001

#define __OC2CON__OCM2__POSITION                    0x00000002
#define __OC2CON__OCM2__MASK                        0x00000004
#define __OC2CON__OCM2__LENGTH                      0x00000001

#define __OC3CON__OCM__POSITION                     0x00000000
#define __OC3CON__OCM__MASK                         0x00000007
#define __OC3CON__OCM__LENGTH                       0x00000003

#define __OC3CON__OCTSEL__POSITION                  0x00000003
#define __OC3CON__OCTSEL__MASK                      0x00000008
#define __OC3CON__OCTSEL__LENGTH                    0x00000001

#define __OC3CON__OCFLT__POSITION                   0x00000004
#define __OC3CON__OCFLT__MASK                       0x00000010
#define __OC3CON__OCFLT__LENGTH                     0x00000001

#define __OC3CON__OCSIDL__POSITION                  0x0000000D
#define __OC3CON__OCSIDL__MASK                      0x00002000
#define __OC3CON__OCSIDL__LENGTH                    0x00000001

#define __OC3CON__OCM0__POSITION                    0x00000000
#define __OC3CON__OCM0__MASK                        0x00000001
#define __OC3CON__OCM0__LENGTH                      0x00000001

#define __OC3CON__OCM1__POSITION                    0x00000001
#define __OC3CON__OCM1__MASK                        0x00000002
#define __OC3CON__OCM1__LENGTH                      0x00000001

#define __OC3CON__OCM2__POSITION                    0x00000002
#define __OC3CON__OCM2__MASK                        0x00000004
#define __OC3CON__OCM2__LENGTH                      0x00000001

#define __OC4CON__OCM__POSITION                     0x00000000
#define __OC4CON__OCM__MASK                         0x00000007
#define __OC4CON__OCM__LENGTH                       0x00000003

#define __OC4CON__OCTSEL__POSITION                  0x00000003
#define __OC4CON__OCTSEL__MASK                      0x00000008
#define __OC4CON__OCTSEL__LENGTH                    0x00000001

#define __OC4CON__OCFLT__POSITION                   0x00000004
#define __OC4CON__OCFLT__MASK                       0x00000010
#define __OC4CON__OCFLT__LENGTH                     0x00000001

#define __OC4CON__OCSIDL__POSITION                  0x0000000D
#define __OC4CON__OCSIDL__MASK                      0x00002000
#define __OC4CON__OCSIDL__LENGTH                    0x00000001

#define __OC4CON__OCM0__POSITION                    0x00000000
#define __OC4CON__OCM0__MASK                        0x00000001
#define __OC4CON__OCM0__LENGTH                      0x00000001

#define __OC4CON__OCM1__POSITION                    0x00000001
#define __OC4CON__OCM1__MASK                        0x00000002
#define __OC4CON__OCM1__LENGTH                      0x00000001

#define __OC4CON__OCM2__POSITION                    0x00000002
#define __OC4CON__OCM2__MASK                        0x00000004
#define __OC4CON__OCM2__LENGTH                      0x00000001

#define __P1TCON__PTMOD__POSITION                   0x00000000
#define __P1TCON__PTMOD__MASK                       0x00000003
#define __P1TCON__PTMOD__LENGTH                     0x00000002

#define __P1TCON__PTCKPS__POSITION                  0x00000002
#define __P1TCON__PTCKPS__MASK                      0x0000000C
#define __P1TCON__PTCKPS__LENGTH                    0x00000002

#define __P1TCON__PTOPS__POSITION                   0x00000004
#define __P1TCON__PTOPS__MASK                       0x000000F0
#define __P1TCON__PTOPS__LENGTH                     0x00000004

#define __P1TCON__PTSIDL__POSITION                  0x0000000D
#define __P1TCON__PTSIDL__MASK                      0x00002000
#define __P1TCON__PTSIDL__LENGTH                    0x00000001

#define __P1TCON__PTEN__POSITION                    0x0000000F
#define __P1TCON__PTEN__MASK                        0x00008000
#define __P1TCON__PTEN__LENGTH                      0x00000001

#define __P1TCON__PTMOD0__POSITION                  0x00000000
#define __P1TCON__PTMOD0__MASK                      0x00000001
#define __P1TCON__PTMOD0__LENGTH                    0x00000001

#define __P1TCON__PTMOD1__POSITION                  0x00000001
#define __P1TCON__PTMOD1__MASK                      0x00000002
#define __P1TCON__PTMOD1__LENGTH                    0x00000001

#define __P1TCON__PTCKPS0__POSITION                 0x00000002
#define __P1TCON__PTCKPS0__MASK                     0x00000004
#define __P1TCON__PTCKPS0__LENGTH                   0x00000001

#define __P1TCON__PTCKPS1__POSITION                 0x00000003
#define __P1TCON__PTCKPS1__MASK                     0x00000008
#define __P1TCON__PTCKPS1__LENGTH                   0x00000001

#define __P1TCON__PTOPS0__POSITION                  0x00000004
#define __P1TCON__PTOPS0__MASK                      0x00000010
#define __P1TCON__PTOPS0__LENGTH                    0x00000001

#define __P1TCON__PTOPS1__POSITION                  0x00000005
#define __P1TCON__PTOPS1__MASK                      0x00000020
#define __P1TCON__PTOPS1__LENGTH                    0x00000001

#define __P1TCON__PTOPS2__POSITION                  0x00000006
#define __P1TCON__PTOPS2__MASK                      0x00000040
#define __P1TCON__PTOPS2__LENGTH                    0x00000001

#define __P1TCON__PTOPS3__POSITION                  0x00000007
#define __P1TCON__PTOPS3__MASK                      0x00000080
#define __P1TCON__PTOPS3__LENGTH                    0x00000001

#define __PTCON__PTMOD__POSITION                    0x00000000
#define __PTCON__PTMOD__MASK                        0x00000003
#define __PTCON__PTMOD__LENGTH                      0x00000002

#define __PTCON__PTCKPS__POSITION                   0x00000002
#define __PTCON__PTCKPS__MASK                       0x0000000C
#define __PTCON__PTCKPS__LENGTH                     0x00000002

#define __PTCON__PTOPS__POSITION                    0x00000004
#define __PTCON__PTOPS__MASK                        0x000000F0
#define __PTCON__PTOPS__LENGTH                      0x00000004

#define __PTCON__PTSIDL__POSITION                   0x0000000D
#define __PTCON__PTSIDL__MASK                       0x00002000
#define __PTCON__PTSIDL__LENGTH                     0x00000001

#define __PTCON__PTEN__POSITION                     0x0000000F
#define __PTCON__PTEN__MASK                         0x00008000
#define __PTCON__PTEN__LENGTH                       0x00000001

#define __PTCON__PTMOD0__POSITION                   0x00000000
#define __PTCON__PTMOD0__MASK                       0x00000001
#define __PTCON__PTMOD0__LENGTH                     0x00000001

#define __PTCON__PTMOD1__POSITION                   0x00000001
#define __PTCON__PTMOD1__MASK                       0x00000002
#define __PTCON__PTMOD1__LENGTH                     0x00000001

#define __PTCON__PTCKPS0__POSITION                  0x00000002
#define __PTCON__PTCKPS0__MASK                      0x00000004
#define __PTCON__PTCKPS0__LENGTH                    0x00000001

#define __PTCON__PTCKPS1__POSITION                  0x00000003
#define __PTCON__PTCKPS1__MASK                      0x00000008
#define __PTCON__PTCKPS1__LENGTH                    0x00000001

#define __PTCON__PTOPS0__POSITION                   0x00000004
#define __PTCON__PTOPS0__MASK                       0x00000010
#define __PTCON__PTOPS0__LENGTH                     0x00000001

#define __PTCON__PTOPS1__POSITION                   0x00000005
#define __PTCON__PTOPS1__MASK                       0x00000020
#define __PTCON__PTOPS1__LENGTH                     0x00000001

#define __PTCON__PTOPS2__POSITION                   0x00000006
#define __PTCON__PTOPS2__MASK                       0x00000040
#define __PTCON__PTOPS2__LENGTH                     0x00000001

#define __PTCON__PTOPS3__POSITION                   0x00000007
#define __PTCON__PTOPS3__MASK                       0x00000080
#define __PTCON__PTOPS3__LENGTH                     0x00000001

#define __P1TMR__PTMR__POSITION                     0x00000000
#define __P1TMR__PTMR__MASK                         0x00007FFF
#define __P1TMR__PTMR__LENGTH                       0x0000000F

#define __P1TMR__PTDIR__POSITION                    0x0000000F
#define __P1TMR__PTDIR__MASK                        0x00008000
#define __P1TMR__PTDIR__LENGTH                      0x00000001

#define __PTMR__PTMR__POSITION                      0x00000000
#define __PTMR__PTMR__MASK                          0x00007FFF
#define __PTMR__PTMR__LENGTH                        0x0000000F

#define __PTMR__PTDIR__POSITION                     0x0000000F
#define __PTMR__PTDIR__MASK                         0x00008000
#define __PTMR__PTDIR__LENGTH                       0x00000001

#define __P1TPER__PTPER__POSITION                   0x00000000
#define __P1TPER__PTPER__MASK                       0x00007FFF
#define __P1TPER__PTPER__LENGTH                     0x0000000F

#define __PTPER__PTPER__POSITION                    0x00000000
#define __PTPER__PTPER__MASK                        0x00007FFF
#define __PTPER__PTPER__LENGTH                      0x0000000F

#define __P1SECMP__SEVTCMP__POSITION                0x00000000
#define __P1SECMP__SEVTCMP__MASK                    0x00007FFF
#define __P1SECMP__SEVTCMP__LENGTH                  0x0000000F

#define __P1SECMP__SEVTDIR__POSITION                0x0000000F
#define __P1SECMP__SEVTDIR__MASK                    0x00008000
#define __P1SECMP__SEVTDIR__LENGTH                  0x00000001

#define __SEVTCMP__SEVTCMP__POSITION                0x00000000
#define __SEVTCMP__SEVTCMP__MASK                    0x00007FFF
#define __SEVTCMP__SEVTCMP__LENGTH                  0x0000000F

#define __SEVTCMP__SEVTDIR__POSITION                0x0000000F
#define __SEVTCMP__SEVTDIR__MASK                    0x00008000
#define __SEVTCMP__SEVTDIR__LENGTH                  0x00000001

#define __PWM1CON1__PEN1L__POSITION                 0x00000000
#define __PWM1CON1__PEN1L__MASK                     0x00000001
#define __PWM1CON1__PEN1L__LENGTH                   0x00000001

#define __PWM1CON1__PEN2L__POSITION                 0x00000001
#define __PWM1CON1__PEN2L__MASK                     0x00000002
#define __PWM1CON1__PEN2L__LENGTH                   0x00000001

#define __PWM1CON1__PEN3L__POSITION                 0x00000002
#define __PWM1CON1__PEN3L__MASK                     0x00000004
#define __PWM1CON1__PEN3L__LENGTH                   0x00000001

#define __PWM1CON1__PEN1H__POSITION                 0x00000004
#define __PWM1CON1__PEN1H__MASK                     0x00000010
#define __PWM1CON1__PEN1H__LENGTH                   0x00000001

#define __PWM1CON1__PEN2H__POSITION                 0x00000005
#define __PWM1CON1__PEN2H__MASK                     0x00000020
#define __PWM1CON1__PEN2H__LENGTH                   0x00000001

#define __PWM1CON1__PEN3H__POSITION                 0x00000006
#define __PWM1CON1__PEN3H__MASK                     0x00000040
#define __PWM1CON1__PEN3H__LENGTH                   0x00000001

#define __PWM1CON1__PMOD1__POSITION                 0x00000008
#define __PWM1CON1__PMOD1__MASK                     0x00000100
#define __PWM1CON1__PMOD1__LENGTH                   0x00000001

#define __PWM1CON1__PMOD2__POSITION                 0x00000009
#define __PWM1CON1__PMOD2__MASK                     0x00000200
#define __PWM1CON1__PMOD2__LENGTH                   0x00000001

#define __PWM1CON1__PMOD3__POSITION                 0x0000000A
#define __PWM1CON1__PMOD3__MASK                     0x00000400
#define __PWM1CON1__PMOD3__LENGTH                   0x00000001

#define __PWMCON1__PEN1L__POSITION                  0x00000000
#define __PWMCON1__PEN1L__MASK                      0x00000001
#define __PWMCON1__PEN1L__LENGTH                    0x00000001

#define __PWMCON1__PEN2L__POSITION                  0x00000001
#define __PWMCON1__PEN2L__MASK                      0x00000002
#define __PWMCON1__PEN2L__LENGTH                    0x00000001

#define __PWMCON1__PEN3L__POSITION                  0x00000002
#define __PWMCON1__PEN3L__MASK                      0x00000004
#define __PWMCON1__PEN3L__LENGTH                    0x00000001

#define __PWMCON1__PEN1H__POSITION                  0x00000004
#define __PWMCON1__PEN1H__MASK                      0x00000010
#define __PWMCON1__PEN1H__LENGTH                    0x00000001

#define __PWMCON1__PEN2H__POSITION                  0x00000005
#define __PWMCON1__PEN2H__MASK                      0x00000020
#define __PWMCON1__PEN2H__LENGTH                    0x00000001

#define __PWMCON1__PEN3H__POSITION                  0x00000006
#define __PWMCON1__PEN3H__MASK                      0x00000040
#define __PWMCON1__PEN3H__LENGTH                    0x00000001

#define __PWMCON1__PMOD1__POSITION                  0x00000008
#define __PWMCON1__PMOD1__MASK                      0x00000100
#define __PWMCON1__PMOD1__LENGTH                    0x00000001

#define __PWMCON1__PMOD2__POSITION                  0x00000009
#define __PWMCON1__PMOD2__MASK                      0x00000200
#define __PWMCON1__PMOD2__LENGTH                    0x00000001

#define __PWMCON1__PMOD3__POSITION                  0x0000000A
#define __PWMCON1__PMOD3__MASK                      0x00000400
#define __PWMCON1__PMOD3__LENGTH                    0x00000001

#define __PWM1CON2__UDIS__POSITION                  0x00000000
#define __PWM1CON2__UDIS__MASK                      0x00000001
#define __PWM1CON2__UDIS__LENGTH                    0x00000001

#define __PWM1CON2__OSYNC__POSITION                 0x00000001
#define __PWM1CON2__OSYNC__MASK                     0x00000002
#define __PWM1CON2__OSYNC__LENGTH                   0x00000001

#define __PWM1CON2__IUE__POSITION                   0x00000002
#define __PWM1CON2__IUE__MASK                       0x00000004
#define __PWM1CON2__IUE__LENGTH                     0x00000001

#define __PWM1CON2__SEVOPS__POSITION                0x00000008
#define __PWM1CON2__SEVOPS__MASK                    0x00000F00
#define __PWM1CON2__SEVOPS__LENGTH                  0x00000004

#define __PWM1CON2__SEVOPS0__POSITION               0x00000008
#define __PWM1CON2__SEVOPS0__MASK                   0x00000100
#define __PWM1CON2__SEVOPS0__LENGTH                 0x00000001

#define __PWM1CON2__SEVOPS1__POSITION               0x00000009
#define __PWM1CON2__SEVOPS1__MASK                   0x00000200
#define __PWM1CON2__SEVOPS1__LENGTH                 0x00000001

#define __PWM1CON2__SEVOPS2__POSITION               0x0000000A
#define __PWM1CON2__SEVOPS2__MASK                   0x00000400
#define __PWM1CON2__SEVOPS2__LENGTH                 0x00000001

#define __PWM1CON2__SEVOPS3__POSITION               0x0000000B
#define __PWM1CON2__SEVOPS3__MASK                   0x00000800
#define __PWM1CON2__SEVOPS3__LENGTH                 0x00000001

#define __PWMCON2__UDIS__POSITION                   0x00000000
#define __PWMCON2__UDIS__MASK                       0x00000001
#define __PWMCON2__UDIS__LENGTH                     0x00000001

#define __PWMCON2__OSYNC__POSITION                  0x00000001
#define __PWMCON2__OSYNC__MASK                      0x00000002
#define __PWMCON2__OSYNC__LENGTH                    0x00000001

#define __PWMCON2__IUE__POSITION                    0x00000002
#define __PWMCON2__IUE__MASK                        0x00000004
#define __PWMCON2__IUE__LENGTH                      0x00000001

#define __PWMCON2__SEVOPS__POSITION                 0x00000008
#define __PWMCON2__SEVOPS__MASK                     0x00000F00
#define __PWMCON2__SEVOPS__LENGTH                   0x00000004

#define __PWMCON2__SEVOPS0__POSITION                0x00000008
#define __PWMCON2__SEVOPS0__MASK                    0x00000100
#define __PWMCON2__SEVOPS0__LENGTH                  0x00000001

#define __PWMCON2__SEVOPS1__POSITION                0x00000009
#define __PWMCON2__SEVOPS1__MASK                    0x00000200
#define __PWMCON2__SEVOPS1__LENGTH                  0x00000001

#define __PWMCON2__SEVOPS2__POSITION                0x0000000A
#define __PWMCON2__SEVOPS2__MASK                    0x00000400
#define __PWMCON2__SEVOPS2__LENGTH                  0x00000001

#define __PWMCON2__SEVOPS3__POSITION                0x0000000B
#define __PWMCON2__SEVOPS3__MASK                    0x00000800
#define __PWMCON2__SEVOPS3__LENGTH                  0x00000001

#define __DTCON1__DTA__POSITION                     0x00000000
#define __DTCON1__DTA__MASK                         0x0000003F
#define __DTCON1__DTA__LENGTH                       0x00000006

#define __DTCON1__DTAPS__POSITION                   0x00000006
#define __DTCON1__DTAPS__MASK                       0x000000C0
#define __DTCON1__DTAPS__LENGTH                     0x00000002

#define __DTCON1__DTB__POSITION                     0x00000008
#define __DTCON1__DTB__MASK                         0x00003F00
#define __DTCON1__DTB__LENGTH                       0x00000006

#define __DTCON1__DTBPS__POSITION                   0x0000000E
#define __DTCON1__DTBPS__MASK                       0x0000C000
#define __DTCON1__DTBPS__LENGTH                     0x00000002

#define __DTCON1__DTA0__POSITION                    0x00000000
#define __DTCON1__DTA0__MASK                        0x00000001
#define __DTCON1__DTA0__LENGTH                      0x00000001

#define __DTCON1__DTA1__POSITION                    0x00000001
#define __DTCON1__DTA1__MASK                        0x00000002
#define __DTCON1__DTA1__LENGTH                      0x00000001

#define __DTCON1__DTA2__POSITION                    0x00000002
#define __DTCON1__DTA2__MASK                        0x00000004
#define __DTCON1__DTA2__LENGTH                      0x00000001

#define __DTCON1__DTA3__POSITION                    0x00000003
#define __DTCON1__DTA3__MASK                        0x00000008
#define __DTCON1__DTA3__LENGTH                      0x00000001

#define __DTCON1__DTA4__POSITION                    0x00000004
#define __DTCON1__DTA4__MASK                        0x00000010
#define __DTCON1__DTA4__LENGTH                      0x00000001

#define __DTCON1__DTA5__POSITION                    0x00000005
#define __DTCON1__DTA5__MASK                        0x00000020
#define __DTCON1__DTA5__LENGTH                      0x00000001

#define __DTCON1__DTAPS0__POSITION                  0x00000006
#define __DTCON1__DTAPS0__MASK                      0x00000040
#define __DTCON1__DTAPS0__LENGTH                    0x00000001

#define __DTCON1__DTAPS1__POSITION                  0x00000007
#define __DTCON1__DTAPS1__MASK                      0x00000080
#define __DTCON1__DTAPS1__LENGTH                    0x00000001

#define __DTCON1__DTB0__POSITION                    0x00000008
#define __DTCON1__DTB0__MASK                        0x00000100
#define __DTCON1__DTB0__LENGTH                      0x00000001

#define __DTCON1__DTB1__POSITION                    0x00000009
#define __DTCON1__DTB1__MASK                        0x00000200
#define __DTCON1__DTB1__LENGTH                      0x00000001

#define __DTCON1__DTB2__POSITION                    0x0000000A
#define __DTCON1__DTB2__MASK                        0x00000400
#define __DTCON1__DTB2__LENGTH                      0x00000001

#define __DTCON1__DTB3__POSITION                    0x0000000B
#define __DTCON1__DTB3__MASK                        0x00000800
#define __DTCON1__DTB3__LENGTH                      0x00000001

#define __DTCON1__DTB4__POSITION                    0x0000000C
#define __DTCON1__DTB4__MASK                        0x00001000
#define __DTCON1__DTB4__LENGTH                      0x00000001

#define __DTCON1__DTB5__POSITION                    0x0000000D
#define __DTCON1__DTB5__MASK                        0x00002000
#define __DTCON1__DTB5__LENGTH                      0x00000001

#define __DTCON1__DTBPS0__POSITION                  0x0000000E
#define __DTCON1__DTBPS0__MASK                      0x00004000
#define __DTCON1__DTBPS0__LENGTH                    0x00000001

#define __DTCON1__DTBPS1__POSITION                  0x0000000F
#define __DTCON1__DTBPS1__MASK                      0x00008000
#define __DTCON1__DTBPS1__LENGTH                    0x00000001

#define __P1DTCON1__DTA__POSITION                   0x00000000
#define __P1DTCON1__DTA__MASK                       0x0000003F
#define __P1DTCON1__DTA__LENGTH                     0x00000006

#define __P1DTCON1__DTAPS__POSITION                 0x00000006
#define __P1DTCON1__DTAPS__MASK                     0x000000C0
#define __P1DTCON1__DTAPS__LENGTH                   0x00000002

#define __P1DTCON1__DTB__POSITION                   0x00000008
#define __P1DTCON1__DTB__MASK                       0x00003F00
#define __P1DTCON1__DTB__LENGTH                     0x00000006

#define __P1DTCON1__DTBPS__POSITION                 0x0000000E
#define __P1DTCON1__DTBPS__MASK                     0x0000C000
#define __P1DTCON1__DTBPS__LENGTH                   0x00000002

#define __P1DTCON1__DTA0__POSITION                  0x00000000
#define __P1DTCON1__DTA0__MASK                      0x00000001
#define __P1DTCON1__DTA0__LENGTH                    0x00000001

#define __P1DTCON1__DTA1__POSITION                  0x00000001
#define __P1DTCON1__DTA1__MASK                      0x00000002
#define __P1DTCON1__DTA1__LENGTH                    0x00000001

#define __P1DTCON1__DTA2__POSITION                  0x00000002
#define __P1DTCON1__DTA2__MASK                      0x00000004
#define __P1DTCON1__DTA2__LENGTH                    0x00000001

#define __P1DTCON1__DTA3__POSITION                  0x00000003
#define __P1DTCON1__DTA3__MASK                      0x00000008
#define __P1DTCON1__DTA3__LENGTH                    0x00000001

#define __P1DTCON1__DTA4__POSITION                  0x00000004
#define __P1DTCON1__DTA4__MASK                      0x00000010
#define __P1DTCON1__DTA4__LENGTH                    0x00000001

#define __P1DTCON1__DTA5__POSITION                  0x00000005
#define __P1DTCON1__DTA5__MASK                      0x00000020
#define __P1DTCON1__DTA5__LENGTH                    0x00000001

#define __P1DTCON1__DTAPS0__POSITION                0x00000006
#define __P1DTCON1__DTAPS0__MASK                    0x00000040
#define __P1DTCON1__DTAPS0__LENGTH                  0x00000001

#define __P1DTCON1__DTAPS1__POSITION                0x00000007
#define __P1DTCON1__DTAPS1__MASK                    0x00000080
#define __P1DTCON1__DTAPS1__LENGTH                  0x00000001

#define __P1DTCON1__DTB0__POSITION                  0x00000008
#define __P1DTCON1__DTB0__MASK                      0x00000100
#define __P1DTCON1__DTB0__LENGTH                    0x00000001

#define __P1DTCON1__DTB1__POSITION                  0x00000009
#define __P1DTCON1__DTB1__MASK                      0x00000200
#define __P1DTCON1__DTB1__LENGTH                    0x00000001

#define __P1DTCON1__DTB2__POSITION                  0x0000000A
#define __P1DTCON1__DTB2__MASK                      0x00000400
#define __P1DTCON1__DTB2__LENGTH                    0x00000001

#define __P1DTCON1__DTB3__POSITION                  0x0000000B
#define __P1DTCON1__DTB3__MASK                      0x00000800
#define __P1DTCON1__DTB3__LENGTH                    0x00000001

#define __P1DTCON1__DTB4__POSITION                  0x0000000C
#define __P1DTCON1__DTB4__MASK                      0x00001000
#define __P1DTCON1__DTB4__LENGTH                    0x00000001

#define __P1DTCON1__DTB5__POSITION                  0x0000000D
#define __P1DTCON1__DTB5__MASK                      0x00002000
#define __P1DTCON1__DTB5__LENGTH                    0x00000001

#define __P1DTCON1__DTBPS0__POSITION                0x0000000E
#define __P1DTCON1__DTBPS0__MASK                    0x00004000
#define __P1DTCON1__DTBPS0__LENGTH                  0x00000001

#define __P1DTCON1__DTBPS1__POSITION                0x0000000F
#define __P1DTCON1__DTBPS1__MASK                    0x00008000
#define __P1DTCON1__DTBPS1__LENGTH                  0x00000001

#define __DTCON2__DTS1I__POSITION                   0x00000000
#define __DTCON2__DTS1I__MASK                       0x00000001
#define __DTCON2__DTS1I__LENGTH                     0x00000001

#define __DTCON2__DTS1A__POSITION                   0x00000001
#define __DTCON2__DTS1A__MASK                       0x00000002
#define __DTCON2__DTS1A__LENGTH                     0x00000001

#define __DTCON2__DTS2I__POSITION                   0x00000002
#define __DTCON2__DTS2I__MASK                       0x00000004
#define __DTCON2__DTS2I__LENGTH                     0x00000001

#define __DTCON2__DTS2A__POSITION                   0x00000003
#define __DTCON2__DTS2A__MASK                       0x00000008
#define __DTCON2__DTS2A__LENGTH                     0x00000001

#define __DTCON2__DTS3I__POSITION                   0x00000004
#define __DTCON2__DTS3I__MASK                       0x00000010
#define __DTCON2__DTS3I__LENGTH                     0x00000001

#define __DTCON2__DTS3A__POSITION                   0x00000005
#define __DTCON2__DTS3A__MASK                       0x00000020
#define __DTCON2__DTS3A__LENGTH                     0x00000001

#define __P1DTCON2__DTS1I__POSITION                 0x00000000
#define __P1DTCON2__DTS1I__MASK                     0x00000001
#define __P1DTCON2__DTS1I__LENGTH                   0x00000001

#define __P1DTCON2__DTS1A__POSITION                 0x00000001
#define __P1DTCON2__DTS1A__MASK                     0x00000002
#define __P1DTCON2__DTS1A__LENGTH                   0x00000001

#define __P1DTCON2__DTS2I__POSITION                 0x00000002
#define __P1DTCON2__DTS2I__MASK                     0x00000004
#define __P1DTCON2__DTS2I__LENGTH                   0x00000001

#define __P1DTCON2__DTS2A__POSITION                 0x00000003
#define __P1DTCON2__DTS2A__MASK                     0x00000008
#define __P1DTCON2__DTS2A__LENGTH                   0x00000001

#define __P1DTCON2__DTS3I__POSITION                 0x00000004
#define __P1DTCON2__DTS3I__MASK                     0x00000010
#define __P1DTCON2__DTS3I__LENGTH                   0x00000001

#define __P1DTCON2__DTS3A__POSITION                 0x00000005
#define __P1DTCON2__DTS3A__MASK                     0x00000020
#define __P1DTCON2__DTS3A__LENGTH                   0x00000001

#define __FLTACON__FAEN1__POSITION                  0x00000000
#define __FLTACON__FAEN1__MASK                      0x00000001
#define __FLTACON__FAEN1__LENGTH                    0x00000001

#define __FLTACON__FAEN2__POSITION                  0x00000001
#define __FLTACON__FAEN2__MASK                      0x00000002
#define __FLTACON__FAEN2__LENGTH                    0x00000001

#define __FLTACON__FAEN3__POSITION                  0x00000002
#define __FLTACON__FAEN3__MASK                      0x00000004
#define __FLTACON__FAEN3__LENGTH                    0x00000001

#define __FLTACON__FLTAM__POSITION                  0x00000007
#define __FLTACON__FLTAM__MASK                      0x00000080
#define __FLTACON__FLTAM__LENGTH                    0x00000001

#define __FLTACON__FAOV1L__POSITION                 0x00000008
#define __FLTACON__FAOV1L__MASK                     0x00000100
#define __FLTACON__FAOV1L__LENGTH                   0x00000001

#define __FLTACON__FAOV1H__POSITION                 0x00000009
#define __FLTACON__FAOV1H__MASK                     0x00000200
#define __FLTACON__FAOV1H__LENGTH                   0x00000001

#define __FLTACON__FAOV2L__POSITION                 0x0000000A
#define __FLTACON__FAOV2L__MASK                     0x00000400
#define __FLTACON__FAOV2L__LENGTH                   0x00000001

#define __FLTACON__FAOV2H__POSITION                 0x0000000B
#define __FLTACON__FAOV2H__MASK                     0x00000800
#define __FLTACON__FAOV2H__LENGTH                   0x00000001

#define __FLTACON__FAOV3L__POSITION                 0x0000000C
#define __FLTACON__FAOV3L__MASK                     0x00001000
#define __FLTACON__FAOV3L__LENGTH                   0x00000001

#define __FLTACON__FAOV3H__POSITION                 0x0000000D
#define __FLTACON__FAOV3H__MASK                     0x00002000
#define __FLTACON__FAOV3H__LENGTH                   0x00000001

#define __P1FLTACON__FAEN1__POSITION                0x00000000
#define __P1FLTACON__FAEN1__MASK                    0x00000001
#define __P1FLTACON__FAEN1__LENGTH                  0x00000001

#define __P1FLTACON__FAEN2__POSITION                0x00000001
#define __P1FLTACON__FAEN2__MASK                    0x00000002
#define __P1FLTACON__FAEN2__LENGTH                  0x00000001

#define __P1FLTACON__FAEN3__POSITION                0x00000002
#define __P1FLTACON__FAEN3__MASK                    0x00000004
#define __P1FLTACON__FAEN3__LENGTH                  0x00000001

#define __P1FLTACON__FLTAM__POSITION                0x00000007
#define __P1FLTACON__FLTAM__MASK                    0x00000080
#define __P1FLTACON__FLTAM__LENGTH                  0x00000001

#define __P1FLTACON__FAOV1L__POSITION               0x00000008
#define __P1FLTACON__FAOV1L__MASK                   0x00000100
#define __P1FLTACON__FAOV1L__LENGTH                 0x00000001

#define __P1FLTACON__FAOV1H__POSITION               0x00000009
#define __P1FLTACON__FAOV1H__MASK                   0x00000200
#define __P1FLTACON__FAOV1H__LENGTH                 0x00000001

#define __P1FLTACON__FAOV2L__POSITION               0x0000000A
#define __P1FLTACON__FAOV2L__MASK                   0x00000400
#define __P1FLTACON__FAOV2L__LENGTH                 0x00000001

#define __P1FLTACON__FAOV2H__POSITION               0x0000000B
#define __P1FLTACON__FAOV2H__MASK                   0x00000800
#define __P1FLTACON__FAOV2H__LENGTH                 0x00000001

#define __P1FLTACON__FAOV3L__POSITION               0x0000000C
#define __P1FLTACON__FAOV3L__MASK                   0x00001000
#define __P1FLTACON__FAOV3L__LENGTH                 0x00000001

#define __P1FLTACON__FAOV3H__POSITION               0x0000000D
#define __P1FLTACON__FAOV3H__MASK                   0x00002000
#define __P1FLTACON__FAOV3H__LENGTH                 0x00000001

#define __OVDCON__POUT1L__POSITION                  0x00000000
#define __OVDCON__POUT1L__MASK                      0x00000001
#define __OVDCON__POUT1L__LENGTH                    0x00000001

#define __OVDCON__POUT1H__POSITION                  0x00000001
#define __OVDCON__POUT1H__MASK                      0x00000002
#define __OVDCON__POUT1H__LENGTH                    0x00000001

#define __OVDCON__POUT2L__POSITION                  0x00000002
#define __OVDCON__POUT2L__MASK                      0x00000004
#define __OVDCON__POUT2L__LENGTH                    0x00000001

#define __OVDCON__POUT2H__POSITION                  0x00000003
#define __OVDCON__POUT2H__MASK                      0x00000008
#define __OVDCON__POUT2H__LENGTH                    0x00000001

#define __OVDCON__POUT3L__POSITION                  0x00000004
#define __OVDCON__POUT3L__MASK                      0x00000010
#define __OVDCON__POUT3L__LENGTH                    0x00000001

#define __OVDCON__POUT3H__POSITION                  0x00000005
#define __OVDCON__POUT3H__MASK                      0x00000020
#define __OVDCON__POUT3H__LENGTH                    0x00000001

#define __OVDCON__POVD1L__POSITION                  0x00000008
#define __OVDCON__POVD1L__MASK                      0x00000100
#define __OVDCON__POVD1L__LENGTH                    0x00000001

#define __OVDCON__POVD1H__POSITION                  0x00000009
#define __OVDCON__POVD1H__MASK                      0x00000200
#define __OVDCON__POVD1H__LENGTH                    0x00000001

#define __OVDCON__POVD2L__POSITION                  0x0000000A
#define __OVDCON__POVD2L__MASK                      0x00000400
#define __OVDCON__POVD2L__LENGTH                    0x00000001

#define __OVDCON__POVD2H__POSITION                  0x0000000B
#define __OVDCON__POVD2H__MASK                      0x00000800
#define __OVDCON__POVD2H__LENGTH                    0x00000001

#define __OVDCON__POVD3L__POSITION                  0x0000000C
#define __OVDCON__POVD3L__MASK                      0x00001000
#define __OVDCON__POVD3L__LENGTH                    0x00000001

#define __OVDCON__POVD3H__POSITION                  0x0000000D
#define __OVDCON__POVD3H__MASK                      0x00002000
#define __OVDCON__POVD3H__LENGTH                    0x00000001

#define __P1OVDCON__POUT1L__POSITION                0x00000000
#define __P1OVDCON__POUT1L__MASK                    0x00000001
#define __P1OVDCON__POUT1L__LENGTH                  0x00000001

#define __P1OVDCON__POUT1H__POSITION                0x00000001
#define __P1OVDCON__POUT1H__MASK                    0x00000002
#define __P1OVDCON__POUT1H__LENGTH                  0x00000001

#define __P1OVDCON__POUT2L__POSITION                0x00000002
#define __P1OVDCON__POUT2L__MASK                    0x00000004
#define __P1OVDCON__POUT2L__LENGTH                  0x00000001

#define __P1OVDCON__POUT2H__POSITION                0x00000003
#define __P1OVDCON__POUT2H__MASK                    0x00000008
#define __P1OVDCON__POUT2H__LENGTH                  0x00000001

#define __P1OVDCON__POUT3L__POSITION                0x00000004
#define __P1OVDCON__POUT3L__MASK                    0x00000010
#define __P1OVDCON__POUT3L__LENGTH                  0x00000001

#define __P1OVDCON__POUT3H__POSITION                0x00000005
#define __P1OVDCON__POUT3H__MASK                    0x00000020
#define __P1OVDCON__POUT3H__LENGTH                  0x00000001

#define __P1OVDCON__POVD1L__POSITION                0x00000008
#define __P1OVDCON__POVD1L__MASK                    0x00000100
#define __P1OVDCON__POVD1L__LENGTH                  0x00000001

#define __P1OVDCON__POVD1H__POSITION                0x00000009
#define __P1OVDCON__POVD1H__MASK                    0x00000200
#define __P1OVDCON__POVD1H__LENGTH                  0x00000001

#define __P1OVDCON__POVD2L__POSITION                0x0000000A
#define __P1OVDCON__POVD2L__MASK                    0x00000400
#define __P1OVDCON__POVD2L__LENGTH                  0x00000001

#define __P1OVDCON__POVD2H__POSITION                0x0000000B
#define __P1OVDCON__POVD2H__MASK                    0x00000800
#define __P1OVDCON__POVD2H__LENGTH                  0x00000001

#define __P1OVDCON__POVD3L__POSITION                0x0000000C
#define __P1OVDCON__POVD3L__MASK                    0x00001000
#define __P1OVDCON__POVD3L__LENGTH                  0x00000001

#define __P1OVDCON__POVD3H__POSITION                0x0000000D
#define __P1OVDCON__POVD3H__MASK                    0x00002000
#define __P1OVDCON__POVD3H__LENGTH                  0x00000001

#define __QEI1CON__UPDN__SRC__POSITION               0x00000000
#define __QEI1CON__UPDN__SRC__MASK                   0x00000001
#define __QEI1CON__UPDN__SRC__LENGTH                 0x00000001

#define __QEI1CON__TQCS__POSITION                   0x00000001
#define __QEI1CON__TQCS__MASK                       0x00000002
#define __QEI1CON__TQCS__LENGTH                     0x00000001

#define __QEI1CON__POSRES__POSITION                 0x00000002
#define __QEI1CON__POSRES__MASK                     0x00000004
#define __QEI1CON__POSRES__LENGTH                   0x00000001

#define __QEI1CON__TQCKPS__POSITION                 0x00000003
#define __QEI1CON__TQCKPS__MASK                     0x00000018
#define __QEI1CON__TQCKPS__LENGTH                   0x00000002

#define __QEI1CON__TQGATE__POSITION                 0x00000005
#define __QEI1CON__TQGATE__MASK                     0x00000020
#define __QEI1CON__TQGATE__LENGTH                   0x00000001

#define __QEI1CON__PCDOUT__POSITION                 0x00000006
#define __QEI1CON__PCDOUT__MASK                     0x00000040
#define __QEI1CON__PCDOUT__LENGTH                   0x00000001

#define __QEI1CON__SWPAB__POSITION                  0x00000007
#define __QEI1CON__SWPAB__MASK                      0x00000080
#define __QEI1CON__SWPAB__LENGTH                    0x00000001

#define __QEI1CON__QEIM__POSITION                   0x00000008
#define __QEI1CON__QEIM__MASK                       0x00000700
#define __QEI1CON__QEIM__LENGTH                     0x00000003

#define __QEI1CON__UPDN__POSITION                   0x0000000B
#define __QEI1CON__UPDN__MASK                       0x00000800
#define __QEI1CON__UPDN__LENGTH                     0x00000001

#define __QEI1CON__INDX__POSITION                   0x0000000C
#define __QEI1CON__INDX__MASK                       0x00001000
#define __QEI1CON__INDX__LENGTH                     0x00000001

#define __QEI1CON__QEISIDL__POSITION                0x0000000D
#define __QEI1CON__QEISIDL__MASK                    0x00002000
#define __QEI1CON__QEISIDL__LENGTH                  0x00000001

#define __QEI1CON__CNTERR__POSITION                 0x0000000F
#define __QEI1CON__CNTERR__MASK                     0x00008000
#define __QEI1CON__CNTERR__LENGTH                   0x00000001

#define __QEI1CON__TQCKPS0__POSITION                0x00000003
#define __QEI1CON__TQCKPS0__MASK                    0x00000008
#define __QEI1CON__TQCKPS0__LENGTH                  0x00000001

#define __QEI1CON__TQCKPS1__POSITION                0x00000004
#define __QEI1CON__TQCKPS1__MASK                    0x00000010
#define __QEI1CON__TQCKPS1__LENGTH                  0x00000001

#define __QEI1CON__QEIM0__POSITION                  0x00000008
#define __QEI1CON__QEIM0__MASK                      0x00000100
#define __QEI1CON__QEIM0__LENGTH                    0x00000001

#define __QEI1CON__QEIM1__POSITION                  0x00000009
#define __QEI1CON__QEIM1__MASK                      0x00000200
#define __QEI1CON__QEIM1__LENGTH                    0x00000001

#define __QEI1CON__QEIM2__POSITION                  0x0000000A
#define __QEI1CON__QEIM2__MASK                      0x00000400
#define __QEI1CON__QEIM2__LENGTH                    0x00000001

#define __QEICON__UPDN__SRC__POSITION                0x00000000
#define __QEICON__UPDN__SRC__MASK                    0x00000001
#define __QEICON__UPDN__SRC__LENGTH                  0x00000001

#define __QEICON__TQCS__POSITION                    0x00000001
#define __QEICON__TQCS__MASK                        0x00000002
#define __QEICON__TQCS__LENGTH                      0x00000001

#define __QEICON__POSRES__POSITION                  0x00000002
#define __QEICON__POSRES__MASK                      0x00000004
#define __QEICON__POSRES__LENGTH                    0x00000001

#define __QEICON__TQCKPS__POSITION                  0x00000003
#define __QEICON__TQCKPS__MASK                      0x00000018
#define __QEICON__TQCKPS__LENGTH                    0x00000002

#define __QEICON__TQGATE__POSITION                  0x00000005
#define __QEICON__TQGATE__MASK                      0x00000020
#define __QEICON__TQGATE__LENGTH                    0x00000001

#define __QEICON__PCDOUT__POSITION                  0x00000006
#define __QEICON__PCDOUT__MASK                      0x00000040
#define __QEICON__PCDOUT__LENGTH                    0x00000001

#define __QEICON__SWPAB__POSITION                   0x00000007
#define __QEICON__SWPAB__MASK                       0x00000080
#define __QEICON__SWPAB__LENGTH                     0x00000001

#define __QEICON__QEIM__POSITION                    0x00000008
#define __QEICON__QEIM__MASK                        0x00000700
#define __QEICON__QEIM__LENGTH                      0x00000003

#define __QEICON__UPDN__POSITION                    0x0000000B
#define __QEICON__UPDN__MASK                        0x00000800
#define __QEICON__UPDN__LENGTH                      0x00000001

#define __QEICON__INDX__POSITION                    0x0000000C
#define __QEICON__INDX__MASK                        0x00001000
#define __QEICON__INDX__LENGTH                      0x00000001

#define __QEICON__QEISIDL__POSITION                 0x0000000D
#define __QEICON__QEISIDL__MASK                     0x00002000
#define __QEICON__QEISIDL__LENGTH                   0x00000001

#define __QEICON__CNTERR__POSITION                  0x0000000F
#define __QEICON__CNTERR__MASK                      0x00008000
#define __QEICON__CNTERR__LENGTH                    0x00000001

#define __QEICON__TQCKPS0__POSITION                 0x00000003
#define __QEICON__TQCKPS0__MASK                     0x00000008
#define __QEICON__TQCKPS0__LENGTH                   0x00000001

#define __QEICON__TQCKPS1__POSITION                 0x00000004
#define __QEICON__TQCKPS1__MASK                     0x00000010
#define __QEICON__TQCKPS1__LENGTH                   0x00000001

#define __QEICON__QEIM0__POSITION                   0x00000008
#define __QEICON__QEIM0__MASK                       0x00000100
#define __QEICON__QEIM0__LENGTH                     0x00000001

#define __QEICON__QEIM1__POSITION                   0x00000009
#define __QEICON__QEIM1__MASK                       0x00000200
#define __QEICON__QEIM1__LENGTH                     0x00000001

#define __QEICON__QEIM2__POSITION                   0x0000000A
#define __QEICON__QEIM2__MASK                       0x00000400
#define __QEICON__QEIM2__LENGTH                     0x00000001

#define __DFLT1CON__QECK__POSITION                  0x00000004
#define __DFLT1CON__QECK__MASK                      0x00000070
#define __DFLT1CON__QECK__LENGTH                    0x00000003

#define __DFLT1CON__QEOUT__POSITION                 0x00000007
#define __DFLT1CON__QEOUT__MASK                     0x00000080
#define __DFLT1CON__QEOUT__LENGTH                   0x00000001

#define __DFLT1CON__CEID__POSITION                  0x00000008
#define __DFLT1CON__CEID__MASK                      0x00000100
#define __DFLT1CON__CEID__LENGTH                    0x00000001

#define __DFLT1CON__IMV__POSITION                   0x00000009
#define __DFLT1CON__IMV__MASK                       0x00000600
#define __DFLT1CON__IMV__LENGTH                     0x00000002

#define __DFLT1CON__QECK0__POSITION                 0x00000004
#define __DFLT1CON__QECK0__MASK                     0x00000010
#define __DFLT1CON__QECK0__LENGTH                   0x00000001

#define __DFLT1CON__QECK1__POSITION                 0x00000005
#define __DFLT1CON__QECK1__MASK                     0x00000020
#define __DFLT1CON__QECK1__LENGTH                   0x00000001

#define __DFLT1CON__QECK2__POSITION                 0x00000006
#define __DFLT1CON__QECK2__MASK                     0x00000040
#define __DFLT1CON__QECK2__LENGTH                   0x00000001

#define __DFLT1CON__IMV0__POSITION                  0x00000009
#define __DFLT1CON__IMV0__MASK                      0x00000200
#define __DFLT1CON__IMV0__LENGTH                    0x00000001

#define __DFLT1CON__IMV1__POSITION                  0x0000000A
#define __DFLT1CON__IMV1__MASK                      0x00000400
#define __DFLT1CON__IMV1__LENGTH                    0x00000001

#define __DFLTCON__QECK__POSITION                   0x00000004
#define __DFLTCON__QECK__MASK                       0x00000070
#define __DFLTCON__QECK__LENGTH                     0x00000003

#define __DFLTCON__QEOUT__POSITION                  0x00000007
#define __DFLTCON__QEOUT__MASK                      0x00000080
#define __DFLTCON__QEOUT__LENGTH                    0x00000001

#define __DFLTCON__CEID__POSITION                   0x00000008
#define __DFLTCON__CEID__MASK                       0x00000100
#define __DFLTCON__CEID__LENGTH                     0x00000001

#define __DFLTCON__IMV__POSITION                    0x00000009
#define __DFLTCON__IMV__MASK                        0x00000600
#define __DFLTCON__IMV__LENGTH                      0x00000002

#define __DFLTCON__QECK0__POSITION                  0x00000004
#define __DFLTCON__QECK0__MASK                      0x00000010
#define __DFLTCON__QECK0__LENGTH                    0x00000001

#define __DFLTCON__QECK1__POSITION                  0x00000005
#define __DFLTCON__QECK1__MASK                      0x00000020
#define __DFLTCON__QECK1__LENGTH                    0x00000001

#define __DFLTCON__QECK2__POSITION                  0x00000006
#define __DFLTCON__QECK2__MASK                      0x00000040
#define __DFLTCON__QECK2__LENGTH                    0x00000001

#define __DFLTCON__IMV0__POSITION                   0x00000009
#define __DFLTCON__IMV0__MASK                       0x00000200
#define __DFLTCON__IMV0__LENGTH                     0x00000001

#define __DFLTCON__IMV1__POSITION                   0x0000000A
#define __DFLTCON__IMV1__MASK                       0x00000400
#define __DFLTCON__IMV1__LENGTH                     0x00000001

#define __QEI2CON__UPDN__SRC__POSITION               0x00000000
#define __QEI2CON__UPDN__SRC__MASK                   0x00000001
#define __QEI2CON__UPDN__SRC__LENGTH                 0x00000001

#define __QEI2CON__TQCS__POSITION                   0x00000001
#define __QEI2CON__TQCS__MASK                       0x00000002
#define __QEI2CON__TQCS__LENGTH                     0x00000001

#define __QEI2CON__POSRES__POSITION                 0x00000002
#define __QEI2CON__POSRES__MASK                     0x00000004
#define __QEI2CON__POSRES__LENGTH                   0x00000001

#define __QEI2CON__TQCKPS__POSITION                 0x00000003
#define __QEI2CON__TQCKPS__MASK                     0x00000018
#define __QEI2CON__TQCKPS__LENGTH                   0x00000002

#define __QEI2CON__TQGATE__POSITION                 0x00000005
#define __QEI2CON__TQGATE__MASK                     0x00000020
#define __QEI2CON__TQGATE__LENGTH                   0x00000001

#define __QEI2CON__PCDOUT__POSITION                 0x00000006
#define __QEI2CON__PCDOUT__MASK                     0x00000040
#define __QEI2CON__PCDOUT__LENGTH                   0x00000001

#define __QEI2CON__SWPAB__POSITION                  0x00000007
#define __QEI2CON__SWPAB__MASK                      0x00000080
#define __QEI2CON__SWPAB__LENGTH                    0x00000001

#define __QEI2CON__QEIM__POSITION                   0x00000008
#define __QEI2CON__QEIM__MASK                       0x00000700
#define __QEI2CON__QEIM__LENGTH                     0x00000003

#define __QEI2CON__UPDN__POSITION                   0x0000000B
#define __QEI2CON__UPDN__MASK                       0x00000800
#define __QEI2CON__UPDN__LENGTH                     0x00000001

#define __QEI2CON__INDX__POSITION                   0x0000000C
#define __QEI2CON__INDX__MASK                       0x00001000
#define __QEI2CON__INDX__LENGTH                     0x00000001

#define __QEI2CON__QEISIDL__POSITION                0x0000000D
#define __QEI2CON__QEISIDL__MASK                    0x00002000
#define __QEI2CON__QEISIDL__LENGTH                  0x00000001

#define __QEI2CON__CNTERR__POSITION                 0x0000000F
#define __QEI2CON__CNTERR__MASK                     0x00008000
#define __QEI2CON__CNTERR__LENGTH                   0x00000001

#define __QEI2CON__TQCKPS0__POSITION                0x00000003
#define __QEI2CON__TQCKPS0__MASK                    0x00000008
#define __QEI2CON__TQCKPS0__LENGTH                  0x00000001

#define __QEI2CON__TQCKPS1__POSITION                0x00000004
#define __QEI2CON__TQCKPS1__MASK                    0x00000010
#define __QEI2CON__TQCKPS1__LENGTH                  0x00000001

#define __QEI2CON__QEIM0__POSITION                  0x00000008
#define __QEI2CON__QEIM0__MASK                      0x00000100
#define __QEI2CON__QEIM0__LENGTH                    0x00000001

#define __QEI2CON__QEIM1__POSITION                  0x00000009
#define __QEI2CON__QEIM1__MASK                      0x00000200
#define __QEI2CON__QEIM1__LENGTH                    0x00000001

#define __QEI2CON__QEIM2__POSITION                  0x0000000A
#define __QEI2CON__QEIM2__MASK                      0x00000400
#define __QEI2CON__QEIM2__LENGTH                    0x00000001

#define __DFLT2CON__QECK__POSITION                  0x00000004
#define __DFLT2CON__QECK__MASK                      0x00000070
#define __DFLT2CON__QECK__LENGTH                    0x00000003

#define __DFLT2CON__QEOUT__POSITION                 0x00000007
#define __DFLT2CON__QEOUT__MASK                     0x00000080
#define __DFLT2CON__QEOUT__LENGTH                   0x00000001

#define __DFLT2CON__CEID__POSITION                  0x00000008
#define __DFLT2CON__CEID__MASK                      0x00000100
#define __DFLT2CON__CEID__LENGTH                    0x00000001

#define __DFLT2CON__IMV__POSITION                   0x00000009
#define __DFLT2CON__IMV__MASK                       0x00000600
#define __DFLT2CON__IMV__LENGTH                     0x00000002

#define __DFLT2CON__QECK0__POSITION                 0x00000004
#define __DFLT2CON__QECK0__MASK                     0x00000010
#define __DFLT2CON__QECK0__LENGTH                   0x00000001

#define __DFLT2CON__QECK1__POSITION                 0x00000005
#define __DFLT2CON__QECK1__MASK                     0x00000020
#define __DFLT2CON__QECK1__LENGTH                   0x00000001

#define __DFLT2CON__QECK2__POSITION                 0x00000006
#define __DFLT2CON__QECK2__MASK                     0x00000040
#define __DFLT2CON__QECK2__LENGTH                   0x00000001

#define __DFLT2CON__IMV0__POSITION                  0x00000009
#define __DFLT2CON__IMV0__MASK                      0x00000200
#define __DFLT2CON__IMV0__LENGTH                    0x00000001

#define __DFLT2CON__IMV1__POSITION                  0x0000000A
#define __DFLT2CON__IMV1__MASK                      0x00000400
#define __DFLT2CON__IMV1__LENGTH                    0x00000001

#define __I2C1CON__SEN__POSITION                    0x00000000
#define __I2C1CON__SEN__MASK                        0x00000001
#define __I2C1CON__SEN__LENGTH                      0x00000001

#define __I2C1CON__RSEN__POSITION                   0x00000001
#define __I2C1CON__RSEN__MASK                       0x00000002
#define __I2C1CON__RSEN__LENGTH                     0x00000001

#define __I2C1CON__PEN__POSITION                    0x00000002
#define __I2C1CON__PEN__MASK                        0x00000004
#define __I2C1CON__PEN__LENGTH                      0x00000001

#define __I2C1CON__RCEN__POSITION                   0x00000003
#define __I2C1CON__RCEN__MASK                       0x00000008
#define __I2C1CON__RCEN__LENGTH                     0x00000001

#define __I2C1CON__ACKEN__POSITION                  0x00000004
#define __I2C1CON__ACKEN__MASK                      0x00000010
#define __I2C1CON__ACKEN__LENGTH                    0x00000001

#define __I2C1CON__ACKDT__POSITION                  0x00000005
#define __I2C1CON__ACKDT__MASK                      0x00000020
#define __I2C1CON__ACKDT__LENGTH                    0x00000001

#define __I2C1CON__STREN__POSITION                  0x00000006
#define __I2C1CON__STREN__MASK                      0x00000040
#define __I2C1CON__STREN__LENGTH                    0x00000001

#define __I2C1CON__GCEN__POSITION                   0x00000007
#define __I2C1CON__GCEN__MASK                       0x00000080
#define __I2C1CON__GCEN__LENGTH                     0x00000001

#define __I2C1CON__SMEN__POSITION                   0x00000008
#define __I2C1CON__SMEN__MASK                       0x00000100
#define __I2C1CON__SMEN__LENGTH                     0x00000001

#define __I2C1CON__DISSLW__POSITION                 0x00000009
#define __I2C1CON__DISSLW__MASK                     0x00000200
#define __I2C1CON__DISSLW__LENGTH                   0x00000001

#define __I2C1CON__A10M__POSITION                   0x0000000A
#define __I2C1CON__A10M__MASK                       0x00000400
#define __I2C1CON__A10M__LENGTH                     0x00000001

#define __I2C1CON__IPMIEN__POSITION                 0x0000000B
#define __I2C1CON__IPMIEN__MASK                     0x00000800
#define __I2C1CON__IPMIEN__LENGTH                   0x00000001

#define __I2C1CON__SCLREL__POSITION                 0x0000000C
#define __I2C1CON__SCLREL__MASK                     0x00001000
#define __I2C1CON__SCLREL__LENGTH                   0x00000001

#define __I2C1CON__I2CSIDL__POSITION                0x0000000D
#define __I2C1CON__I2CSIDL__MASK                    0x00002000
#define __I2C1CON__I2CSIDL__LENGTH                  0x00000001

#define __I2C1CON__I2CEN__POSITION                  0x0000000F
#define __I2C1CON__I2CEN__MASK                      0x00008000
#define __I2C1CON__I2CEN__LENGTH                    0x00000001

#define __I2CCON__SEN__POSITION                     0x00000000
#define __I2CCON__SEN__MASK                         0x00000001
#define __I2CCON__SEN__LENGTH                       0x00000001

#define __I2CCON__RSEN__POSITION                    0x00000001
#define __I2CCON__RSEN__MASK                        0x00000002
#define __I2CCON__RSEN__LENGTH                      0x00000001

#define __I2CCON__PEN__POSITION                     0x00000002
#define __I2CCON__PEN__MASK                         0x00000004
#define __I2CCON__PEN__LENGTH                       0x00000001

#define __I2CCON__RCEN__POSITION                    0x00000003
#define __I2CCON__RCEN__MASK                        0x00000008
#define __I2CCON__RCEN__LENGTH                      0x00000001

#define __I2CCON__ACKEN__POSITION                   0x00000004
#define __I2CCON__ACKEN__MASK                       0x00000010
#define __I2CCON__ACKEN__LENGTH                     0x00000001

#define __I2CCON__ACKDT__POSITION                   0x00000005
#define __I2CCON__ACKDT__MASK                       0x00000020
#define __I2CCON__ACKDT__LENGTH                     0x00000001

#define __I2CCON__STREN__POSITION                   0x00000006
#define __I2CCON__STREN__MASK                       0x00000040
#define __I2CCON__STREN__LENGTH                     0x00000001

#define __I2CCON__GCEN__POSITION                    0x00000007
#define __I2CCON__GCEN__MASK                        0x00000080
#define __I2CCON__GCEN__LENGTH                      0x00000001

#define __I2CCON__SMEN__POSITION                    0x00000008
#define __I2CCON__SMEN__MASK                        0x00000100
#define __I2CCON__SMEN__LENGTH                      0x00000001

#define __I2CCON__DISSLW__POSITION                  0x00000009
#define __I2CCON__DISSLW__MASK                      0x00000200
#define __I2CCON__DISSLW__LENGTH                    0x00000001

#define __I2CCON__A10M__POSITION                    0x0000000A
#define __I2CCON__A10M__MASK                        0x00000400
#define __I2CCON__A10M__LENGTH                      0x00000001

#define __I2CCON__IPMIEN__POSITION                  0x0000000B
#define __I2CCON__IPMIEN__MASK                      0x00000800
#define __I2CCON__IPMIEN__LENGTH                    0x00000001

#define __I2CCON__SCLREL__POSITION                  0x0000000C
#define __I2CCON__SCLREL__MASK                      0x00001000
#define __I2CCON__SCLREL__LENGTH                    0x00000001

#define __I2CCON__I2CSIDL__POSITION                 0x0000000D
#define __I2CCON__I2CSIDL__MASK                     0x00002000
#define __I2CCON__I2CSIDL__LENGTH                   0x00000001

#define __I2CCON__I2CEN__POSITION                   0x0000000F
#define __I2CCON__I2CEN__MASK                       0x00008000
#define __I2CCON__I2CEN__LENGTH                     0x00000001

#define __I2C1STAT__TBF__POSITION                   0x00000000
#define __I2C1STAT__TBF__MASK                       0x00000001
#define __I2C1STAT__TBF__LENGTH                     0x00000001

#define __I2C1STAT__RBF__POSITION                   0x00000001
#define __I2C1STAT__RBF__MASK                       0x00000002
#define __I2C1STAT__RBF__LENGTH                     0x00000001

#define __I2C1STAT__R__W__POSITION                   0x00000002
#define __I2C1STAT__R__W__MASK                       0x00000004
#define __I2C1STAT__R__W__LENGTH                     0x00000001

#define __I2C1STAT__S__POSITION                     0x00000003
#define __I2C1STAT__S__MASK                         0x00000008
#define __I2C1STAT__S__LENGTH                       0x00000001

#define __I2C1STAT__P__POSITION                     0x00000004
#define __I2C1STAT__P__MASK                         0x00000010
#define __I2C1STAT__P__LENGTH                       0x00000001

#define __I2C1STAT__D__A__POSITION                   0x00000005
#define __I2C1STAT__D__A__MASK                       0x00000020
#define __I2C1STAT__D__A__LENGTH                     0x00000001

#define __I2C1STAT__I2COV__POSITION                 0x00000006
#define __I2C1STAT__I2COV__MASK                     0x00000040
#define __I2C1STAT__I2COV__LENGTH                   0x00000001

#define __I2C1STAT__IWCOL__POSITION                 0x00000007
#define __I2C1STAT__IWCOL__MASK                     0x00000080
#define __I2C1STAT__IWCOL__LENGTH                   0x00000001

#define __I2C1STAT__ADD10__POSITION                 0x00000008
#define __I2C1STAT__ADD10__MASK                     0x00000100
#define __I2C1STAT__ADD10__LENGTH                   0x00000001

#define __I2C1STAT__GCSTAT__POSITION                0x00000009
#define __I2C1STAT__GCSTAT__MASK                    0x00000200
#define __I2C1STAT__GCSTAT__LENGTH                  0x00000001

#define __I2C1STAT__BCL__POSITION                   0x0000000A
#define __I2C1STAT__BCL__MASK                       0x00000400
#define __I2C1STAT__BCL__LENGTH                     0x00000001

#define __I2C1STAT__TRSTAT__POSITION                0x0000000E
#define __I2C1STAT__TRSTAT__MASK                    0x00004000
#define __I2C1STAT__TRSTAT__LENGTH                  0x00000001

#define __I2C1STAT__ACKSTAT__POSITION               0x0000000F
#define __I2C1STAT__ACKSTAT__MASK                   0x00008000
#define __I2C1STAT__ACKSTAT__LENGTH                 0x00000001

#define __I2CSTAT__TBF__POSITION                    0x00000000
#define __I2CSTAT__TBF__MASK                        0x00000001
#define __I2CSTAT__TBF__LENGTH                      0x00000001

#define __I2CSTAT__RBF__POSITION                    0x00000001
#define __I2CSTAT__RBF__MASK                        0x00000002
#define __I2CSTAT__RBF__LENGTH                      0x00000001

#define __I2CSTAT__R__W__POSITION                    0x00000002
#define __I2CSTAT__R__W__MASK                        0x00000004
#define __I2CSTAT__R__W__LENGTH                      0x00000001

#define __I2CSTAT__S__POSITION                      0x00000003
#define __I2CSTAT__S__MASK                          0x00000008
#define __I2CSTAT__S__LENGTH                        0x00000001

#define __I2CSTAT__P__POSITION                      0x00000004
#define __I2CSTAT__P__MASK                          0x00000010
#define __I2CSTAT__P__LENGTH                        0x00000001

#define __I2CSTAT__D__A__POSITION                    0x00000005
#define __I2CSTAT__D__A__MASK                        0x00000020
#define __I2CSTAT__D__A__LENGTH                      0x00000001

#define __I2CSTAT__I2COV__POSITION                  0x00000006
#define __I2CSTAT__I2COV__MASK                      0x00000040
#define __I2CSTAT__I2COV__LENGTH                    0x00000001

#define __I2CSTAT__IWCOL__POSITION                  0x00000007
#define __I2CSTAT__IWCOL__MASK                      0x00000080
#define __I2CSTAT__IWCOL__LENGTH                    0x00000001

#define __I2CSTAT__ADD10__POSITION                  0x00000008
#define __I2CSTAT__ADD10__MASK                      0x00000100
#define __I2CSTAT__ADD10__LENGTH                    0x00000001

#define __I2CSTAT__GCSTAT__POSITION                 0x00000009
#define __I2CSTAT__GCSTAT__MASK                     0x00000200
#define __I2CSTAT__GCSTAT__LENGTH                   0x00000001

#define __I2CSTAT__BCL__POSITION                    0x0000000A
#define __I2CSTAT__BCL__MASK                        0x00000400
#define __I2CSTAT__BCL__LENGTH                      0x00000001

#define __I2CSTAT__TRSTAT__POSITION                 0x0000000E
#define __I2CSTAT__TRSTAT__MASK                     0x00004000
#define __I2CSTAT__TRSTAT__LENGTH                   0x00000001

#define __I2CSTAT__ACKSTAT__POSITION                0x0000000F
#define __I2CSTAT__ACKSTAT__MASK                    0x00008000
#define __I2CSTAT__ACKSTAT__LENGTH                  0x00000001

#define __U1MODE__STSEL__POSITION                   0x00000000
#define __U1MODE__STSEL__MASK                       0x00000001
#define __U1MODE__STSEL__LENGTH                     0x00000001

#define __U1MODE__PDSEL__POSITION                   0x00000001
#define __U1MODE__PDSEL__MASK                       0x00000006
#define __U1MODE__PDSEL__LENGTH                     0x00000002

#define __U1MODE__BRGH__POSITION                    0x00000003
#define __U1MODE__BRGH__MASK                        0x00000008
#define __U1MODE__BRGH__LENGTH                      0x00000001

#define __U1MODE__URXINV__POSITION                  0x00000004
#define __U1MODE__URXINV__MASK                      0x00000010
#define __U1MODE__URXINV__LENGTH                    0x00000001

#define __U1MODE__ABAUD__POSITION                   0x00000005
#define __U1MODE__ABAUD__MASK                       0x00000020
#define __U1MODE__ABAUD__LENGTH                     0x00000001

#define __U1MODE__LPBACK__POSITION                  0x00000006
#define __U1MODE__LPBACK__MASK                      0x00000040
#define __U1MODE__LPBACK__LENGTH                    0x00000001

#define __U1MODE__WAKE__POSITION                    0x00000007
#define __U1MODE__WAKE__MASK                        0x00000080
#define __U1MODE__WAKE__LENGTH                      0x00000001

#define __U1MODE__UEN__POSITION                     0x00000008
#define __U1MODE__UEN__MASK                         0x00000300
#define __U1MODE__UEN__LENGTH                       0x00000002

#define __U1MODE__RTSMD__POSITION                   0x0000000B
#define __U1MODE__RTSMD__MASK                       0x00000800
#define __U1MODE__RTSMD__LENGTH                     0x00000001

#define __U1MODE__IREN__POSITION                    0x0000000C
#define __U1MODE__IREN__MASK                        0x00001000
#define __U1MODE__IREN__LENGTH                      0x00000001

#define __U1MODE__USIDL__POSITION                   0x0000000D
#define __U1MODE__USIDL__MASK                       0x00002000
#define __U1MODE__USIDL__LENGTH                     0x00000001

#define __U1MODE__UARTEN__POSITION                  0x0000000F
#define __U1MODE__UARTEN__MASK                      0x00008000
#define __U1MODE__UARTEN__LENGTH                    0x00000001

#define __U1MODE__PDSEL0__POSITION                  0x00000001
#define __U1MODE__PDSEL0__MASK                      0x00000002
#define __U1MODE__PDSEL0__LENGTH                    0x00000001

#define __U1MODE__PDSEL1__POSITION                  0x00000002
#define __U1MODE__PDSEL1__MASK                      0x00000004
#define __U1MODE__PDSEL1__LENGTH                    0x00000001

#define __U1MODE__UEN0__POSITION                    0x00000008
#define __U1MODE__UEN0__MASK                        0x00000100
#define __U1MODE__UEN0__LENGTH                      0x00000001

#define __U1MODE__UEN1__POSITION                    0x00000009
#define __U1MODE__UEN1__MASK                        0x00000200
#define __U1MODE__UEN1__LENGTH                      0x00000001

#define __U1STA__URXDA__POSITION                    0x00000000
#define __U1STA__URXDA__MASK                        0x00000001
#define __U1STA__URXDA__LENGTH                      0x00000001

#define __U1STA__OERR__POSITION                     0x00000001
#define __U1STA__OERR__MASK                         0x00000002
#define __U1STA__OERR__LENGTH                       0x00000001

#define __U1STA__FERR__POSITION                     0x00000002
#define __U1STA__FERR__MASK                         0x00000004
#define __U1STA__FERR__LENGTH                       0x00000001

#define __U1STA__PERR__POSITION                     0x00000003
#define __U1STA__PERR__MASK                         0x00000008
#define __U1STA__PERR__LENGTH                       0x00000001

#define __U1STA__RIDLE__POSITION                    0x00000004
#define __U1STA__RIDLE__MASK                        0x00000010
#define __U1STA__RIDLE__LENGTH                      0x00000001

#define __U1STA__ADDEN__POSITION                    0x00000005
#define __U1STA__ADDEN__MASK                        0x00000020
#define __U1STA__ADDEN__LENGTH                      0x00000001

#define __U1STA__URXISEL__POSITION                  0x00000006
#define __U1STA__URXISEL__MASK                      0x000000C0
#define __U1STA__URXISEL__LENGTH                    0x00000002

#define __U1STA__TRMT__POSITION                     0x00000008
#define __U1STA__TRMT__MASK                         0x00000100
#define __U1STA__TRMT__LENGTH                       0x00000001

#define __U1STA__UTXBF__POSITION                    0x00000009
#define __U1STA__UTXBF__MASK                        0x00000200
#define __U1STA__UTXBF__LENGTH                      0x00000001

#define __U1STA__UTXEN__POSITION                    0x0000000A
#define __U1STA__UTXEN__MASK                        0x00000400
#define __U1STA__UTXEN__LENGTH                      0x00000001

#define __U1STA__UTXBRK__POSITION                   0x0000000B
#define __U1STA__UTXBRK__MASK                       0x00000800
#define __U1STA__UTXBRK__LENGTH                     0x00000001

#define __U1STA__UTXISEL0__POSITION                 0x0000000D
#define __U1STA__UTXISEL0__MASK                     0x00002000
#define __U1STA__UTXISEL0__LENGTH                   0x00000001

#define __U1STA__UTXINV__POSITION                   0x0000000E
#define __U1STA__UTXINV__MASK                       0x00004000
#define __U1STA__UTXINV__LENGTH                     0x00000001

#define __U1STA__UTXISEL1__POSITION                 0x0000000F
#define __U1STA__UTXISEL1__MASK                     0x00008000
#define __U1STA__UTXISEL1__LENGTH                   0x00000001

#define __U1STA__URXISEL0__POSITION                 0x00000006
#define __U1STA__URXISEL0__MASK                     0x00000040
#define __U1STA__URXISEL0__LENGTH                   0x00000001

#define __U1STA__URXISEL1__POSITION                 0x00000007
#define __U1STA__URXISEL1__MASK                     0x00000080
#define __U1STA__URXISEL1__LENGTH                   0x00000001

#define __U1TXREG__UTXREG0__POSITION                0x00000000
#define __U1TXREG__UTXREG0__MASK                    0x00000001
#define __U1TXREG__UTXREG0__LENGTH                  0x00000001

#define __U1TXREG__UTXREG1__POSITION                0x00000001
#define __U1TXREG__UTXREG1__MASK                    0x00000002
#define __U1TXREG__UTXREG1__LENGTH                  0x00000001

#define __U1TXREG__UTXREG2__POSITION                0x00000002
#define __U1TXREG__UTXREG2__MASK                    0x00000004
#define __U1TXREG__UTXREG2__LENGTH                  0x00000001

#define __U1TXREG__UTXREG3__POSITION                0x00000003
#define __U1TXREG__UTXREG3__MASK                    0x00000008
#define __U1TXREG__UTXREG3__LENGTH                  0x00000001

#define __U1TXREG__UTXREG4__POSITION                0x00000004
#define __U1TXREG__UTXREG4__MASK                    0x00000010
#define __U1TXREG__UTXREG4__LENGTH                  0x00000001

#define __U1TXREG__UTXREG5__POSITION                0x00000005
#define __U1TXREG__UTXREG5__MASK                    0x00000020
#define __U1TXREG__UTXREG5__LENGTH                  0x00000001

#define __U1TXREG__UTXREG6__POSITION                0x00000006
#define __U1TXREG__UTXREG6__MASK                    0x00000040
#define __U1TXREG__UTXREG6__LENGTH                  0x00000001

#define __U1TXREG__UTXREG7__POSITION                0x00000007
#define __U1TXREG__UTXREG7__MASK                    0x00000080
#define __U1TXREG__UTXREG7__LENGTH                  0x00000001

#define __U1TXREG__UTXREG8__POSITION                0x00000008
#define __U1TXREG__UTXREG8__MASK                    0x00000100
#define __U1TXREG__UTXREG8__LENGTH                  0x00000001

#define __U1RXREG__URXREG0__POSITION                0x00000000
#define __U1RXREG__URXREG0__MASK                    0x00000001
#define __U1RXREG__URXREG0__LENGTH                  0x00000001

#define __U1RXREG__URXREG1__POSITION                0x00000001
#define __U1RXREG__URXREG1__MASK                    0x00000002
#define __U1RXREG__URXREG1__LENGTH                  0x00000001

#define __U1RXREG__URXREG2__POSITION                0x00000002
#define __U1RXREG__URXREG2__MASK                    0x00000004
#define __U1RXREG__URXREG2__LENGTH                  0x00000001

#define __U1RXREG__URXREG3__POSITION                0x00000003
#define __U1RXREG__URXREG3__MASK                    0x00000008
#define __U1RXREG__URXREG3__LENGTH                  0x00000001

#define __U1RXREG__URXREG4__POSITION                0x00000004
#define __U1RXREG__URXREG4__MASK                    0x00000010
#define __U1RXREG__URXREG4__LENGTH                  0x00000001

#define __U1RXREG__URXREG5__POSITION                0x00000005
#define __U1RXREG__URXREG5__MASK                    0x00000020
#define __U1RXREG__URXREG5__LENGTH                  0x00000001

#define __U1RXREG__URXREG6__POSITION                0x00000006
#define __U1RXREG__URXREG6__MASK                    0x00000040
#define __U1RXREG__URXREG6__LENGTH                  0x00000001

#define __U1RXREG__URXREG7__POSITION                0x00000007
#define __U1RXREG__URXREG7__MASK                    0x00000080
#define __U1RXREG__URXREG7__LENGTH                  0x00000001

#define __U1RXREG__URXREG8__POSITION                0x00000008
#define __U1RXREG__URXREG8__MASK                    0x00000100
#define __U1RXREG__URXREG8__LENGTH                  0x00000001

#define __U2MODE__STSEL__POSITION                   0x00000000
#define __U2MODE__STSEL__MASK                       0x00000001
#define __U2MODE__STSEL__LENGTH                     0x00000001

#define __U2MODE__PDSEL__POSITION                   0x00000001
#define __U2MODE__PDSEL__MASK                       0x00000006
#define __U2MODE__PDSEL__LENGTH                     0x00000002

#define __U2MODE__BRGH__POSITION                    0x00000003
#define __U2MODE__BRGH__MASK                        0x00000008
#define __U2MODE__BRGH__LENGTH                      0x00000001

#define __U2MODE__URXINV__POSITION                  0x00000004
#define __U2MODE__URXINV__MASK                      0x00000010
#define __U2MODE__URXINV__LENGTH                    0x00000001

#define __U2MODE__ABAUD__POSITION                   0x00000005
#define __U2MODE__ABAUD__MASK                       0x00000020
#define __U2MODE__ABAUD__LENGTH                     0x00000001

#define __U2MODE__LPBACK__POSITION                  0x00000006
#define __U2MODE__LPBACK__MASK                      0x00000040
#define __U2MODE__LPBACK__LENGTH                    0x00000001

#define __U2MODE__WAKE__POSITION                    0x00000007
#define __U2MODE__WAKE__MASK                        0x00000080
#define __U2MODE__WAKE__LENGTH                      0x00000001

#define __U2MODE__UEN__POSITION                     0x00000008
#define __U2MODE__UEN__MASK                         0x00000300
#define __U2MODE__UEN__LENGTH                       0x00000002

#define __U2MODE__RTSMD__POSITION                   0x0000000B
#define __U2MODE__RTSMD__MASK                       0x00000800
#define __U2MODE__RTSMD__LENGTH                     0x00000001

#define __U2MODE__IREN__POSITION                    0x0000000C
#define __U2MODE__IREN__MASK                        0x00001000
#define __U2MODE__IREN__LENGTH                      0x00000001

#define __U2MODE__USIDL__POSITION                   0x0000000D
#define __U2MODE__USIDL__MASK                       0x00002000
#define __U2MODE__USIDL__LENGTH                     0x00000001

#define __U2MODE__UARTEN__POSITION                  0x0000000F
#define __U2MODE__UARTEN__MASK                      0x00008000
#define __U2MODE__UARTEN__LENGTH                    0x00000001

#define __U2MODE__PDSEL0__POSITION                  0x00000001
#define __U2MODE__PDSEL0__MASK                      0x00000002
#define __U2MODE__PDSEL0__LENGTH                    0x00000001

#define __U2MODE__PDSEL1__POSITION                  0x00000002
#define __U2MODE__PDSEL1__MASK                      0x00000004
#define __U2MODE__PDSEL1__LENGTH                    0x00000001

#define __U2MODE__UEN0__POSITION                    0x00000008
#define __U2MODE__UEN0__MASK                        0x00000100
#define __U2MODE__UEN0__LENGTH                      0x00000001

#define __U2MODE__UEN1__POSITION                    0x00000009
#define __U2MODE__UEN1__MASK                        0x00000200
#define __U2MODE__UEN1__LENGTH                      0x00000001

#define __U2STA__URXDA__POSITION                    0x00000000
#define __U2STA__URXDA__MASK                        0x00000001
#define __U2STA__URXDA__LENGTH                      0x00000001

#define __U2STA__OERR__POSITION                     0x00000001
#define __U2STA__OERR__MASK                         0x00000002
#define __U2STA__OERR__LENGTH                       0x00000001

#define __U2STA__FERR__POSITION                     0x00000002
#define __U2STA__FERR__MASK                         0x00000004
#define __U2STA__FERR__LENGTH                       0x00000001

#define __U2STA__PERR__POSITION                     0x00000003
#define __U2STA__PERR__MASK                         0x00000008
#define __U2STA__PERR__LENGTH                       0x00000001

#define __U2STA__RIDLE__POSITION                    0x00000004
#define __U2STA__RIDLE__MASK                        0x00000010
#define __U2STA__RIDLE__LENGTH                      0x00000001

#define __U2STA__ADDEN__POSITION                    0x00000005
#define __U2STA__ADDEN__MASK                        0x00000020
#define __U2STA__ADDEN__LENGTH                      0x00000001

#define __U2STA__URXISEL__POSITION                  0x00000006
#define __U2STA__URXISEL__MASK                      0x000000C0
#define __U2STA__URXISEL__LENGTH                    0x00000002

#define __U2STA__TRMT__POSITION                     0x00000008
#define __U2STA__TRMT__MASK                         0x00000100
#define __U2STA__TRMT__LENGTH                       0x00000001

#define __U2STA__UTXBF__POSITION                    0x00000009
#define __U2STA__UTXBF__MASK                        0x00000200
#define __U2STA__UTXBF__LENGTH                      0x00000001

#define __U2STA__UTXEN__POSITION                    0x0000000A
#define __U2STA__UTXEN__MASK                        0x00000400
#define __U2STA__UTXEN__LENGTH                      0x00000001

#define __U2STA__UTXBRK__POSITION                   0x0000000B
#define __U2STA__UTXBRK__MASK                       0x00000800
#define __U2STA__UTXBRK__LENGTH                     0x00000001

#define __U2STA__UTXISEL0__POSITION                 0x0000000D
#define __U2STA__UTXISEL0__MASK                     0x00002000
#define __U2STA__UTXISEL0__LENGTH                   0x00000001

#define __U2STA__UTXINV__POSITION                   0x0000000E
#define __U2STA__UTXINV__MASK                       0x00004000
#define __U2STA__UTXINV__LENGTH                     0x00000001

#define __U2STA__UTXISEL1__POSITION                 0x0000000F
#define __U2STA__UTXISEL1__MASK                     0x00008000
#define __U2STA__UTXISEL1__LENGTH                   0x00000001

#define __U2STA__URXISEL0__POSITION                 0x00000006
#define __U2STA__URXISEL0__MASK                     0x00000040
#define __U2STA__URXISEL0__LENGTH                   0x00000001

#define __U2STA__URXISEL1__POSITION                 0x00000007
#define __U2STA__URXISEL1__MASK                     0x00000080
#define __U2STA__URXISEL1__LENGTH                   0x00000001

#define __U2TXREG__UTXREG0__POSITION                0x00000000
#define __U2TXREG__UTXREG0__MASK                    0x00000001
#define __U2TXREG__UTXREG0__LENGTH                  0x00000001

#define __U2TXREG__UTXREG1__POSITION                0x00000001
#define __U2TXREG__UTXREG1__MASK                    0x00000002
#define __U2TXREG__UTXREG1__LENGTH                  0x00000001

#define __U2TXREG__UTXREG2__POSITION                0x00000002
#define __U2TXREG__UTXREG2__MASK                    0x00000004
#define __U2TXREG__UTXREG2__LENGTH                  0x00000001

#define __U2TXREG__UTXREG3__POSITION                0x00000003
#define __U2TXREG__UTXREG3__MASK                    0x00000008
#define __U2TXREG__UTXREG3__LENGTH                  0x00000001

#define __U2TXREG__UTXREG4__POSITION                0x00000004
#define __U2TXREG__UTXREG4__MASK                    0x00000010
#define __U2TXREG__UTXREG4__LENGTH                  0x00000001

#define __U2TXREG__UTXREG5__POSITION                0x00000005
#define __U2TXREG__UTXREG5__MASK                    0x00000020
#define __U2TXREG__UTXREG5__LENGTH                  0x00000001

#define __U2TXREG__UTXREG6__POSITION                0x00000006
#define __U2TXREG__UTXREG6__MASK                    0x00000040
#define __U2TXREG__UTXREG6__LENGTH                  0x00000001

#define __U2TXREG__UTXREG7__POSITION                0x00000007
#define __U2TXREG__UTXREG7__MASK                    0x00000080
#define __U2TXREG__UTXREG7__LENGTH                  0x00000001

#define __U2TXREG__UTXREG8__POSITION                0x00000008
#define __U2TXREG__UTXREG8__MASK                    0x00000100
#define __U2TXREG__UTXREG8__LENGTH                  0x00000001

#define __U2RXREG__URXREG0__POSITION                0x00000000
#define __U2RXREG__URXREG0__MASK                    0x00000001
#define __U2RXREG__URXREG0__LENGTH                  0x00000001

#define __U2RXREG__URXREG1__POSITION                0x00000001
#define __U2RXREG__URXREG1__MASK                    0x00000002
#define __U2RXREG__URXREG1__LENGTH                  0x00000001

#define __U2RXREG__URXREG2__POSITION                0x00000002
#define __U2RXREG__URXREG2__MASK                    0x00000004
#define __U2RXREG__URXREG2__LENGTH                  0x00000001

#define __U2RXREG__URXREG3__POSITION                0x00000003
#define __U2RXREG__URXREG3__MASK                    0x00000008
#define __U2RXREG__URXREG3__LENGTH                  0x00000001

#define __U2RXREG__URXREG4__POSITION                0x00000004
#define __U2RXREG__URXREG4__MASK                    0x00000010
#define __U2RXREG__URXREG4__LENGTH                  0x00000001

#define __U2RXREG__URXREG5__POSITION                0x00000005
#define __U2RXREG__URXREG5__MASK                    0x00000020
#define __U2RXREG__URXREG5__LENGTH                  0x00000001

#define __U2RXREG__URXREG6__POSITION                0x00000006
#define __U2RXREG__URXREG6__MASK                    0x00000040
#define __U2RXREG__URXREG6__LENGTH                  0x00000001

#define __U2RXREG__URXREG7__POSITION                0x00000007
#define __U2RXREG__URXREG7__MASK                    0x00000080
#define __U2RXREG__URXREG7__LENGTH                  0x00000001

#define __U2RXREG__URXREG8__POSITION                0x00000008
#define __U2RXREG__URXREG8__MASK                    0x00000100
#define __U2RXREG__URXREG8__LENGTH                  0x00000001

#define __SPI1STAT__SPIRBF__POSITION                0x00000000
#define __SPI1STAT__SPIRBF__MASK                    0x00000001
#define __SPI1STAT__SPIRBF__LENGTH                  0x00000001

#define __SPI1STAT__SPITBF__POSITION                0x00000001
#define __SPI1STAT__SPITBF__MASK                    0x00000002
#define __SPI1STAT__SPITBF__LENGTH                  0x00000001

#define __SPI1STAT__SPIROV__POSITION                0x00000006
#define __SPI1STAT__SPIROV__MASK                    0x00000040
#define __SPI1STAT__SPIROV__LENGTH                  0x00000001

#define __SPI1STAT__SPISIDL__POSITION               0x0000000D
#define __SPI1STAT__SPISIDL__MASK                   0x00002000
#define __SPI1STAT__SPISIDL__LENGTH                 0x00000001

#define __SPI1STAT__SPIEN__POSITION                 0x0000000F
#define __SPI1STAT__SPIEN__MASK                     0x00008000
#define __SPI1STAT__SPIEN__LENGTH                   0x00000001

#define __SPI1CON1__PPRE__POSITION                  0x00000000
#define __SPI1CON1__PPRE__MASK                      0x00000003
#define __SPI1CON1__PPRE__LENGTH                    0x00000002

#define __SPI1CON1__SPRE__POSITION                  0x00000002
#define __SPI1CON1__SPRE__MASK                      0x0000001C
#define __SPI1CON1__SPRE__LENGTH                    0x00000003

#define __SPI1CON1__MSTEN__POSITION                 0x00000005
#define __SPI1CON1__MSTEN__MASK                     0x00000020
#define __SPI1CON1__MSTEN__LENGTH                   0x00000001

#define __SPI1CON1__CKP__POSITION                   0x00000006
#define __SPI1CON1__CKP__MASK                       0x00000040
#define __SPI1CON1__CKP__LENGTH                     0x00000001

#define __SPI1CON1__SSEN__POSITION                  0x00000007
#define __SPI1CON1__SSEN__MASK                      0x00000080
#define __SPI1CON1__SSEN__LENGTH                    0x00000001

#define __SPI1CON1__CKE__POSITION                   0x00000008
#define __SPI1CON1__CKE__MASK                       0x00000100
#define __SPI1CON1__CKE__LENGTH                     0x00000001

#define __SPI1CON1__SMP__POSITION                   0x00000009
#define __SPI1CON1__SMP__MASK                       0x00000200
#define __SPI1CON1__SMP__LENGTH                     0x00000001

#define __SPI1CON1__MODE16__POSITION                0x0000000A
#define __SPI1CON1__MODE16__MASK                    0x00000400
#define __SPI1CON1__MODE16__LENGTH                  0x00000001

#define __SPI1CON1__DISSDO__POSITION                0x0000000B
#define __SPI1CON1__DISSDO__MASK                    0x00000800
#define __SPI1CON1__DISSDO__LENGTH                  0x00000001

#define __SPI1CON1__DISSCK__POSITION                0x0000000C
#define __SPI1CON1__DISSCK__MASK                    0x00001000
#define __SPI1CON1__DISSCK__LENGTH                  0x00000001

#define __SPI1CON1__PPRE0__POSITION                 0x00000000
#define __SPI1CON1__PPRE0__MASK                     0x00000001
#define __SPI1CON1__PPRE0__LENGTH                   0x00000001

#define __SPI1CON1__PPRE1__POSITION                 0x00000001
#define __SPI1CON1__PPRE1__MASK                     0x00000002
#define __SPI1CON1__PPRE1__LENGTH                   0x00000001

#define __SPI1CON1__SPRE0__POSITION                 0x00000002
#define __SPI1CON1__SPRE0__MASK                     0x00000004
#define __SPI1CON1__SPRE0__LENGTH                   0x00000001

#define __SPI1CON1__SPRE1__POSITION                 0x00000003
#define __SPI1CON1__SPRE1__MASK                     0x00000008
#define __SPI1CON1__SPRE1__LENGTH                   0x00000001

#define __SPI1CON1__SPRE2__POSITION                 0x00000004
#define __SPI1CON1__SPRE2__MASK                     0x00000010
#define __SPI1CON1__SPRE2__LENGTH                   0x00000001

#define __SPI1CON2__FRMDLY__POSITION                0x00000001
#define __SPI1CON2__FRMDLY__MASK                    0x00000002
#define __SPI1CON2__FRMDLY__LENGTH                  0x00000001

#define __SPI1CON2__FRMPOL__POSITION                0x0000000D
#define __SPI1CON2__FRMPOL__MASK                    0x00002000
#define __SPI1CON2__FRMPOL__LENGTH                  0x00000001

#define __SPI1CON2__SPIFSD__POSITION                0x0000000E
#define __SPI1CON2__SPIFSD__MASK                    0x00004000
#define __SPI1CON2__SPIFSD__LENGTH                  0x00000001

#define __SPI1CON2__FRMEN__POSITION                 0x0000000F
#define __SPI1CON2__FRMEN__MASK                     0x00008000
#define __SPI1CON2__FRMEN__LENGTH                   0x00000001

#define __SPI2STAT__SPIRBF__POSITION                0x00000000
#define __SPI2STAT__SPIRBF__MASK                    0x00000001
#define __SPI2STAT__SPIRBF__LENGTH                  0x00000001

#define __SPI2STAT__SPITBF__POSITION                0x00000001
#define __SPI2STAT__SPITBF__MASK                    0x00000002
#define __SPI2STAT__SPITBF__LENGTH                  0x00000001

#define __SPI2STAT__SPIROV__POSITION                0x00000006
#define __SPI2STAT__SPIROV__MASK                    0x00000040
#define __SPI2STAT__SPIROV__LENGTH                  0x00000001

#define __SPI2STAT__SPISIDL__POSITION               0x0000000D
#define __SPI2STAT__SPISIDL__MASK                   0x00002000
#define __SPI2STAT__SPISIDL__LENGTH                 0x00000001

#define __SPI2STAT__SPIEN__POSITION                 0x0000000F
#define __SPI2STAT__SPIEN__MASK                     0x00008000
#define __SPI2STAT__SPIEN__LENGTH                   0x00000001

#define __SPI2CON1__PPRE__POSITION                  0x00000000
#define __SPI2CON1__PPRE__MASK                      0x00000003
#define __SPI2CON1__PPRE__LENGTH                    0x00000002

#define __SPI2CON1__SPRE__POSITION                  0x00000002
#define __SPI2CON1__SPRE__MASK                      0x0000001C
#define __SPI2CON1__SPRE__LENGTH                    0x00000003

#define __SPI2CON1__MSTEN__POSITION                 0x00000005
#define __SPI2CON1__MSTEN__MASK                     0x00000020
#define __SPI2CON1__MSTEN__LENGTH                   0x00000001

#define __SPI2CON1__CKP__POSITION                   0x00000006
#define __SPI2CON1__CKP__MASK                       0x00000040
#define __SPI2CON1__CKP__LENGTH                     0x00000001

#define __SPI2CON1__SSEN__POSITION                  0x00000007
#define __SPI2CON1__SSEN__MASK                      0x00000080
#define __SPI2CON1__SSEN__LENGTH                    0x00000001

#define __SPI2CON1__CKE__POSITION                   0x00000008
#define __SPI2CON1__CKE__MASK                       0x00000100
#define __SPI2CON1__CKE__LENGTH                     0x00000001

#define __SPI2CON1__SMP__POSITION                   0x00000009
#define __SPI2CON1__SMP__MASK                       0x00000200
#define __SPI2CON1__SMP__LENGTH                     0x00000001

#define __SPI2CON1__MODE16__POSITION                0x0000000A
#define __SPI2CON1__MODE16__MASK                    0x00000400
#define __SPI2CON1__MODE16__LENGTH                  0x00000001

#define __SPI2CON1__DISSDO__POSITION                0x0000000B
#define __SPI2CON1__DISSDO__MASK                    0x00000800
#define __SPI2CON1__DISSDO__LENGTH                  0x00000001

#define __SPI2CON1__DISSCK__POSITION                0x0000000C
#define __SPI2CON1__DISSCK__MASK                    0x00001000
#define __SPI2CON1__DISSCK__LENGTH                  0x00000001

#define __SPI2CON1__PPRE0__POSITION                 0x00000000
#define __SPI2CON1__PPRE0__MASK                     0x00000001
#define __SPI2CON1__PPRE0__LENGTH                   0x00000001

#define __SPI2CON1__PPRE1__POSITION                 0x00000001
#define __SPI2CON1__PPRE1__MASK                     0x00000002
#define __SPI2CON1__PPRE1__LENGTH                   0x00000001

#define __SPI2CON1__SPRE0__POSITION                 0x00000002
#define __SPI2CON1__SPRE0__MASK                     0x00000004
#define __SPI2CON1__SPRE0__LENGTH                   0x00000001

#define __SPI2CON1__SPRE1__POSITION                 0x00000003
#define __SPI2CON1__SPRE1__MASK                     0x00000008
#define __SPI2CON1__SPRE1__LENGTH                   0x00000001

#define __SPI2CON1__SPRE2__POSITION                 0x00000004
#define __SPI2CON1__SPRE2__MASK                     0x00000010
#define __SPI2CON1__SPRE2__LENGTH                   0x00000001

#define __SPI2CON2__FRMDLY__POSITION                0x00000001
#define __SPI2CON2__FRMDLY__MASK                    0x00000002
#define __SPI2CON2__FRMDLY__LENGTH                  0x00000001

#define __SPI2CON2__FRMPOL__POSITION                0x0000000D
#define __SPI2CON2__FRMPOL__MASK                    0x00002000
#define __SPI2CON2__FRMPOL__LENGTH                  0x00000001

#define __SPI2CON2__SPIFSD__POSITION                0x0000000E
#define __SPI2CON2__SPIFSD__MASK                    0x00004000
#define __SPI2CON2__SPIFSD__LENGTH                  0x00000001

#define __SPI2CON2__FRMEN__POSITION                 0x0000000F
#define __SPI2CON2__FRMEN__MASK                     0x00008000
#define __SPI2CON2__FRMEN__LENGTH                   0x00000001

#define __TRISA__TRISA0__POSITION                   0x00000000
#define __TRISA__TRISA0__MASK                       0x00000001
#define __TRISA__TRISA0__LENGTH                     0x00000001

#define __TRISA__TRISA1__POSITION                   0x00000001
#define __TRISA__TRISA1__MASK                       0x00000002
#define __TRISA__TRISA1__LENGTH                     0x00000001

#define __TRISA__TRISA2__POSITION                   0x00000002
#define __TRISA__TRISA2__MASK                       0x00000004
#define __TRISA__TRISA2__LENGTH                     0x00000001

#define __TRISA__TRISA3__POSITION                   0x00000003
#define __TRISA__TRISA3__MASK                       0x00000008
#define __TRISA__TRISA3__LENGTH                     0x00000001

#define __TRISA__TRISA4__POSITION                   0x00000004
#define __TRISA__TRISA4__MASK                       0x00000010
#define __TRISA__TRISA4__LENGTH                     0x00000001

#define __TRISA__TRISA7__POSITION                   0x00000007
#define __TRISA__TRISA7__MASK                       0x00000080
#define __TRISA__TRISA7__LENGTH                     0x00000001

#define __TRISA__TRISA8__POSITION                   0x00000008
#define __TRISA__TRISA8__MASK                       0x00000100
#define __TRISA__TRISA8__LENGTH                     0x00000001

#define __TRISA__TRISA9__POSITION                   0x00000009
#define __TRISA__TRISA9__MASK                       0x00000200
#define __TRISA__TRISA9__LENGTH                     0x00000001

#define __TRISA__TRISA10__POSITION                  0x0000000A
#define __TRISA__TRISA10__MASK                      0x00000400
#define __TRISA__TRISA10__LENGTH                    0x00000001

#define __PORTA__RA0__POSITION                      0x00000000
#define __PORTA__RA0__MASK                          0x00000001
#define __PORTA__RA0__LENGTH                        0x00000001

#define __PORTA__RA1__POSITION                      0x00000001
#define __PORTA__RA1__MASK                          0x00000002
#define __PORTA__RA1__LENGTH                        0x00000001

#define __PORTA__RA2__POSITION                      0x00000002
#define __PORTA__RA2__MASK                          0x00000004
#define __PORTA__RA2__LENGTH                        0x00000001

#define __PORTA__RA3__POSITION                      0x00000003
#define __PORTA__RA3__MASK                          0x00000008
#define __PORTA__RA3__LENGTH                        0x00000001

#define __PORTA__RA4__POSITION                      0x00000004
#define __PORTA__RA4__MASK                          0x00000010
#define __PORTA__RA4__LENGTH                        0x00000001

#define __PORTA__RA7__POSITION                      0x00000007
#define __PORTA__RA7__MASK                          0x00000080
#define __PORTA__RA7__LENGTH                        0x00000001

#define __PORTA__RA8__POSITION                      0x00000008
#define __PORTA__RA8__MASK                          0x00000100
#define __PORTA__RA8__LENGTH                        0x00000001

#define __PORTA__RA9__POSITION                      0x00000009
#define __PORTA__RA9__MASK                          0x00000200
#define __PORTA__RA9__LENGTH                        0x00000001

#define __PORTA__RA10__POSITION                     0x0000000A
#define __PORTA__RA10__MASK                         0x00000400
#define __PORTA__RA10__LENGTH                       0x00000001

#define __LATA__LATA0__POSITION                     0x00000000
#define __LATA__LATA0__MASK                         0x00000001
#define __LATA__LATA0__LENGTH                       0x00000001

#define __LATA__LATA1__POSITION                     0x00000001
#define __LATA__LATA1__MASK                         0x00000002
#define __LATA__LATA1__LENGTH                       0x00000001

#define __LATA__LATA2__POSITION                     0x00000002
#define __LATA__LATA2__MASK                         0x00000004
#define __LATA__LATA2__LENGTH                       0x00000001

#define __LATA__LATA3__POSITION                     0x00000003
#define __LATA__LATA3__MASK                         0x00000008
#define __LATA__LATA3__LENGTH                       0x00000001

#define __LATA__LATA4__POSITION                     0x00000004
#define __LATA__LATA4__MASK                         0x00000010
#define __LATA__LATA4__LENGTH                       0x00000001

#define __LATA__LATA7__POSITION                     0x00000007
#define __LATA__LATA7__MASK                         0x00000080
#define __LATA__LATA7__LENGTH                       0x00000001

#define __LATA__LATA8__POSITION                     0x00000008
#define __LATA__LATA8__MASK                         0x00000100
#define __LATA__LATA8__LENGTH                       0x00000001

#define __LATA__LATA9__POSITION                     0x00000009
#define __LATA__LATA9__MASK                         0x00000200
#define __LATA__LATA9__LENGTH                       0x00000001

#define __LATA__LATA10__POSITION                    0x0000000A
#define __LATA__LATA10__MASK                        0x00000400
#define __LATA__LATA10__LENGTH                      0x00000001

#define __ODCA__ODCA0__POSITION                     0x00000000
#define __ODCA__ODCA0__MASK                         0x00000001
#define __ODCA__ODCA0__LENGTH                       0x00000001

#define __ODCA__ODCA1__POSITION                     0x00000001
#define __ODCA__ODCA1__MASK                         0x00000002
#define __ODCA__ODCA1__LENGTH                       0x00000001

#define __ODCA__ODCA2__POSITION                     0x00000002
#define __ODCA__ODCA2__MASK                         0x00000004
#define __ODCA__ODCA2__LENGTH                       0x00000001

#define __ODCA__ODCA3__POSITION                     0x00000003
#define __ODCA__ODCA3__MASK                         0x00000008
#define __ODCA__ODCA3__LENGTH                       0x00000001

#define __ODCA__ODCA4__POSITION                     0x00000004
#define __ODCA__ODCA4__MASK                         0x00000010
#define __ODCA__ODCA4__LENGTH                       0x00000001

#define __ODCA__ODCA7__POSITION                     0x00000007
#define __ODCA__ODCA7__MASK                         0x00000080
#define __ODCA__ODCA7__LENGTH                       0x00000001

#define __ODCA__ODCA8__POSITION                     0x00000008
#define __ODCA__ODCA8__MASK                         0x00000100
#define __ODCA__ODCA8__LENGTH                       0x00000001

#define __ODCA__ODCA9__POSITION                     0x00000009
#define __ODCA__ODCA9__MASK                         0x00000200
#define __ODCA__ODCA9__LENGTH                       0x00000001

#define __ODCA__ODCA10__POSITION                    0x0000000A
#define __ODCA__ODCA10__MASK                        0x00000400
#define __ODCA__ODCA10__LENGTH                      0x00000001

#define __TRISB__TRISB0__POSITION                   0x00000000
#define __TRISB__TRISB0__MASK                       0x00000001
#define __TRISB__TRISB0__LENGTH                     0x00000001

#define __TRISB__TRISB1__POSITION                   0x00000001
#define __TRISB__TRISB1__MASK                       0x00000002
#define __TRISB__TRISB1__LENGTH                     0x00000001

#define __TRISB__TRISB2__POSITION                   0x00000002
#define __TRISB__TRISB2__MASK                       0x00000004
#define __TRISB__TRISB2__LENGTH                     0x00000001

#define __TRISB__TRISB3__POSITION                   0x00000003
#define __TRISB__TRISB3__MASK                       0x00000008
#define __TRISB__TRISB3__LENGTH                     0x00000001

#define __TRISB__TRISB4__POSITION                   0x00000004
#define __TRISB__TRISB4__MASK                       0x00000010
#define __TRISB__TRISB4__LENGTH                     0x00000001

#define __TRISB__TRISB5__POSITION                   0x00000005
#define __TRISB__TRISB5__MASK                       0x00000020
#define __TRISB__TRISB5__LENGTH                     0x00000001

#define __TRISB__TRISB6__POSITION                   0x00000006
#define __TRISB__TRISB6__MASK                       0x00000040
#define __TRISB__TRISB6__LENGTH                     0x00000001

#define __TRISB__TRISB7__POSITION                   0x00000007
#define __TRISB__TRISB7__MASK                       0x00000080
#define __TRISB__TRISB7__LENGTH                     0x00000001

#define __TRISB__TRISB8__POSITION                   0x00000008
#define __TRISB__TRISB8__MASK                       0x00000100
#define __TRISB__TRISB8__LENGTH                     0x00000001

#define __TRISB__TRISB9__POSITION                   0x00000009
#define __TRISB__TRISB9__MASK                       0x00000200
#define __TRISB__TRISB9__LENGTH                     0x00000001

#define __TRISB__TRISB10__POSITION                  0x0000000A
#define __TRISB__TRISB10__MASK                      0x00000400
#define __TRISB__TRISB10__LENGTH                    0x00000001

#define __TRISB__TRISB11__POSITION                  0x0000000B
#define __TRISB__TRISB11__MASK                      0x00000800
#define __TRISB__TRISB11__LENGTH                    0x00000001

#define __TRISB__TRISB12__POSITION                  0x0000000C
#define __TRISB__TRISB12__MASK                      0x00001000
#define __TRISB__TRISB12__LENGTH                    0x00000001

#define __TRISB__TRISB13__POSITION                  0x0000000D
#define __TRISB__TRISB13__MASK                      0x00002000
#define __TRISB__TRISB13__LENGTH                    0x00000001

#define __TRISB__TRISB14__POSITION                  0x0000000E
#define __TRISB__TRISB14__MASK                      0x00004000
#define __TRISB__TRISB14__LENGTH                    0x00000001

#define __TRISB__TRISB15__POSITION                  0x0000000F
#define __TRISB__TRISB15__MASK                      0x00008000
#define __TRISB__TRISB15__LENGTH                    0x00000001

#define __PORTB__RB0__POSITION                      0x00000000
#define __PORTB__RB0__MASK                          0x00000001
#define __PORTB__RB0__LENGTH                        0x00000001

#define __PORTB__RB1__POSITION                      0x00000001
#define __PORTB__RB1__MASK                          0x00000002
#define __PORTB__RB1__LENGTH                        0x00000001

#define __PORTB__RB2__POSITION                      0x00000002
#define __PORTB__RB2__MASK                          0x00000004
#define __PORTB__RB2__LENGTH                        0x00000001

#define __PORTB__RB3__POSITION                      0x00000003
#define __PORTB__RB3__MASK                          0x00000008
#define __PORTB__RB3__LENGTH                        0x00000001

#define __PORTB__RB4__POSITION                      0x00000004
#define __PORTB__RB4__MASK                          0x00000010
#define __PORTB__RB4__LENGTH                        0x00000001

#define __PORTB__RB5__POSITION                      0x00000005
#define __PORTB__RB5__MASK                          0x00000020
#define __PORTB__RB5__LENGTH                        0x00000001

#define __PORTB__RB6__POSITION                      0x00000006
#define __PORTB__RB6__MASK                          0x00000040
#define __PORTB__RB6__LENGTH                        0x00000001

#define __PORTB__RB7__POSITION                      0x00000007
#define __PORTB__RB7__MASK                          0x00000080
#define __PORTB__RB7__LENGTH                        0x00000001

#define __PORTB__RB8__POSITION                      0x00000008
#define __PORTB__RB8__MASK                          0x00000100
#define __PORTB__RB8__LENGTH                        0x00000001

#define __PORTB__RB9__POSITION                      0x00000009
#define __PORTB__RB9__MASK                          0x00000200
#define __PORTB__RB9__LENGTH                        0x00000001

#define __PORTB__RB10__POSITION                     0x0000000A
#define __PORTB__RB10__MASK                         0x00000400
#define __PORTB__RB10__LENGTH                       0x00000001

#define __PORTB__RB11__POSITION                     0x0000000B
#define __PORTB__RB11__MASK                         0x00000800
#define __PORTB__RB11__LENGTH                       0x00000001

#define __PORTB__RB12__POSITION                     0x0000000C
#define __PORTB__RB12__MASK                         0x00001000
#define __PORTB__RB12__LENGTH                       0x00000001

#define __PORTB__RB13__POSITION                     0x0000000D
#define __PORTB__RB13__MASK                         0x00002000
#define __PORTB__RB13__LENGTH                       0x00000001

#define __PORTB__RB14__POSITION                     0x0000000E
#define __PORTB__RB14__MASK                         0x00004000
#define __PORTB__RB14__LENGTH                       0x00000001

#define __PORTB__RB15__POSITION                     0x0000000F
#define __PORTB__RB15__MASK                         0x00008000
#define __PORTB__RB15__LENGTH                       0x00000001

#define __LATB__LATB0__POSITION                     0x00000000
#define __LATB__LATB0__MASK                         0x00000001
#define __LATB__LATB0__LENGTH                       0x00000001

#define __LATB__LATB1__POSITION                     0x00000001
#define __LATB__LATB1__MASK                         0x00000002
#define __LATB__LATB1__LENGTH                       0x00000001

#define __LATB__LATB2__POSITION                     0x00000002
#define __LATB__LATB2__MASK                         0x00000004
#define __LATB__LATB2__LENGTH                       0x00000001

#define __LATB__LATB3__POSITION                     0x00000003
#define __LATB__LATB3__MASK                         0x00000008
#define __LATB__LATB3__LENGTH                       0x00000001

#define __LATB__LATB4__POSITION                     0x00000004
#define __LATB__LATB4__MASK                         0x00000010
#define __LATB__LATB4__LENGTH                       0x00000001

#define __LATB__LATB5__POSITION                     0x00000005
#define __LATB__LATB5__MASK                         0x00000020
#define __LATB__LATB5__LENGTH                       0x00000001

#define __LATB__LATB6__POSITION                     0x00000006
#define __LATB__LATB6__MASK                         0x00000040
#define __LATB__LATB6__LENGTH                       0x00000001

#define __LATB__LATB7__POSITION                     0x00000007
#define __LATB__LATB7__MASK                         0x00000080
#define __LATB__LATB7__LENGTH                       0x00000001

#define __LATB__LATB8__POSITION                     0x00000008
#define __LATB__LATB8__MASK                         0x00000100
#define __LATB__LATB8__LENGTH                       0x00000001

#define __LATB__LATB9__POSITION                     0x00000009
#define __LATB__LATB9__MASK                         0x00000200
#define __LATB__LATB9__LENGTH                       0x00000001

#define __LATB__LATB10__POSITION                    0x0000000A
#define __LATB__LATB10__MASK                        0x00000400
#define __LATB__LATB10__LENGTH                      0x00000001

#define __LATB__LATB11__POSITION                    0x0000000B
#define __LATB__LATB11__MASK                        0x00000800
#define __LATB__LATB11__LENGTH                      0x00000001

#define __LATB__LATB12__POSITION                    0x0000000C
#define __LATB__LATB12__MASK                        0x00001000
#define __LATB__LATB12__LENGTH                      0x00000001

#define __LATB__LATB13__POSITION                    0x0000000D
#define __LATB__LATB13__MASK                        0x00002000
#define __LATB__LATB13__LENGTH                      0x00000001

#define __LATB__LATB14__POSITION                    0x0000000E
#define __LATB__LATB14__MASK                        0x00004000
#define __LATB__LATB14__LENGTH                      0x00000001

#define __LATB__LATB15__POSITION                    0x0000000F
#define __LATB__LATB15__MASK                        0x00008000
#define __LATB__LATB15__LENGTH                      0x00000001

#define __ODCB__ODCB0__POSITION                     0x00000000
#define __ODCB__ODCB0__MASK                         0x00000001
#define __ODCB__ODCB0__LENGTH                       0x00000001

#define __ODCB__ODCB1__POSITION                     0x00000001
#define __ODCB__ODCB1__MASK                         0x00000002
#define __ODCB__ODCB1__LENGTH                       0x00000001

#define __ODCB__ODCB2__POSITION                     0x00000002
#define __ODCB__ODCB2__MASK                         0x00000004
#define __ODCB__ODCB2__LENGTH                       0x00000001

#define __ODCB__ODCB3__POSITION                     0x00000003
#define __ODCB__ODCB3__MASK                         0x00000008
#define __ODCB__ODCB3__LENGTH                       0x00000001

#define __ODCB__ODCB4__POSITION                     0x00000004
#define __ODCB__ODCB4__MASK                         0x00000010
#define __ODCB__ODCB4__LENGTH                       0x00000001

#define __ODCB__ODCB5__POSITION                     0x00000005
#define __ODCB__ODCB5__MASK                         0x00000020
#define __ODCB__ODCB5__LENGTH                       0x00000001

#define __ODCB__ODCB6__POSITION                     0x00000006
#define __ODCB__ODCB6__MASK                         0x00000040
#define __ODCB__ODCB6__LENGTH                       0x00000001

#define __ODCB__ODCB7__POSITION                     0x00000007
#define __ODCB__ODCB7__MASK                         0x00000080
#define __ODCB__ODCB7__LENGTH                       0x00000001

#define __ODCB__ODCB8__POSITION                     0x00000008
#define __ODCB__ODCB8__MASK                         0x00000100
#define __ODCB__ODCB8__LENGTH                       0x00000001

#define __ODCB__ODCB9__POSITION                     0x00000009
#define __ODCB__ODCB9__MASK                         0x00000200
#define __ODCB__ODCB9__LENGTH                       0x00000001

#define __ODCB__ODCB10__POSITION                    0x0000000A
#define __ODCB__ODCB10__MASK                        0x00000400
#define __ODCB__ODCB10__LENGTH                      0x00000001

#define __ODCB__ODCB11__POSITION                    0x0000000B
#define __ODCB__ODCB11__MASK                        0x00000800
#define __ODCB__ODCB11__LENGTH                      0x00000001

#define __ODCB__ODCB12__POSITION                    0x0000000C
#define __ODCB__ODCB12__MASK                        0x00001000
#define __ODCB__ODCB12__LENGTH                      0x00000001

#define __ODCB__ODCB13__POSITION                    0x0000000D
#define __ODCB__ODCB13__MASK                        0x00002000
#define __ODCB__ODCB13__LENGTH                      0x00000001

#define __ODCB__ODCB14__POSITION                    0x0000000E
#define __ODCB__ODCB14__MASK                        0x00004000
#define __ODCB__ODCB14__LENGTH                      0x00000001

#define __ODCB__ODCB15__POSITION                    0x0000000F
#define __ODCB__ODCB15__MASK                        0x00008000
#define __ODCB__ODCB15__LENGTH                      0x00000001

#define __TRISC__TRISC0__POSITION                   0x00000000
#define __TRISC__TRISC0__MASK                       0x00000001
#define __TRISC__TRISC0__LENGTH                     0x00000001

#define __TRISC__TRISC1__POSITION                   0x00000001
#define __TRISC__TRISC1__MASK                       0x00000002
#define __TRISC__TRISC1__LENGTH                     0x00000001

#define __TRISC__TRISC2__POSITION                   0x00000002
#define __TRISC__TRISC2__MASK                       0x00000004
#define __TRISC__TRISC2__LENGTH                     0x00000001

#define __TRISC__TRISC3__POSITION                   0x00000003
#define __TRISC__TRISC3__MASK                       0x00000008
#define __TRISC__TRISC3__LENGTH                     0x00000001

#define __TRISC__TRISC4__POSITION                   0x00000004
#define __TRISC__TRISC4__MASK                       0x00000010
#define __TRISC__TRISC4__LENGTH                     0x00000001

#define __TRISC__TRISC5__POSITION                   0x00000005
#define __TRISC__TRISC5__MASK                       0x00000020
#define __TRISC__TRISC5__LENGTH                     0x00000001

#define __TRISC__TRISC6__POSITION                   0x00000006
#define __TRISC__TRISC6__MASK                       0x00000040
#define __TRISC__TRISC6__LENGTH                     0x00000001

#define __TRISC__TRISC7__POSITION                   0x00000007
#define __TRISC__TRISC7__MASK                       0x00000080
#define __TRISC__TRISC7__LENGTH                     0x00000001

#define __TRISC__TRISC8__POSITION                   0x00000008
#define __TRISC__TRISC8__MASK                       0x00000100
#define __TRISC__TRISC8__LENGTH                     0x00000001

#define __TRISC__TRISC9__POSITION                   0x00000009
#define __TRISC__TRISC9__MASK                       0x00000200
#define __TRISC__TRISC9__LENGTH                     0x00000001

#define __PORTC__RC0__POSITION                      0x00000000
#define __PORTC__RC0__MASK                          0x00000001
#define __PORTC__RC0__LENGTH                        0x00000001

#define __PORTC__RC1__POSITION                      0x00000001
#define __PORTC__RC1__MASK                          0x00000002
#define __PORTC__RC1__LENGTH                        0x00000001

#define __PORTC__RC2__POSITION                      0x00000002
#define __PORTC__RC2__MASK                          0x00000004
#define __PORTC__RC2__LENGTH                        0x00000001

#define __PORTC__RC3__POSITION                      0x00000003
#define __PORTC__RC3__MASK                          0x00000008
#define __PORTC__RC3__LENGTH                        0x00000001

#define __PORTC__RC4__POSITION                      0x00000004
#define __PORTC__RC4__MASK                          0x00000010
#define __PORTC__RC4__LENGTH                        0x00000001

#define __PORTC__RC5__POSITION                      0x00000005
#define __PORTC__RC5__MASK                          0x00000020
#define __PORTC__RC5__LENGTH                        0x00000001

#define __PORTC__RC6__POSITION                      0x00000006
#define __PORTC__RC6__MASK                          0x00000040
#define __PORTC__RC6__LENGTH                        0x00000001

#define __PORTC__RC7__POSITION                      0x00000007
#define __PORTC__RC7__MASK                          0x00000080
#define __PORTC__RC7__LENGTH                        0x00000001

#define __PORTC__RC8__POSITION                      0x00000008
#define __PORTC__RC8__MASK                          0x00000100
#define __PORTC__RC8__LENGTH                        0x00000001

#define __PORTC__RC9__POSITION                      0x00000009
#define __PORTC__RC9__MASK                          0x00000200
#define __PORTC__RC9__LENGTH                        0x00000001

#define __LATC__LATC0__POSITION                     0x00000000
#define __LATC__LATC0__MASK                         0x00000001
#define __LATC__LATC0__LENGTH                       0x00000001

#define __LATC__LATC1__POSITION                     0x00000001
#define __LATC__LATC1__MASK                         0x00000002
#define __LATC__LATC1__LENGTH                       0x00000001

#define __LATC__LATC2__POSITION                     0x00000002
#define __LATC__LATC2__MASK                         0x00000004
#define __LATC__LATC2__LENGTH                       0x00000001

#define __LATC__LATC3__POSITION                     0x00000003
#define __LATC__LATC3__MASK                         0x00000008
#define __LATC__LATC3__LENGTH                       0x00000001

#define __LATC__LATC4__POSITION                     0x00000004
#define __LATC__LATC4__MASK                         0x00000010
#define __LATC__LATC4__LENGTH                       0x00000001

#define __LATC__LATC5__POSITION                     0x00000005
#define __LATC__LATC5__MASK                         0x00000020
#define __LATC__LATC5__LENGTH                       0x00000001

#define __LATC__LATC6__POSITION                     0x00000006
#define __LATC__LATC6__MASK                         0x00000040
#define __LATC__LATC6__LENGTH                       0x00000001

#define __LATC__LATC7__POSITION                     0x00000007
#define __LATC__LATC7__MASK                         0x00000080
#define __LATC__LATC7__LENGTH                       0x00000001

#define __LATC__LATC8__POSITION                     0x00000008
#define __LATC__LATC8__MASK                         0x00000100
#define __LATC__LATC8__LENGTH                       0x00000001

#define __LATC__LATC9__POSITION                     0x00000009
#define __LATC__LATC9__MASK                         0x00000200
#define __LATC__LATC9__LENGTH                       0x00000001

#define __ODCC__ODCC0__POSITION                     0x00000000
#define __ODCC__ODCC0__MASK                         0x00000001
#define __ODCC__ODCC0__LENGTH                       0x00000001

#define __ODCC__ODCC1__POSITION                     0x00000001
#define __ODCC__ODCC1__MASK                         0x00000002
#define __ODCC__ODCC1__LENGTH                       0x00000001

#define __ODCC__ODCC2__POSITION                     0x00000002
#define __ODCC__ODCC2__MASK                         0x00000004
#define __ODCC__ODCC2__LENGTH                       0x00000001

#define __ODCC__ODCC3__POSITION                     0x00000003
#define __ODCC__ODCC3__MASK                         0x00000008
#define __ODCC__ODCC3__LENGTH                       0x00000001

#define __ODCC__ODCC4__POSITION                     0x00000004
#define __ODCC__ODCC4__MASK                         0x00000010
#define __ODCC__ODCC4__LENGTH                       0x00000001

#define __ODCC__ODCC5__POSITION                     0x00000005
#define __ODCC__ODCC5__MASK                         0x00000020
#define __ODCC__ODCC5__LENGTH                       0x00000001

#define __ODCC__ODCC6__POSITION                     0x00000006
#define __ODCC__ODCC6__MASK                         0x00000040
#define __ODCC__ODCC6__LENGTH                       0x00000001

#define __ODCC__ODCC7__POSITION                     0x00000007
#define __ODCC__ODCC7__MASK                         0x00000080
#define __ODCC__ODCC7__LENGTH                       0x00000001

#define __ODCC__ODCC8__POSITION                     0x00000008
#define __ODCC__ODCC8__MASK                         0x00000100
#define __ODCC__ODCC8__LENGTH                       0x00000001

#define __ODCC__ODCC9__POSITION                     0x00000009
#define __ODCC__ODCC9__MASK                         0x00000200
#define __ODCC__ODCC9__LENGTH                       0x00000001

#define __PADCFG1__PMPTTL__POSITION                 0x00000000
#define __PADCFG1__PMPTTL__MASK                     0x00000001
#define __PADCFG1__PMPTTL__LENGTH                   0x00000001

#define __PADCFG1__RTSECSEL__POSITION               0x00000001
#define __PADCFG1__RTSECSEL__MASK                   0x00000002
#define __PADCFG1__RTSECSEL__LENGTH                 0x00000001

#define __AD1CON1__DONE__POSITION                   0x00000000
#define __AD1CON1__DONE__MASK                       0x00000001
#define __AD1CON1__DONE__LENGTH                     0x00000001

#define __AD1CON1__SAMP__POSITION                   0x00000001
#define __AD1CON1__SAMP__MASK                       0x00000002
#define __AD1CON1__SAMP__LENGTH                     0x00000001

#define __AD1CON1__ASAM__POSITION                   0x00000002
#define __AD1CON1__ASAM__MASK                       0x00000004
#define __AD1CON1__ASAM__LENGTH                     0x00000001

#define __AD1CON1__SIMSAM__POSITION                 0x00000003
#define __AD1CON1__SIMSAM__MASK                     0x00000008
#define __AD1CON1__SIMSAM__LENGTH                   0x00000001

#define __AD1CON1__SSRC__POSITION                   0x00000005
#define __AD1CON1__SSRC__MASK                       0x000000E0
#define __AD1CON1__SSRC__LENGTH                     0x00000003

#define __AD1CON1__FORM__POSITION                   0x00000008
#define __AD1CON1__FORM__MASK                       0x00000300
#define __AD1CON1__FORM__LENGTH                     0x00000002

#define __AD1CON1__AD12B__POSITION                  0x0000000A
#define __AD1CON1__AD12B__MASK                      0x00000400
#define __AD1CON1__AD12B__LENGTH                    0x00000001

#define __AD1CON1__ADDMABM__POSITION                0x0000000C
#define __AD1CON1__ADDMABM__MASK                    0x00001000
#define __AD1CON1__ADDMABM__LENGTH                  0x00000001

#define __AD1CON1__ADSIDL__POSITION                 0x0000000D
#define __AD1CON1__ADSIDL__MASK                     0x00002000
#define __AD1CON1__ADSIDL__LENGTH                   0x00000001

#define __AD1CON1__ADON__POSITION                   0x0000000F
#define __AD1CON1__ADON__MASK                       0x00008000
#define __AD1CON1__ADON__LENGTH                     0x00000001

#define __AD1CON1__SSRC0__POSITION                  0x00000005
#define __AD1CON1__SSRC0__MASK                      0x00000020
#define __AD1CON1__SSRC0__LENGTH                    0x00000001

#define __AD1CON1__SSRC1__POSITION                  0x00000006
#define __AD1CON1__SSRC1__MASK                      0x00000040
#define __AD1CON1__SSRC1__LENGTH                    0x00000001

#define __AD1CON1__SSRC2__POSITION                  0x00000007
#define __AD1CON1__SSRC2__MASK                      0x00000080
#define __AD1CON1__SSRC2__LENGTH                    0x00000001

#define __AD1CON1__FORM0__POSITION                  0x00000008
#define __AD1CON1__FORM0__MASK                      0x00000100
#define __AD1CON1__FORM0__LENGTH                    0x00000001

#define __AD1CON1__FORM1__POSITION                  0x00000009
#define __AD1CON1__FORM1__MASK                      0x00000200
#define __AD1CON1__FORM1__LENGTH                    0x00000001

#define __AD1CON2__ALTS__POSITION                   0x00000000
#define __AD1CON2__ALTS__MASK                       0x00000001
#define __AD1CON2__ALTS__LENGTH                     0x00000001

#define __AD1CON2__BUFM__POSITION                   0x00000001
#define __AD1CON2__BUFM__MASK                       0x00000002
#define __AD1CON2__BUFM__LENGTH                     0x00000001

#define __AD1CON2__SMPI__POSITION                   0x00000002
#define __AD1CON2__SMPI__MASK                       0x0000003C
#define __AD1CON2__SMPI__LENGTH                     0x00000004

#define __AD1CON2__BUFS__POSITION                   0x00000007
#define __AD1CON2__BUFS__MASK                       0x00000080
#define __AD1CON2__BUFS__LENGTH                     0x00000001

#define __AD1CON2__CHPS__POSITION                   0x00000008
#define __AD1CON2__CHPS__MASK                       0x00000300
#define __AD1CON2__CHPS__LENGTH                     0x00000002

#define __AD1CON2__CSCNA__POSITION                  0x0000000A
#define __AD1CON2__CSCNA__MASK                      0x00000400
#define __AD1CON2__CSCNA__LENGTH                    0x00000001

#define __AD1CON2__VCFG__POSITION                   0x0000000D
#define __AD1CON2__VCFG__MASK                       0x0000E000
#define __AD1CON2__VCFG__LENGTH                     0x00000003

#define __AD1CON2__SMPI0__POSITION                  0x00000002
#define __AD1CON2__SMPI0__MASK                      0x00000004
#define __AD1CON2__SMPI0__LENGTH                    0x00000001

#define __AD1CON2__SMPI1__POSITION                  0x00000003
#define __AD1CON2__SMPI1__MASK                      0x00000008
#define __AD1CON2__SMPI1__LENGTH                    0x00000001

#define __AD1CON2__SMPI2__POSITION                  0x00000004
#define __AD1CON2__SMPI2__MASK                      0x00000010
#define __AD1CON2__SMPI2__LENGTH                    0x00000001

#define __AD1CON2__SMPI3__POSITION                  0x00000005
#define __AD1CON2__SMPI3__MASK                      0x00000020
#define __AD1CON2__SMPI3__LENGTH                    0x00000001

#define __AD1CON2__CHPS0__POSITION                  0x00000008
#define __AD1CON2__CHPS0__MASK                      0x00000100
#define __AD1CON2__CHPS0__LENGTH                    0x00000001

#define __AD1CON2__CHPS1__POSITION                  0x00000009
#define __AD1CON2__CHPS1__MASK                      0x00000200
#define __AD1CON2__CHPS1__LENGTH                    0x00000001

#define __AD1CON2__VCFG0__POSITION                  0x0000000D
#define __AD1CON2__VCFG0__MASK                      0x00002000
#define __AD1CON2__VCFG0__LENGTH                    0x00000001

#define __AD1CON2__VCFG1__POSITION                  0x0000000E
#define __AD1CON2__VCFG1__MASK                      0x00004000
#define __AD1CON2__VCFG1__LENGTH                    0x00000001

#define __AD1CON2__VCFG2__POSITION                  0x0000000F
#define __AD1CON2__VCFG2__MASK                      0x00008000
#define __AD1CON2__VCFG2__LENGTH                    0x00000001

#define __AD1CON3__ADCS__POSITION                   0x00000000
#define __AD1CON3__ADCS__MASK                       0x000000FF
#define __AD1CON3__ADCS__LENGTH                     0x00000008

#define __AD1CON3__SAMC__POSITION                   0x00000008
#define __AD1CON3__SAMC__MASK                       0x00001F00
#define __AD1CON3__SAMC__LENGTH                     0x00000005

#define __AD1CON3__ADRC__POSITION                   0x0000000F
#define __AD1CON3__ADRC__MASK                       0x00008000
#define __AD1CON3__ADRC__LENGTH                     0x00000001

#define __AD1CON3__ADCS0__POSITION                  0x00000000
#define __AD1CON3__ADCS0__MASK                      0x00000001
#define __AD1CON3__ADCS0__LENGTH                    0x00000001

#define __AD1CON3__ADCS1__POSITION                  0x00000001
#define __AD1CON3__ADCS1__MASK                      0x00000002
#define __AD1CON3__ADCS1__LENGTH                    0x00000001

#define __AD1CON3__ADCS2__POSITION                  0x00000002
#define __AD1CON3__ADCS2__MASK                      0x00000004
#define __AD1CON3__ADCS2__LENGTH                    0x00000001

#define __AD1CON3__ADCS3__POSITION                  0x00000003
#define __AD1CON3__ADCS3__MASK                      0x00000008
#define __AD1CON3__ADCS3__LENGTH                    0x00000001

#define __AD1CON3__ADCS4__POSITION                  0x00000004
#define __AD1CON3__ADCS4__MASK                      0x00000010
#define __AD1CON3__ADCS4__LENGTH                    0x00000001

#define __AD1CON3__ADCS5__POSITION                  0x00000005
#define __AD1CON3__ADCS5__MASK                      0x00000020
#define __AD1CON3__ADCS5__LENGTH                    0x00000001

#define __AD1CON3__ADCS6__POSITION                  0x00000006
#define __AD1CON3__ADCS6__MASK                      0x00000040
#define __AD1CON3__ADCS6__LENGTH                    0x00000001

#define __AD1CON3__ADCS7__POSITION                  0x00000007
#define __AD1CON3__ADCS7__MASK                      0x00000080
#define __AD1CON3__ADCS7__LENGTH                    0x00000001

#define __AD1CON3__SAMC0__POSITION                  0x00000008
#define __AD1CON3__SAMC0__MASK                      0x00000100
#define __AD1CON3__SAMC0__LENGTH                    0x00000001

#define __AD1CON3__SAMC1__POSITION                  0x00000009
#define __AD1CON3__SAMC1__MASK                      0x00000200
#define __AD1CON3__SAMC1__LENGTH                    0x00000001

#define __AD1CON3__SAMC2__POSITION                  0x0000000A
#define __AD1CON3__SAMC2__MASK                      0x00000400
#define __AD1CON3__SAMC2__LENGTH                    0x00000001

#define __AD1CON3__SAMC3__POSITION                  0x0000000B
#define __AD1CON3__SAMC3__MASK                      0x00000800
#define __AD1CON3__SAMC3__LENGTH                    0x00000001

#define __AD1CON3__SAMC4__POSITION                  0x0000000C
#define __AD1CON3__SAMC4__MASK                      0x00001000
#define __AD1CON3__SAMC4__LENGTH                    0x00000001

#define __AD1CHS123__CH123SA__POSITION              0x00000000
#define __AD1CHS123__CH123SA__MASK                  0x00000001
#define __AD1CHS123__CH123SA__LENGTH                0x00000001

#define __AD1CHS123__CH123NA__POSITION              0x00000001
#define __AD1CHS123__CH123NA__MASK                  0x00000006
#define __AD1CHS123__CH123NA__LENGTH                0x00000002

#define __AD1CHS123__CH123SB__POSITION              0x00000008
#define __AD1CHS123__CH123SB__MASK                  0x00000100
#define __AD1CHS123__CH123SB__LENGTH                0x00000001

#define __AD1CHS123__CH123NB__POSITION              0x00000009
#define __AD1CHS123__CH123NB__MASK                  0x00000600
#define __AD1CHS123__CH123NB__LENGTH                0x00000002

#define __AD1CHS123__CH123NA0__POSITION             0x00000001
#define __AD1CHS123__CH123NA0__MASK                 0x00000002
#define __AD1CHS123__CH123NA0__LENGTH               0x00000001

#define __AD1CHS123__CH123NA1__POSITION             0x00000002
#define __AD1CHS123__CH123NA1__MASK                 0x00000004
#define __AD1CHS123__CH123NA1__LENGTH               0x00000001

#define __AD1CHS123__CH123NB0__POSITION             0x00000009
#define __AD1CHS123__CH123NB0__MASK                 0x00000200
#define __AD1CHS123__CH123NB0__LENGTH               0x00000001

#define __AD1CHS123__CH123NB1__POSITION             0x0000000A
#define __AD1CHS123__CH123NB1__MASK                 0x00000400
#define __AD1CHS123__CH123NB1__LENGTH               0x00000001

#define __AD1CHS0__CH0SA__POSITION                  0x00000000
#define __AD1CHS0__CH0SA__MASK                      0x0000001F
#define __AD1CHS0__CH0SA__LENGTH                    0x00000005

#define __AD1CHS0__CH0NA__POSITION                  0x00000007
#define __AD1CHS0__CH0NA__MASK                      0x00000080
#define __AD1CHS0__CH0NA__LENGTH                    0x00000001

#define __AD1CHS0__CH0SB__POSITION                  0x00000008
#define __AD1CHS0__CH0SB__MASK                      0x00001F00
#define __AD1CHS0__CH0SB__LENGTH                    0x00000005

#define __AD1CHS0__CH0NB__POSITION                  0x0000000F
#define __AD1CHS0__CH0NB__MASK                      0x00008000
#define __AD1CHS0__CH0NB__LENGTH                    0x00000001

#define __AD1CHS0__CH0SA0__POSITION                 0x00000000
#define __AD1CHS0__CH0SA0__MASK                     0x00000001
#define __AD1CHS0__CH0SA0__LENGTH                   0x00000001

#define __AD1CHS0__CH0SA1__POSITION                 0x00000001
#define __AD1CHS0__CH0SA1__MASK                     0x00000002
#define __AD1CHS0__CH0SA1__LENGTH                   0x00000001

#define __AD1CHS0__CH0SA2__POSITION                 0x00000002
#define __AD1CHS0__CH0SA2__MASK                     0x00000004
#define __AD1CHS0__CH0SA2__LENGTH                   0x00000001

#define __AD1CHS0__CH0SA3__POSITION                 0x00000003
#define __AD1CHS0__CH0SA3__MASK                     0x00000008
#define __AD1CHS0__CH0SA3__LENGTH                   0x00000001

#define __AD1CHS0__CH0SA4__POSITION                 0x00000004
#define __AD1CHS0__CH0SA4__MASK                     0x00000010
#define __AD1CHS0__CH0SA4__LENGTH                   0x00000001

#define __AD1CHS0__CH0SB0__POSITION                 0x00000008
#define __AD1CHS0__CH0SB0__MASK                     0x00000100
#define __AD1CHS0__CH0SB0__LENGTH                   0x00000001

#define __AD1CHS0__CH0SB1__POSITION                 0x00000009
#define __AD1CHS0__CH0SB1__MASK                     0x00000200
#define __AD1CHS0__CH0SB1__LENGTH                   0x00000001

#define __AD1CHS0__CH0SB2__POSITION                 0x0000000A
#define __AD1CHS0__CH0SB2__MASK                     0x00000400
#define __AD1CHS0__CH0SB2__LENGTH                   0x00000001

#define __AD1CHS0__CH0SB3__POSITION                 0x0000000B
#define __AD1CHS0__CH0SB3__MASK                     0x00000800
#define __AD1CHS0__CH0SB3__LENGTH                   0x00000001

#define __AD1CHS0__CH0SB4__POSITION                 0x0000000C
#define __AD1CHS0__CH0SB4__MASK                     0x00001000
#define __AD1CHS0__CH0SB4__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG0__POSITION                 0x00000000
#define __AD1PCFGL__PCFG0__MASK                     0x00000001
#define __AD1PCFGL__PCFG0__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG1__POSITION                 0x00000001
#define __AD1PCFGL__PCFG1__MASK                     0x00000002
#define __AD1PCFGL__PCFG1__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG2__POSITION                 0x00000002
#define __AD1PCFGL__PCFG2__MASK                     0x00000004
#define __AD1PCFGL__PCFG2__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG3__POSITION                 0x00000003
#define __AD1PCFGL__PCFG3__MASK                     0x00000008
#define __AD1PCFGL__PCFG3__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG4__POSITION                 0x00000004
#define __AD1PCFGL__PCFG4__MASK                     0x00000010
#define __AD1PCFGL__PCFG4__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG5__POSITION                 0x00000005
#define __AD1PCFGL__PCFG5__MASK                     0x00000020
#define __AD1PCFGL__PCFG5__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG6__POSITION                 0x00000006
#define __AD1PCFGL__PCFG6__MASK                     0x00000040
#define __AD1PCFGL__PCFG6__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG7__POSITION                 0x00000007
#define __AD1PCFGL__PCFG7__MASK                     0x00000080
#define __AD1PCFGL__PCFG7__LENGTH                   0x00000001

#define __AD1PCFGL__PCFG8__POSITION                 0x00000008
#define __AD1PCFGL__PCFG8__MASK                     0x00000100
#define __AD1PCFGL__PCFG8__LENGTH                   0x00000001

#define __ADPCFG__PCFG0__POSITION                   0x00000000
#define __ADPCFG__PCFG0__MASK                       0x00000001
#define __ADPCFG__PCFG0__LENGTH                     0x00000001

#define __ADPCFG__PCFG1__POSITION                   0x00000001
#define __ADPCFG__PCFG1__MASK                       0x00000002
#define __ADPCFG__PCFG1__LENGTH                     0x00000001

#define __ADPCFG__PCFG2__POSITION                   0x00000002
#define __ADPCFG__PCFG2__MASK                       0x00000004
#define __ADPCFG__PCFG2__LENGTH                     0x00000001

#define __ADPCFG__PCFG3__POSITION                   0x00000003
#define __ADPCFG__PCFG3__MASK                       0x00000008
#define __ADPCFG__PCFG3__LENGTH                     0x00000001

#define __ADPCFG__PCFG4__POSITION                   0x00000004
#define __ADPCFG__PCFG4__MASK                       0x00000010
#define __ADPCFG__PCFG4__LENGTH                     0x00000001

#define __ADPCFG__PCFG5__POSITION                   0x00000005
#define __ADPCFG__PCFG5__MASK                       0x00000020
#define __ADPCFG__PCFG5__LENGTH                     0x00000001

#define __ADPCFG__PCFG6__POSITION                   0x00000006
#define __ADPCFG__PCFG6__MASK                       0x00000040
#define __ADPCFG__PCFG6__LENGTH                     0x00000001

#define __ADPCFG__PCFG7__POSITION                   0x00000007
#define __ADPCFG__PCFG7__MASK                       0x00000080
#define __ADPCFG__PCFG7__LENGTH                     0x00000001

#define __ADPCFG__PCFG8__POSITION                   0x00000008
#define __ADPCFG__PCFG8__MASK                       0x00000100
#define __ADPCFG__PCFG8__LENGTH                     0x00000001

#define __AD1CSSL__CSS0__POSITION                   0x00000000
#define __AD1CSSL__CSS0__MASK                       0x00000001
#define __AD1CSSL__CSS0__LENGTH                     0x00000001

#define __AD1CSSL__CSS1__POSITION                   0x00000001
#define __AD1CSSL__CSS1__MASK                       0x00000002
#define __AD1CSSL__CSS1__LENGTH                     0x00000001

#define __AD1CSSL__CSS2__POSITION                   0x00000002
#define __AD1CSSL__CSS2__MASK                       0x00000004
#define __AD1CSSL__CSS2__LENGTH                     0x00000001

#define __AD1CSSL__CSS3__POSITION                   0x00000003
#define __AD1CSSL__CSS3__MASK                       0x00000008
#define __AD1CSSL__CSS3__LENGTH                     0x00000001

#define __AD1CSSL__CSS4__POSITION                   0x00000004
#define __AD1CSSL__CSS4__MASK                       0x00000010
#define __AD1CSSL__CSS4__LENGTH                     0x00000001

#define __AD1CSSL__CSS5__POSITION                   0x00000005
#define __AD1CSSL__CSS5__MASK                       0x00000020
#define __AD1CSSL__CSS5__LENGTH                     0x00000001

#define __AD1CSSL__CSS6__POSITION                   0x00000006
#define __AD1CSSL__CSS6__MASK                       0x00000040
#define __AD1CSSL__CSS6__LENGTH                     0x00000001

#define __AD1CSSL__CSS7__POSITION                   0x00000007
#define __AD1CSSL__CSS7__MASK                       0x00000080
#define __AD1CSSL__CSS7__LENGTH                     0x00000001

#define __AD1CSSL__CSS8__POSITION                   0x00000008
#define __AD1CSSL__CSS8__MASK                       0x00000100
#define __AD1CSSL__CSS8__LENGTH                     0x00000001

#define __AD1CON4__DMABL__POSITION                  0x00000000
#define __AD1CON4__DMABL__MASK                      0x00000007
#define __AD1CON4__DMABL__LENGTH                    0x00000003

#define __AD1CON4__DMABL0__POSITION                 0x00000000
#define __AD1CON4__DMABL0__MASK                     0x00000001
#define __AD1CON4__DMABL0__LENGTH                   0x00000001

#define __AD1CON4__DMABL1__POSITION                 0x00000001
#define __AD1CON4__DMABL1__MASK                     0x00000002
#define __AD1CON4__DMABL1__LENGTH                   0x00000001

#define __AD1CON4__DMABL2__POSITION                 0x00000002
#define __AD1CON4__DMABL2__MASK                     0x00000004
#define __AD1CON4__DMABL2__LENGTH                   0x00000001

#define __DMA0CON__MODE__POSITION                   0x00000000
#define __DMA0CON__MODE__MASK                       0x00000003
#define __DMA0CON__MODE__LENGTH                     0x00000002

#define __DMA0CON__AMODE__POSITION                  0x00000004
#define __DMA0CON__AMODE__MASK                      0x00000030
#define __DMA0CON__AMODE__LENGTH                    0x00000002

#define __DMA0CON__NULLW__POSITION                  0x0000000B
#define __DMA0CON__NULLW__MASK                      0x00000800
#define __DMA0CON__NULLW__LENGTH                    0x00000001

#define __DMA0CON__HALF__POSITION                   0x0000000C
#define __DMA0CON__HALF__MASK                       0x00001000
#define __DMA0CON__HALF__LENGTH                     0x00000001

#define __DMA0CON__DIR__POSITION                    0x0000000D
#define __DMA0CON__DIR__MASK                        0x00002000
#define __DMA0CON__DIR__LENGTH                      0x00000001

#define __DMA0CON__SIZE__POSITION                   0x0000000E
#define __DMA0CON__SIZE__MASK                       0x00004000
#define __DMA0CON__SIZE__LENGTH                     0x00000001

#define __DMA0CON__CHEN__POSITION                   0x0000000F
#define __DMA0CON__CHEN__MASK                       0x00008000
#define __DMA0CON__CHEN__LENGTH                     0x00000001

#define __DMA0CON__MODE0__POSITION                  0x00000000
#define __DMA0CON__MODE0__MASK                      0x00000001
#define __DMA0CON__MODE0__LENGTH                    0x00000001

#define __DMA0CON__MODE1__POSITION                  0x00000001
#define __DMA0CON__MODE1__MASK                      0x00000002
#define __DMA0CON__MODE1__LENGTH                    0x00000001

#define __DMA0CON__AMODE0__POSITION                 0x00000004
#define __DMA0CON__AMODE0__MASK                     0x00000010
#define __DMA0CON__AMODE0__LENGTH                   0x00000001

#define __DMA0CON__AMODE1__POSITION                 0x00000005
#define __DMA0CON__AMODE1__MASK                     0x00000020
#define __DMA0CON__AMODE1__LENGTH                   0x00000001

#define __DMA0REQ__IRQSEL__POSITION                 0x00000000
#define __DMA0REQ__IRQSEL__MASK                     0x0000007F
#define __DMA0REQ__IRQSEL__LENGTH                   0x00000007

#define __DMA0REQ__FORCE__POSITION                  0x0000000F
#define __DMA0REQ__FORCE__MASK                      0x00008000
#define __DMA0REQ__FORCE__LENGTH                    0x00000001

#define __DMA0REQ__IRQSEL0__POSITION                0x00000000
#define __DMA0REQ__IRQSEL0__MASK                    0x00000001
#define __DMA0REQ__IRQSEL0__LENGTH                  0x00000001

#define __DMA0REQ__IRQSEL1__POSITION                0x00000001
#define __DMA0REQ__IRQSEL1__MASK                    0x00000002
#define __DMA0REQ__IRQSEL1__LENGTH                  0x00000001

#define __DMA0REQ__IRQSEL2__POSITION                0x00000002
#define __DMA0REQ__IRQSEL2__MASK                    0x00000004
#define __DMA0REQ__IRQSEL2__LENGTH                  0x00000001

#define __DMA0REQ__IRQSEL3__POSITION                0x00000003
#define __DMA0REQ__IRQSEL3__MASK                    0x00000008
#define __DMA0REQ__IRQSEL3__LENGTH                  0x00000001

#define __DMA0REQ__IRQSEL4__POSITION                0x00000004
#define __DMA0REQ__IRQSEL4__MASK                    0x00000010
#define __DMA0REQ__IRQSEL4__LENGTH                  0x00000001

#define __DMA0REQ__IRQSEL5__POSITION                0x00000005
#define __DMA0REQ__IRQSEL5__MASK                    0x00000020
#define __DMA0REQ__IRQSEL5__LENGTH                  0x00000001

#define __DMA0REQ__IRQSEL6__POSITION                0x00000006
#define __DMA0REQ__IRQSEL6__MASK                    0x00000040
#define __DMA0REQ__IRQSEL6__LENGTH                  0x00000001

#define __DMA1CON__MODE__POSITION                   0x00000000
#define __DMA1CON__MODE__MASK                       0x00000003
#define __DMA1CON__MODE__LENGTH                     0x00000002

#define __DMA1CON__AMODE__POSITION                  0x00000004
#define __DMA1CON__AMODE__MASK                      0x00000030
#define __DMA1CON__AMODE__LENGTH                    0x00000002

#define __DMA1CON__NULLW__POSITION                  0x0000000B
#define __DMA1CON__NULLW__MASK                      0x00000800
#define __DMA1CON__NULLW__LENGTH                    0x00000001

#define __DMA1CON__HALF__POSITION                   0x0000000C
#define __DMA1CON__HALF__MASK                       0x00001000
#define __DMA1CON__HALF__LENGTH                     0x00000001

#define __DMA1CON__DIR__POSITION                    0x0000000D
#define __DMA1CON__DIR__MASK                        0x00002000
#define __DMA1CON__DIR__LENGTH                      0x00000001

#define __DMA1CON__SIZE__POSITION                   0x0000000E
#define __DMA1CON__SIZE__MASK                       0x00004000
#define __DMA1CON__SIZE__LENGTH                     0x00000001

#define __DMA1CON__CHEN__POSITION                   0x0000000F
#define __DMA1CON__CHEN__MASK                       0x00008000
#define __DMA1CON__CHEN__LENGTH                     0x00000001

#define __DMA1CON__MODE0__POSITION                  0x00000000
#define __DMA1CON__MODE0__MASK                      0x00000001
#define __DMA1CON__MODE0__LENGTH                    0x00000001

#define __DMA1CON__MODE1__POSITION                  0x00000001
#define __DMA1CON__MODE1__MASK                      0x00000002
#define __DMA1CON__MODE1__LENGTH                    0x00000001

#define __DMA1CON__AMODE0__POSITION                 0x00000004
#define __DMA1CON__AMODE0__MASK                     0x00000010
#define __DMA1CON__AMODE0__LENGTH                   0x00000001

#define __DMA1CON__AMODE1__POSITION                 0x00000005
#define __DMA1CON__AMODE1__MASK                     0x00000020
#define __DMA1CON__AMODE1__LENGTH                   0x00000001

#define __DMA1REQ__IRQSEL__POSITION                 0x00000000
#define __DMA1REQ__IRQSEL__MASK                     0x0000007F
#define __DMA1REQ__IRQSEL__LENGTH                   0x00000007

#define __DMA1REQ__FORCE__POSITION                  0x0000000F
#define __DMA1REQ__FORCE__MASK                      0x00008000
#define __DMA1REQ__FORCE__LENGTH                    0x00000001

#define __DMA1REQ__IRQSEL0__POSITION                0x00000000
#define __DMA1REQ__IRQSEL0__MASK                    0x00000001
#define __DMA1REQ__IRQSEL0__LENGTH                  0x00000001

#define __DMA1REQ__IRQSEL1__POSITION                0x00000001
#define __DMA1REQ__IRQSEL1__MASK                    0x00000002
#define __DMA1REQ__IRQSEL1__LENGTH                  0x00000001

#define __DMA1REQ__IRQSEL2__POSITION                0x00000002
#define __DMA1REQ__IRQSEL2__MASK                    0x00000004
#define __DMA1REQ__IRQSEL2__LENGTH                  0x00000001

#define __DMA1REQ__IRQSEL3__POSITION                0x00000003
#define __DMA1REQ__IRQSEL3__MASK                    0x00000008
#define __DMA1REQ__IRQSEL3__LENGTH                  0x00000001

#define __DMA1REQ__IRQSEL4__POSITION                0x00000004
#define __DMA1REQ__IRQSEL4__MASK                    0x00000010
#define __DMA1REQ__IRQSEL4__LENGTH                  0x00000001

#define __DMA1REQ__IRQSEL5__POSITION                0x00000005
#define __DMA1REQ__IRQSEL5__MASK                    0x00000020
#define __DMA1REQ__IRQSEL5__LENGTH                  0x00000001

#define __DMA1REQ__IRQSEL6__POSITION                0x00000006
#define __DMA1REQ__IRQSEL6__MASK                    0x00000040
#define __DMA1REQ__IRQSEL6__LENGTH                  0x00000001

#define __DMA2CON__MODE__POSITION                   0x00000000
#define __DMA2CON__MODE__MASK                       0x00000003
#define __DMA2CON__MODE__LENGTH                     0x00000002

#define __DMA2CON__AMODE__POSITION                  0x00000004
#define __DMA2CON__AMODE__MASK                      0x00000030
#define __DMA2CON__AMODE__LENGTH                    0x00000002

#define __DMA2CON__NULLW__POSITION                  0x0000000B
#define __DMA2CON__NULLW__MASK                      0x00000800
#define __DMA2CON__NULLW__LENGTH                    0x00000001

#define __DMA2CON__HALF__POSITION                   0x0000000C
#define __DMA2CON__HALF__MASK                       0x00001000
#define __DMA2CON__HALF__LENGTH                     0x00000001

#define __DMA2CON__DIR__POSITION                    0x0000000D
#define __DMA2CON__DIR__MASK                        0x00002000
#define __DMA2CON__DIR__LENGTH                      0x00000001

#define __DMA2CON__SIZE__POSITION                   0x0000000E
#define __DMA2CON__SIZE__MASK                       0x00004000
#define __DMA2CON__SIZE__LENGTH                     0x00000001

#define __DMA2CON__CHEN__POSITION                   0x0000000F
#define __DMA2CON__CHEN__MASK                       0x00008000
#define __DMA2CON__CHEN__LENGTH                     0x00000001

#define __DMA2CON__MODE0__POSITION                  0x00000000
#define __DMA2CON__MODE0__MASK                      0x00000001
#define __DMA2CON__MODE0__LENGTH                    0x00000001

#define __DMA2CON__MODE1__POSITION                  0x00000001
#define __DMA2CON__MODE1__MASK                      0x00000002
#define __DMA2CON__MODE1__LENGTH                    0x00000001

#define __DMA2CON__AMODE0__POSITION                 0x00000004
#define __DMA2CON__AMODE0__MASK                     0x00000010
#define __DMA2CON__AMODE0__LENGTH                   0x00000001

#define __DMA2CON__AMODE1__POSITION                 0x00000005
#define __DMA2CON__AMODE1__MASK                     0x00000020
#define __DMA2CON__AMODE1__LENGTH                   0x00000001

#define __DMA2REQ__IRQSEL__POSITION                 0x00000000
#define __DMA2REQ__IRQSEL__MASK                     0x0000007F
#define __DMA2REQ__IRQSEL__LENGTH                   0x00000007

#define __DMA2REQ__FORCE__POSITION                  0x0000000F
#define __DMA2REQ__FORCE__MASK                      0x00008000
#define __DMA2REQ__FORCE__LENGTH                    0x00000001

#define __DMA2REQ__IRQSEL0__POSITION                0x00000000
#define __DMA2REQ__IRQSEL0__MASK                    0x00000001
#define __DMA2REQ__IRQSEL0__LENGTH                  0x00000001

#define __DMA2REQ__IRQSEL1__POSITION                0x00000001
#define __DMA2REQ__IRQSEL1__MASK                    0x00000002
#define __DMA2REQ__IRQSEL1__LENGTH                  0x00000001

#define __DMA2REQ__IRQSEL2__POSITION                0x00000002
#define __DMA2REQ__IRQSEL2__MASK                    0x00000004
#define __DMA2REQ__IRQSEL2__LENGTH                  0x00000001

#define __DMA2REQ__IRQSEL3__POSITION                0x00000003
#define __DMA2REQ__IRQSEL3__MASK                    0x00000008
#define __DMA2REQ__IRQSEL3__LENGTH                  0x00000001

#define __DMA2REQ__IRQSEL4__POSITION                0x00000004
#define __DMA2REQ__IRQSEL4__MASK                    0x00000010
#define __DMA2REQ__IRQSEL4__LENGTH                  0x00000001

#define __DMA2REQ__IRQSEL5__POSITION                0x00000005
#define __DMA2REQ__IRQSEL5__MASK                    0x00000020
#define __DMA2REQ__IRQSEL5__LENGTH                  0x00000001

#define __DMA2REQ__IRQSEL6__POSITION                0x00000006
#define __DMA2REQ__IRQSEL6__MASK                    0x00000040
#define __DMA2REQ__IRQSEL6__LENGTH                  0x00000001

#define __DMA3CON__MODE__POSITION                   0x00000000
#define __DMA3CON__MODE__MASK                       0x00000003
#define __DMA3CON__MODE__LENGTH                     0x00000002

#define __DMA3CON__AMODE__POSITION                  0x00000004
#define __DMA3CON__AMODE__MASK                      0x00000030
#define __DMA3CON__AMODE__LENGTH                    0x00000002

#define __DMA3CON__NULLW__POSITION                  0x0000000B
#define __DMA3CON__NULLW__MASK                      0x00000800
#define __DMA3CON__NULLW__LENGTH                    0x00000001

#define __DMA3CON__HALF__POSITION                   0x0000000C
#define __DMA3CON__HALF__MASK                       0x00001000
#define __DMA3CON__HALF__LENGTH                     0x00000001

#define __DMA3CON__DIR__POSITION                    0x0000000D
#define __DMA3CON__DIR__MASK                        0x00002000
#define __DMA3CON__DIR__LENGTH                      0x00000001

#define __DMA3CON__SIZE__POSITION                   0x0000000E
#define __DMA3CON__SIZE__MASK                       0x00004000
#define __DMA3CON__SIZE__LENGTH                     0x00000001

#define __DMA3CON__CHEN__POSITION                   0x0000000F
#define __DMA3CON__CHEN__MASK                       0x00008000
#define __DMA3CON__CHEN__LENGTH                     0x00000001

#define __DMA3CON__MODE0__POSITION                  0x00000000
#define __DMA3CON__MODE0__MASK                      0x00000001
#define __DMA3CON__MODE0__LENGTH                    0x00000001

#define __DMA3CON__MODE1__POSITION                  0x00000001
#define __DMA3CON__MODE1__MASK                      0x00000002
#define __DMA3CON__MODE1__LENGTH                    0x00000001

#define __DMA3CON__AMODE0__POSITION                 0x00000004
#define __DMA3CON__AMODE0__MASK                     0x00000010
#define __DMA3CON__AMODE0__LENGTH                   0x00000001

#define __DMA3CON__AMODE1__POSITION                 0x00000005
#define __DMA3CON__AMODE1__MASK                     0x00000020
#define __DMA3CON__AMODE1__LENGTH                   0x00000001

#define __DMA3REQ__IRQSEL__POSITION                 0x00000000
#define __DMA3REQ__IRQSEL__MASK                     0x0000007F
#define __DMA3REQ__IRQSEL__LENGTH                   0x00000007

#define __DMA3REQ__FORCE__POSITION                  0x0000000F
#define __DMA3REQ__FORCE__MASK                      0x00008000
#define __DMA3REQ__FORCE__LENGTH                    0x00000001

#define __DMA3REQ__IRQSEL0__POSITION                0x00000000
#define __DMA3REQ__IRQSEL0__MASK                    0x00000001
#define __DMA3REQ__IRQSEL0__LENGTH                  0x00000001

#define __DMA3REQ__IRQSEL1__POSITION                0x00000001
#define __DMA3REQ__IRQSEL1__MASK                    0x00000002
#define __DMA3REQ__IRQSEL1__LENGTH                  0x00000001

#define __DMA3REQ__IRQSEL2__POSITION                0x00000002
#define __DMA3REQ__IRQSEL2__MASK                    0x00000004
#define __DMA3REQ__IRQSEL2__LENGTH                  0x00000001

#define __DMA3REQ__IRQSEL3__POSITION                0x00000003
#define __DMA3REQ__IRQSEL3__MASK                    0x00000008
#define __DMA3REQ__IRQSEL3__LENGTH                  0x00000001

#define __DMA3REQ__IRQSEL4__POSITION                0x00000004
#define __DMA3REQ__IRQSEL4__MASK                    0x00000010
#define __DMA3REQ__IRQSEL4__LENGTH                  0x00000001

#define __DMA3REQ__IRQSEL5__POSITION                0x00000005
#define __DMA3REQ__IRQSEL5__MASK                    0x00000020
#define __DMA3REQ__IRQSEL5__LENGTH                  0x00000001

#define __DMA3REQ__IRQSEL6__POSITION                0x00000006
#define __DMA3REQ__IRQSEL6__MASK                    0x00000040
#define __DMA3REQ__IRQSEL6__LENGTH                  0x00000001

#define __DMA4CON__MODE__POSITION                   0x00000000
#define __DMA4CON__MODE__MASK                       0x00000003
#define __DMA4CON__MODE__LENGTH                     0x00000002

#define __DMA4CON__AMODE__POSITION                  0x00000004
#define __DMA4CON__AMODE__MASK                      0x00000030
#define __DMA4CON__AMODE__LENGTH                    0x00000002

#define __DMA4CON__NULLW__POSITION                  0x0000000B
#define __DMA4CON__NULLW__MASK                      0x00000800
#define __DMA4CON__NULLW__LENGTH                    0x00000001

#define __DMA4CON__HALF__POSITION                   0x0000000C
#define __DMA4CON__HALF__MASK                       0x00001000
#define __DMA4CON__HALF__LENGTH                     0x00000001

#define __DMA4CON__DIR__POSITION                    0x0000000D
#define __DMA4CON__DIR__MASK                        0x00002000
#define __DMA4CON__DIR__LENGTH                      0x00000001

#define __DMA4CON__SIZE__POSITION                   0x0000000E
#define __DMA4CON__SIZE__MASK                       0x00004000
#define __DMA4CON__SIZE__LENGTH                     0x00000001

#define __DMA4CON__CHEN__POSITION                   0x0000000F
#define __DMA4CON__CHEN__MASK                       0x00008000
#define __DMA4CON__CHEN__LENGTH                     0x00000001

#define __DMA4CON__MODE0__POSITION                  0x00000000
#define __DMA4CON__MODE0__MASK                      0x00000001
#define __DMA4CON__MODE0__LENGTH                    0x00000001

#define __DMA4CON__MODE1__POSITION                  0x00000001
#define __DMA4CON__MODE1__MASK                      0x00000002
#define __DMA4CON__MODE1__LENGTH                    0x00000001

#define __DMA4CON__AMODE0__POSITION                 0x00000004
#define __DMA4CON__AMODE0__MASK                     0x00000010
#define __DMA4CON__AMODE0__LENGTH                   0x00000001

#define __DMA4CON__AMODE1__POSITION                 0x00000005
#define __DMA4CON__AMODE1__MASK                     0x00000020
#define __DMA4CON__AMODE1__LENGTH                   0x00000001

#define __DMA4REQ__IRQSEL__POSITION                 0x00000000
#define __DMA4REQ__IRQSEL__MASK                     0x0000007F
#define __DMA4REQ__IRQSEL__LENGTH                   0x00000007

#define __DMA4REQ__FORCE__POSITION                  0x0000000F
#define __DMA4REQ__FORCE__MASK                      0x00008000
#define __DMA4REQ__FORCE__LENGTH                    0x00000001

#define __DMA4REQ__IRQSEL0__POSITION                0x00000000
#define __DMA4REQ__IRQSEL0__MASK                    0x00000001
#define __DMA4REQ__IRQSEL0__LENGTH                  0x00000001

#define __DMA4REQ__IRQSEL1__POSITION                0x00000001
#define __DMA4REQ__IRQSEL1__MASK                    0x00000002
#define __DMA4REQ__IRQSEL1__LENGTH                  0x00000001

#define __DMA4REQ__IRQSEL2__POSITION                0x00000002
#define __DMA4REQ__IRQSEL2__MASK                    0x00000004
#define __DMA4REQ__IRQSEL2__LENGTH                  0x00000001

#define __DMA4REQ__IRQSEL3__POSITION                0x00000003
#define __DMA4REQ__IRQSEL3__MASK                    0x00000008
#define __DMA4REQ__IRQSEL3__LENGTH                  0x00000001

#define __DMA4REQ__IRQSEL4__POSITION                0x00000004
#define __DMA4REQ__IRQSEL4__MASK                    0x00000010
#define __DMA4REQ__IRQSEL4__LENGTH                  0x00000001

#define __DMA4REQ__IRQSEL5__POSITION                0x00000005
#define __DMA4REQ__IRQSEL5__MASK                    0x00000020
#define __DMA4REQ__IRQSEL5__LENGTH                  0x00000001

#define __DMA4REQ__IRQSEL6__POSITION                0x00000006
#define __DMA4REQ__IRQSEL6__MASK                    0x00000040
#define __DMA4REQ__IRQSEL6__LENGTH                  0x00000001

#define __DMA5CON__MODE__POSITION                   0x00000000
#define __DMA5CON__MODE__MASK                       0x00000003
#define __DMA5CON__MODE__LENGTH                     0x00000002

#define __DMA5CON__AMODE__POSITION                  0x00000004
#define __DMA5CON__AMODE__MASK                      0x00000030
#define __DMA5CON__AMODE__LENGTH                    0x00000002

#define __DMA5CON__NULLW__POSITION                  0x0000000B
#define __DMA5CON__NULLW__MASK                      0x00000800
#define __DMA5CON__NULLW__LENGTH                    0x00000001

#define __DMA5CON__HALF__POSITION                   0x0000000C
#define __DMA5CON__HALF__MASK                       0x00001000
#define __DMA5CON__HALF__LENGTH                     0x00000001

#define __DMA5CON__DIR__POSITION                    0x0000000D
#define __DMA5CON__DIR__MASK                        0x00002000
#define __DMA5CON__DIR__LENGTH                      0x00000001

#define __DMA5CON__SIZE__POSITION                   0x0000000E
#define __DMA5CON__SIZE__MASK                       0x00004000
#define __DMA5CON__SIZE__LENGTH                     0x00000001

#define __DMA5CON__CHEN__POSITION                   0x0000000F
#define __DMA5CON__CHEN__MASK                       0x00008000
#define __DMA5CON__CHEN__LENGTH                     0x00000001

#define __DMA5CON__MODE0__POSITION                  0x00000000
#define __DMA5CON__MODE0__MASK                      0x00000001
#define __DMA5CON__MODE0__LENGTH                    0x00000001

#define __DMA5CON__MODE1__POSITION                  0x00000001
#define __DMA5CON__MODE1__MASK                      0x00000002
#define __DMA5CON__MODE1__LENGTH                    0x00000001

#define __DMA5CON__AMODE0__POSITION                 0x00000004
#define __DMA5CON__AMODE0__MASK                     0x00000010
#define __DMA5CON__AMODE0__LENGTH                   0x00000001

#define __DMA5CON__AMODE1__POSITION                 0x00000005
#define __DMA5CON__AMODE1__MASK                     0x00000020
#define __DMA5CON__AMODE1__LENGTH                   0x00000001

#define __DMA5REQ__IRQSEL__POSITION                 0x00000000
#define __DMA5REQ__IRQSEL__MASK                     0x0000007F
#define __DMA5REQ__IRQSEL__LENGTH                   0x00000007

#define __DMA5REQ__FORCE__POSITION                  0x0000000F
#define __DMA5REQ__FORCE__MASK                      0x00008000
#define __DMA5REQ__FORCE__LENGTH                    0x00000001

#define __DMA5REQ__IRQSEL0__POSITION                0x00000000
#define __DMA5REQ__IRQSEL0__MASK                    0x00000001
#define __DMA5REQ__IRQSEL0__LENGTH                  0x00000001

#define __DMA5REQ__IRQSEL1__POSITION                0x00000001
#define __DMA5REQ__IRQSEL1__MASK                    0x00000002
#define __DMA5REQ__IRQSEL1__LENGTH                  0x00000001

#define __DMA5REQ__IRQSEL2__POSITION                0x00000002
#define __DMA5REQ__IRQSEL2__MASK                    0x00000004
#define __DMA5REQ__IRQSEL2__LENGTH                  0x00000001

#define __DMA5REQ__IRQSEL3__POSITION                0x00000003
#define __DMA5REQ__IRQSEL3__MASK                    0x00000008
#define __DMA5REQ__IRQSEL3__LENGTH                  0x00000001

#define __DMA5REQ__IRQSEL4__POSITION                0x00000004
#define __DMA5REQ__IRQSEL4__MASK                    0x00000010
#define __DMA5REQ__IRQSEL4__LENGTH                  0x00000001

#define __DMA5REQ__IRQSEL5__POSITION                0x00000005
#define __DMA5REQ__IRQSEL5__MASK                    0x00000020
#define __DMA5REQ__IRQSEL5__LENGTH                  0x00000001

#define __DMA5REQ__IRQSEL6__POSITION                0x00000006
#define __DMA5REQ__IRQSEL6__MASK                    0x00000040
#define __DMA5REQ__IRQSEL6__LENGTH                  0x00000001

#define __DMA6CON__MODE__POSITION                   0x00000000
#define __DMA6CON__MODE__MASK                       0x00000003
#define __DMA6CON__MODE__LENGTH                     0x00000002

#define __DMA6CON__AMODE__POSITION                  0x00000004
#define __DMA6CON__AMODE__MASK                      0x00000030
#define __DMA6CON__AMODE__LENGTH                    0x00000002

#define __DMA6CON__NULLW__POSITION                  0x0000000B
#define __DMA6CON__NULLW__MASK                      0x00000800
#define __DMA6CON__NULLW__LENGTH                    0x00000001

#define __DMA6CON__HALF__POSITION                   0x0000000C
#define __DMA6CON__HALF__MASK                       0x00001000
#define __DMA6CON__HALF__LENGTH                     0x00000001

#define __DMA6CON__DIR__POSITION                    0x0000000D
#define __DMA6CON__DIR__MASK                        0x00002000
#define __DMA6CON__DIR__LENGTH                      0x00000001

#define __DMA6CON__SIZE__POSITION                   0x0000000E
#define __DMA6CON__SIZE__MASK                       0x00004000
#define __DMA6CON__SIZE__LENGTH                     0x00000001

#define __DMA6CON__CHEN__POSITION                   0x0000000F
#define __DMA6CON__CHEN__MASK                       0x00008000
#define __DMA6CON__CHEN__LENGTH                     0x00000001

#define __DMA6CON__MODE0__POSITION                  0x00000000
#define __DMA6CON__MODE0__MASK                      0x00000001
#define __DMA6CON__MODE0__LENGTH                    0x00000001

#define __DMA6CON__MODE1__POSITION                  0x00000001
#define __DMA6CON__MODE1__MASK                      0x00000002
#define __DMA6CON__MODE1__LENGTH                    0x00000001

#define __DMA6CON__AMODE0__POSITION                 0x00000004
#define __DMA6CON__AMODE0__MASK                     0x00000010
#define __DMA6CON__AMODE0__LENGTH                   0x00000001

#define __DMA6CON__AMODE1__POSITION                 0x00000005
#define __DMA6CON__AMODE1__MASK                     0x00000020
#define __DMA6CON__AMODE1__LENGTH                   0x00000001

#define __DMA6REQ__IRQSEL__POSITION                 0x00000000
#define __DMA6REQ__IRQSEL__MASK                     0x0000007F
#define __DMA6REQ__IRQSEL__LENGTH                   0x00000007

#define __DMA6REQ__FORCE__POSITION                  0x0000000F
#define __DMA6REQ__FORCE__MASK                      0x00008000
#define __DMA6REQ__FORCE__LENGTH                    0x00000001

#define __DMA6REQ__IRQSEL0__POSITION                0x00000000
#define __DMA6REQ__IRQSEL0__MASK                    0x00000001
#define __DMA6REQ__IRQSEL0__LENGTH                  0x00000001

#define __DMA6REQ__IRQSEL1__POSITION                0x00000001
#define __DMA6REQ__IRQSEL1__MASK                    0x00000002
#define __DMA6REQ__IRQSEL1__LENGTH                  0x00000001

#define __DMA6REQ__IRQSEL2__POSITION                0x00000002
#define __DMA6REQ__IRQSEL2__MASK                    0x00000004
#define __DMA6REQ__IRQSEL2__LENGTH                  0x00000001

#define __DMA6REQ__IRQSEL3__POSITION                0x00000003
#define __DMA6REQ__IRQSEL3__MASK                    0x00000008
#define __DMA6REQ__IRQSEL3__LENGTH                  0x00000001

#define __DMA6REQ__IRQSEL4__POSITION                0x00000004
#define __DMA6REQ__IRQSEL4__MASK                    0x00000010
#define __DMA6REQ__IRQSEL4__LENGTH                  0x00000001

#define __DMA6REQ__IRQSEL5__POSITION                0x00000005
#define __DMA6REQ__IRQSEL5__MASK                    0x00000020
#define __DMA6REQ__IRQSEL5__LENGTH                  0x00000001

#define __DMA6REQ__IRQSEL6__POSITION                0x00000006
#define __DMA6REQ__IRQSEL6__MASK                    0x00000040
#define __DMA6REQ__IRQSEL6__LENGTH                  0x00000001

#define __DMA7CON__MODE__POSITION                   0x00000000
#define __DMA7CON__MODE__MASK                       0x00000003
#define __DMA7CON__MODE__LENGTH                     0x00000002

#define __DMA7CON__AMODE__POSITION                  0x00000004
#define __DMA7CON__AMODE__MASK                      0x00000030
#define __DMA7CON__AMODE__LENGTH                    0x00000002

#define __DMA7CON__NULLW__POSITION                  0x0000000B
#define __DMA7CON__NULLW__MASK                      0x00000800
#define __DMA7CON__NULLW__LENGTH                    0x00000001

#define __DMA7CON__HALF__POSITION                   0x0000000C
#define __DMA7CON__HALF__MASK                       0x00001000
#define __DMA7CON__HALF__LENGTH                     0x00000001

#define __DMA7CON__DIR__POSITION                    0x0000000D
#define __DMA7CON__DIR__MASK                        0x00002000
#define __DMA7CON__DIR__LENGTH                      0x00000001

#define __DMA7CON__SIZE__POSITION                   0x0000000E
#define __DMA7CON__SIZE__MASK                       0x00004000
#define __DMA7CON__SIZE__LENGTH                     0x00000001

#define __DMA7CON__CHEN__POSITION                   0x0000000F
#define __DMA7CON__CHEN__MASK                       0x00008000
#define __DMA7CON__CHEN__LENGTH                     0x00000001

#define __DMA7CON__MODE0__POSITION                  0x00000000
#define __DMA7CON__MODE0__MASK                      0x00000001
#define __DMA7CON__MODE0__LENGTH                    0x00000001

#define __DMA7CON__MODE1__POSITION                  0x00000001
#define __DMA7CON__MODE1__MASK                      0x00000002
#define __DMA7CON__MODE1__LENGTH                    0x00000001

#define __DMA7CON__AMODE0__POSITION                 0x00000004
#define __DMA7CON__AMODE0__MASK                     0x00000010
#define __DMA7CON__AMODE0__LENGTH                   0x00000001

#define __DMA7CON__AMODE1__POSITION                 0x00000005
#define __DMA7CON__AMODE1__MASK                     0x00000020
#define __DMA7CON__AMODE1__LENGTH                   0x00000001

#define __DMA7REQ__IRQSEL__POSITION                 0x00000000
#define __DMA7REQ__IRQSEL__MASK                     0x0000007F
#define __DMA7REQ__IRQSEL__LENGTH                   0x00000007

#define __DMA7REQ__FORCE__POSITION                  0x0000000F
#define __DMA7REQ__FORCE__MASK                      0x00008000
#define __DMA7REQ__FORCE__LENGTH                    0x00000001

#define __DMA7REQ__IRQSEL0__POSITION                0x00000000
#define __DMA7REQ__IRQSEL0__MASK                    0x00000001
#define __DMA7REQ__IRQSEL0__LENGTH                  0x00000001

#define __DMA7REQ__IRQSEL1__POSITION                0x00000001
#define __DMA7REQ__IRQSEL1__MASK                    0x00000002
#define __DMA7REQ__IRQSEL1__LENGTH                  0x00000001

#define __DMA7REQ__IRQSEL2__POSITION                0x00000002
#define __DMA7REQ__IRQSEL2__MASK                    0x00000004
#define __DMA7REQ__IRQSEL2__LENGTH                  0x00000001

#define __DMA7REQ__IRQSEL3__POSITION                0x00000003
#define __DMA7REQ__IRQSEL3__MASK                    0x00000008
#define __DMA7REQ__IRQSEL3__LENGTH                  0x00000001

#define __DMA7REQ__IRQSEL4__POSITION                0x00000004
#define __DMA7REQ__IRQSEL4__MASK                    0x00000010
#define __DMA7REQ__IRQSEL4__LENGTH                  0x00000001

#define __DMA7REQ__IRQSEL5__POSITION                0x00000005
#define __DMA7REQ__IRQSEL5__MASK                    0x00000020
#define __DMA7REQ__IRQSEL5__LENGTH                  0x00000001

#define __DMA7REQ__IRQSEL6__POSITION                0x00000006
#define __DMA7REQ__IRQSEL6__MASK                    0x00000040
#define __DMA7REQ__IRQSEL6__LENGTH                  0x00000001

#define __DMACS0__XWCOL__POSITION                   0x00000000
#define __DMACS0__XWCOL__MASK                       0x000000FF
#define __DMACS0__XWCOL__LENGTH                     0x00000008

#define __DMACS0__PWCOL__POSITION                   0x00000008
#define __DMACS0__PWCOL__MASK                       0x0000FF00
#define __DMACS0__PWCOL__LENGTH                     0x00000008

#define __DMACS0__XWCOL0__POSITION                  0x00000000
#define __DMACS0__XWCOL0__MASK                      0x00000001
#define __DMACS0__XWCOL0__LENGTH                    0x00000001

#define __DMACS0__XWCOL1__POSITION                  0x00000001
#define __DMACS0__XWCOL1__MASK                      0x00000002
#define __DMACS0__XWCOL1__LENGTH                    0x00000001

#define __DMACS0__XWCOL2__POSITION                  0x00000002
#define __DMACS0__XWCOL2__MASK                      0x00000004
#define __DMACS0__XWCOL2__LENGTH                    0x00000001

#define __DMACS0__XWCOL3__POSITION                  0x00000003
#define __DMACS0__XWCOL3__MASK                      0x00000008
#define __DMACS0__XWCOL3__LENGTH                    0x00000001

#define __DMACS0__XWCOL4__POSITION                  0x00000004
#define __DMACS0__XWCOL4__MASK                      0x00000010
#define __DMACS0__XWCOL4__LENGTH                    0x00000001

#define __DMACS0__XWCOL5__POSITION                  0x00000005
#define __DMACS0__XWCOL5__MASK                      0x00000020
#define __DMACS0__XWCOL5__LENGTH                    0x00000001

#define __DMACS0__XWCOL6__POSITION                  0x00000006
#define __DMACS0__XWCOL6__MASK                      0x00000040
#define __DMACS0__XWCOL6__LENGTH                    0x00000001

#define __DMACS0__XWCOL7__POSITION                  0x00000007
#define __DMACS0__XWCOL7__MASK                      0x00000080
#define __DMACS0__XWCOL7__LENGTH                    0x00000001

#define __DMACS0__PWCOL0__POSITION                  0x00000008
#define __DMACS0__PWCOL0__MASK                      0x00000100
#define __DMACS0__PWCOL0__LENGTH                    0x00000001

#define __DMACS0__PWCOL1__POSITION                  0x00000009
#define __DMACS0__PWCOL1__MASK                      0x00000200
#define __DMACS0__PWCOL1__LENGTH                    0x00000001

#define __DMACS0__PWCOL2__POSITION                  0x0000000A
#define __DMACS0__PWCOL2__MASK                      0x00000400
#define __DMACS0__PWCOL2__LENGTH                    0x00000001

#define __DMACS0__PWCOL3__POSITION                  0x0000000B
#define __DMACS0__PWCOL3__MASK                      0x00000800
#define __DMACS0__PWCOL3__LENGTH                    0x00000001

#define __DMACS0__PWCOL4__POSITION                  0x0000000C
#define __DMACS0__PWCOL4__MASK                      0x00001000
#define __DMACS0__PWCOL4__LENGTH                    0x00000001

#define __DMACS0__PWCOL5__POSITION                  0x0000000D
#define __DMACS0__PWCOL5__MASK                      0x00002000
#define __DMACS0__PWCOL5__LENGTH                    0x00000001

#define __DMACS0__PWCOL6__POSITION                  0x0000000E
#define __DMACS0__PWCOL6__MASK                      0x00004000
#define __DMACS0__PWCOL6__LENGTH                    0x00000001

#define __DMACS0__PWCOL7__POSITION                  0x0000000F
#define __DMACS0__PWCOL7__MASK                      0x00008000
#define __DMACS0__PWCOL7__LENGTH                    0x00000001

#define __DMACS1__PPST0__POSITION                   0x00000000
#define __DMACS1__PPST0__MASK                       0x00000001
#define __DMACS1__PPST0__LENGTH                     0x00000001

#define __DMACS1__PPST1__POSITION                   0x00000001
#define __DMACS1__PPST1__MASK                       0x00000002
#define __DMACS1__PPST1__LENGTH                     0x00000001

#define __DMACS1__PPST2__POSITION                   0x00000002
#define __DMACS1__PPST2__MASK                       0x00000004
#define __DMACS1__PPST2__LENGTH                     0x00000001

#define __DMACS1__PPST3__POSITION                   0x00000003
#define __DMACS1__PPST3__MASK                       0x00000008
#define __DMACS1__PPST3__LENGTH                     0x00000001

#define __DMACS1__PPST4__POSITION                   0x00000004
#define __DMACS1__PPST4__MASK                       0x00000010
#define __DMACS1__PPST4__LENGTH                     0x00000001

#define __DMACS1__PPST5__POSITION                   0x00000005
#define __DMACS1__PPST5__MASK                       0x00000020
#define __DMACS1__PPST5__LENGTH                     0x00000001

#define __DMACS1__PPST6__POSITION                   0x00000006
#define __DMACS1__PPST6__MASK                       0x00000040
#define __DMACS1__PPST6__LENGTH                     0x00000001

#define __DMACS1__PPST7__POSITION                   0x00000007
#define __DMACS1__PPST7__MASK                       0x00000080
#define __DMACS1__PPST7__LENGTH                     0x00000001

#define __DMACS1__LSTCH__POSITION                   0x00000008
#define __DMACS1__LSTCH__MASK                       0x00000F00
#define __DMACS1__LSTCH__LENGTH                     0x00000004

#define __DMACS1__PPST__POSITION                    0x00000000
#define __DMACS1__PPST__MASK                        0x000000FF
#define __DMACS1__PPST__LENGTH                      0x00000008

#define __DMACS1__LSTCH0__POSITION                  0x00000008
#define __DMACS1__LSTCH0__MASK                      0x00000100
#define __DMACS1__LSTCH0__LENGTH                    0x00000001

#define __DMACS1__LSTCH1__POSITION                  0x00000009
#define __DMACS1__LSTCH1__MASK                      0x00000200
#define __DMACS1__LSTCH1__LENGTH                    0x00000001

#define __DMACS1__LSTCH2__POSITION                  0x0000000A
#define __DMACS1__LSTCH2__MASK                      0x00000400
#define __DMACS1__LSTCH2__LENGTH                    0x00000001

#define __DMACS1__LSTCH3__POSITION                  0x0000000B
#define __DMACS1__LSTCH3__MASK                      0x00000800
#define __DMACS1__LSTCH3__LENGTH                    0x00000001

#define __DAC1CON__DACFDIV__POSITION                0x00000000
#define __DAC1CON__DACFDIV__MASK                    0x0000007F
#define __DAC1CON__DACFDIV__LENGTH                  0x00000007

#define __DAC1CON__FORM__POSITION                   0x00000008
#define __DAC1CON__FORM__MASK                       0x00000100
#define __DAC1CON__FORM__LENGTH                     0x00000001

#define __DAC1CON__AMPON__POSITION                  0x0000000C
#define __DAC1CON__AMPON__MASK                      0x00001000
#define __DAC1CON__AMPON__LENGTH                    0x00000001

#define __DAC1CON__DACSIDL__POSITION                0x0000000D
#define __DAC1CON__DACSIDL__MASK                    0x00002000
#define __DAC1CON__DACSIDL__LENGTH                  0x00000001

#define __DAC1CON__DACEN__POSITION                  0x0000000F
#define __DAC1CON__DACEN__MASK                      0x00008000
#define __DAC1CON__DACEN__LENGTH                    0x00000001

#define __DAC1CON__DACFDIV0__POSITION               0x00000000
#define __DAC1CON__DACFDIV0__MASK                   0x00000001
#define __DAC1CON__DACFDIV0__LENGTH                 0x00000001

#define __DAC1CON__DACFDIV1__POSITION               0x00000001
#define __DAC1CON__DACFDIV1__MASK                   0x00000002
#define __DAC1CON__DACFDIV1__LENGTH                 0x00000001

#define __DAC1CON__DACFDIV2__POSITION               0x00000002
#define __DAC1CON__DACFDIV2__MASK                   0x00000004
#define __DAC1CON__DACFDIV2__LENGTH                 0x00000001

#define __DAC1CON__DACFDIV3__POSITION               0x00000003
#define __DAC1CON__DACFDIV3__MASK                   0x00000008
#define __DAC1CON__DACFDIV3__LENGTH                 0x00000001

#define __DAC1CON__DACFDIV4__POSITION               0x00000004
#define __DAC1CON__DACFDIV4__MASK                   0x00000010
#define __DAC1CON__DACFDIV4__LENGTH                 0x00000001

#define __DAC1CON__DACFDIV5__POSITION               0x00000005
#define __DAC1CON__DACFDIV5__MASK                   0x00000020
#define __DAC1CON__DACFDIV5__LENGTH                 0x00000001

#define __DAC1CON__DACFDIV6__POSITION               0x00000006
#define __DAC1CON__DACFDIV6__MASK                   0x00000040
#define __DAC1CON__DACFDIV6__LENGTH                 0x00000001

#define __DAC1STAT__REMPTY__POSITION                0x00000000
#define __DAC1STAT__REMPTY__MASK                    0x00000001
#define __DAC1STAT__REMPTY__LENGTH                  0x00000001

#define __DAC1STAT__RFULL__POSITION                 0x00000001
#define __DAC1STAT__RFULL__MASK                     0x00000002
#define __DAC1STAT__RFULL__LENGTH                   0x00000001

#define __DAC1STAT__RITYPE__POSITION                0x00000002
#define __DAC1STAT__RITYPE__MASK                    0x00000004
#define __DAC1STAT__RITYPE__LENGTH                  0x00000001

#define __DAC1STAT__RMVOEN__POSITION                0x00000005
#define __DAC1STAT__RMVOEN__MASK                    0x00000020
#define __DAC1STAT__RMVOEN__LENGTH                  0x00000001

#define __DAC1STAT__ROEN__POSITION                  0x00000007
#define __DAC1STAT__ROEN__MASK                      0x00000080
#define __DAC1STAT__ROEN__LENGTH                    0x00000001

#define __DAC1STAT__LEMPTY__POSITION                0x00000008
#define __DAC1STAT__LEMPTY__MASK                    0x00000100
#define __DAC1STAT__LEMPTY__LENGTH                  0x00000001

#define __DAC1STAT__LFULL__POSITION                 0x00000009
#define __DAC1STAT__LFULL__MASK                     0x00000200
#define __DAC1STAT__LFULL__LENGTH                   0x00000001

#define __DAC1STAT__LITYPE__POSITION                0x0000000A
#define __DAC1STAT__LITYPE__MASK                    0x00000400
#define __DAC1STAT__LITYPE__LENGTH                  0x00000001

#define __DAC1STAT__LMVOEN__POSITION                0x0000000D
#define __DAC1STAT__LMVOEN__MASK                    0x00002000
#define __DAC1STAT__LMVOEN__LENGTH                  0x00000001

#define __DAC1STAT__LOEN__POSITION                  0x0000000F
#define __DAC1STAT__LOEN__MASK                      0x00008000
#define __DAC1STAT__LOEN__LENGTH                    0x00000001

#define __C1CTRL1__WIN__POSITION                    0x00000000
#define __C1CTRL1__WIN__MASK                        0x00000001
#define __C1CTRL1__WIN__LENGTH                      0x00000001

#define __C1CTRL1__CANCAP__POSITION                 0x00000003
#define __C1CTRL1__CANCAP__MASK                     0x00000008
#define __C1CTRL1__CANCAP__LENGTH                   0x00000001

#define __C1CTRL1__OPMODE__POSITION                 0x00000005
#define __C1CTRL1__OPMODE__MASK                     0x000000E0
#define __C1CTRL1__OPMODE__LENGTH                   0x00000003

#define __C1CTRL1__REQOP__POSITION                  0x00000008
#define __C1CTRL1__REQOP__MASK                      0x00000700
#define __C1CTRL1__REQOP__LENGTH                    0x00000003

#define __C1CTRL1__CANCKS__POSITION                 0x0000000B
#define __C1CTRL1__CANCKS__MASK                     0x00000800
#define __C1CTRL1__CANCKS__LENGTH                   0x00000001

#define __C1CTRL1__ABAT__POSITION                   0x0000000C
#define __C1CTRL1__ABAT__MASK                       0x00001000
#define __C1CTRL1__ABAT__LENGTH                     0x00000001

#define __C1CTRL1__CSIDL__POSITION                  0x0000000D
#define __C1CTRL1__CSIDL__MASK                      0x00002000
#define __C1CTRL1__CSIDL__LENGTH                    0x00000001

#define __C1CTRL1__OPMODE0__POSITION                0x00000005
#define __C1CTRL1__OPMODE0__MASK                    0x00000020
#define __C1CTRL1__OPMODE0__LENGTH                  0x00000001

#define __C1CTRL1__OPMODE1__POSITION                0x00000006
#define __C1CTRL1__OPMODE1__MASK                    0x00000040
#define __C1CTRL1__OPMODE1__LENGTH                  0x00000001

#define __C1CTRL1__OPMODE2__POSITION                0x00000007
#define __C1CTRL1__OPMODE2__MASK                    0x00000080
#define __C1CTRL1__OPMODE2__LENGTH                  0x00000001

#define __C1CTRL1__REQOP0__POSITION                 0x00000008
#define __C1CTRL1__REQOP0__MASK                     0x00000100
#define __C1CTRL1__REQOP0__LENGTH                   0x00000001

#define __C1CTRL1__REQOP1__POSITION                 0x00000009
#define __C1CTRL1__REQOP1__MASK                     0x00000200
#define __C1CTRL1__REQOP1__LENGTH                   0x00000001

#define __C1CTRL1__REQOP2__POSITION                 0x0000000A
#define __C1CTRL1__REQOP2__MASK                     0x00000400
#define __C1CTRL1__REQOP2__LENGTH                   0x00000001

#define __C1CTRL2__DNCNT__POSITION                  0x00000000
#define __C1CTRL2__DNCNT__MASK                      0x0000001F
#define __C1CTRL2__DNCNT__LENGTH                    0x00000005

#define __C1CTRL2__DNCNT0__POSITION                 0x00000000
#define __C1CTRL2__DNCNT0__MASK                     0x00000001
#define __C1CTRL2__DNCNT0__LENGTH                   0x00000001

#define __C1CTRL2__DNCNT1__POSITION                 0x00000001
#define __C1CTRL2__DNCNT1__MASK                     0x00000002
#define __C1CTRL2__DNCNT1__LENGTH                   0x00000001

#define __C1CTRL2__DNCNT2__POSITION                 0x00000002
#define __C1CTRL2__DNCNT2__MASK                     0x00000004
#define __C1CTRL2__DNCNT2__LENGTH                   0x00000001

#define __C1CTRL2__DNCNT3__POSITION                 0x00000003
#define __C1CTRL2__DNCNT3__MASK                     0x00000008
#define __C1CTRL2__DNCNT3__LENGTH                   0x00000001

#define __C1CTRL2__DNCNT4__POSITION                 0x00000004
#define __C1CTRL2__DNCNT4__MASK                     0x00000010
#define __C1CTRL2__DNCNT4__LENGTH                   0x00000001

#define __C1VEC__ICODE__POSITION                    0x00000000
#define __C1VEC__ICODE__MASK                        0x0000007F
#define __C1VEC__ICODE__LENGTH                      0x00000007

#define __C1VEC__FILHIT__POSITION                   0x00000008
#define __C1VEC__FILHIT__MASK                       0x00001F00
#define __C1VEC__FILHIT__LENGTH                     0x00000005

#define __C1VEC__ICODE0__POSITION                   0x00000000
#define __C1VEC__ICODE0__MASK                       0x00000001
#define __C1VEC__ICODE0__LENGTH                     0x00000001

#define __C1VEC__ICODE1__POSITION                   0x00000001
#define __C1VEC__ICODE1__MASK                       0x00000002
#define __C1VEC__ICODE1__LENGTH                     0x00000001

#define __C1VEC__ICODE2__POSITION                   0x00000002
#define __C1VEC__ICODE2__MASK                       0x00000004
#define __C1VEC__ICODE2__LENGTH                     0x00000001

#define __C1VEC__ICODE3__POSITION                   0x00000003
#define __C1VEC__ICODE3__MASK                       0x00000008
#define __C1VEC__ICODE3__LENGTH                     0x00000001

#define __C1VEC__ICODE4__POSITION                   0x00000004
#define __C1VEC__ICODE4__MASK                       0x00000010
#define __C1VEC__ICODE4__LENGTH                     0x00000001

#define __C1VEC__ICODE5__POSITION                   0x00000005
#define __C1VEC__ICODE5__MASK                       0x00000020
#define __C1VEC__ICODE5__LENGTH                     0x00000001

#define __C1VEC__ICODE6__POSITION                   0x00000006
#define __C1VEC__ICODE6__MASK                       0x00000040
#define __C1VEC__ICODE6__LENGTH                     0x00000001

#define __C1VEC__FILHIT0__POSITION                  0x00000008
#define __C1VEC__FILHIT0__MASK                      0x00000100
#define __C1VEC__FILHIT0__LENGTH                    0x00000001

#define __C1VEC__FILHIT1__POSITION                  0x00000009
#define __C1VEC__FILHIT1__MASK                      0x00000200
#define __C1VEC__FILHIT1__LENGTH                    0x00000001

#define __C1VEC__FILHIT2__POSITION                  0x0000000A
#define __C1VEC__FILHIT2__MASK                      0x00000400
#define __C1VEC__FILHIT2__LENGTH                    0x00000001

#define __C1VEC__FILHIT3__POSITION                  0x0000000B
#define __C1VEC__FILHIT3__MASK                      0x00000800
#define __C1VEC__FILHIT3__LENGTH                    0x00000001

#define __C1VEC__FILHIT4__POSITION                  0x0000000C
#define __C1VEC__FILHIT4__MASK                      0x00001000
#define __C1VEC__FILHIT4__LENGTH                    0x00000001

#define __C1FCTRL__FSA__POSITION                    0x00000000
#define __C1FCTRL__FSA__MASK                        0x0000001F
#define __C1FCTRL__FSA__LENGTH                      0x00000005

#define __C1FCTRL__DMABS__POSITION                  0x0000000D
#define __C1FCTRL__DMABS__MASK                      0x0000E000
#define __C1FCTRL__DMABS__LENGTH                    0x00000003

#define __C1FCTRL__FSA0__POSITION                   0x00000000
#define __C1FCTRL__FSA0__MASK                       0x00000001
#define __C1FCTRL__FSA0__LENGTH                     0x00000001

#define __C1FCTRL__FSA1__POSITION                   0x00000001
#define __C1FCTRL__FSA1__MASK                       0x00000002
#define __C1FCTRL__FSA1__LENGTH                     0x00000001

#define __C1FCTRL__FSA2__POSITION                   0x00000002
#define __C1FCTRL__FSA2__MASK                       0x00000004
#define __C1FCTRL__FSA2__LENGTH                     0x00000001

#define __C1FCTRL__FSA3__POSITION                   0x00000003
#define __C1FCTRL__FSA3__MASK                       0x00000008
#define __C1FCTRL__FSA3__LENGTH                     0x00000001

#define __C1FCTRL__FSA4__POSITION                   0x00000004
#define __C1FCTRL__FSA4__MASK                       0x00000010
#define __C1FCTRL__FSA4__LENGTH                     0x00000001

#define __C1FCTRL__DMABS0__POSITION                 0x0000000D
#define __C1FCTRL__DMABS0__MASK                     0x00002000
#define __C1FCTRL__DMABS0__LENGTH                   0x00000001

#define __C1FCTRL__DMABS1__POSITION                 0x0000000E
#define __C1FCTRL__DMABS1__MASK                     0x00004000
#define __C1FCTRL__DMABS1__LENGTH                   0x00000001

#define __C1FCTRL__DMABS2__POSITION                 0x0000000F
#define __C1FCTRL__DMABS2__MASK                     0x00008000
#define __C1FCTRL__DMABS2__LENGTH                   0x00000001

#define __C1FIFO__FNRB__POSITION                    0x00000000
#define __C1FIFO__FNRB__MASK                        0x0000003F
#define __C1FIFO__FNRB__LENGTH                      0x00000006

#define __C1FIFO__FBP__POSITION                     0x00000008
#define __C1FIFO__FBP__MASK                         0x00003F00
#define __C1FIFO__FBP__LENGTH                       0x00000006

#define __C1FIFO__FNRB0__POSITION                   0x00000000
#define __C1FIFO__FNRB0__MASK                       0x00000001
#define __C1FIFO__FNRB0__LENGTH                     0x00000001

#define __C1FIFO__FNRB1__POSITION                   0x00000001
#define __C1FIFO__FNRB1__MASK                       0x00000002
#define __C1FIFO__FNRB1__LENGTH                     0x00000001

#define __C1FIFO__FNRB2__POSITION                   0x00000002
#define __C1FIFO__FNRB2__MASK                       0x00000004
#define __C1FIFO__FNRB2__LENGTH                     0x00000001

#define __C1FIFO__FNRB3__POSITION                   0x00000003
#define __C1FIFO__FNRB3__MASK                       0x00000008
#define __C1FIFO__FNRB3__LENGTH                     0x00000001

#define __C1FIFO__FNRB4__POSITION                   0x00000004
#define __C1FIFO__FNRB4__MASK                       0x00000010
#define __C1FIFO__FNRB4__LENGTH                     0x00000001

#define __C1FIFO__FNRB5__POSITION                   0x00000005
#define __C1FIFO__FNRB5__MASK                       0x00000020
#define __C1FIFO__FNRB5__LENGTH                     0x00000001

#define __C1FIFO__FBP0__POSITION                    0x00000008
#define __C1FIFO__FBP0__MASK                        0x00000100
#define __C1FIFO__FBP0__LENGTH                      0x00000001

#define __C1FIFO__FBP1__POSITION                    0x00000009
#define __C1FIFO__FBP1__MASK                        0x00000200
#define __C1FIFO__FBP1__LENGTH                      0x00000001

#define __C1FIFO__FBP2__POSITION                    0x0000000A
#define __C1FIFO__FBP2__MASK                        0x00000400
#define __C1FIFO__FBP2__LENGTH                      0x00000001

#define __C1FIFO__FBP3__POSITION                    0x0000000B
#define __C1FIFO__FBP3__MASK                        0x00000800
#define __C1FIFO__FBP3__LENGTH                      0x00000001

#define __C1FIFO__FBP4__POSITION                    0x0000000C
#define __C1FIFO__FBP4__MASK                        0x00001000
#define __C1FIFO__FBP4__LENGTH                      0x00000001

#define __C1FIFO__FBP5__POSITION                    0x0000000D
#define __C1FIFO__FBP5__MASK                        0x00002000
#define __C1FIFO__FBP5__LENGTH                      0x00000001

#define __C1INTF__TBIF__POSITION                    0x00000000
#define __C1INTF__TBIF__MASK                        0x00000001
#define __C1INTF__TBIF__LENGTH                      0x00000001

#define __C1INTF__RBIF__POSITION                    0x00000001
#define __C1INTF__RBIF__MASK                        0x00000002
#define __C1INTF__RBIF__LENGTH                      0x00000001

#define __C1INTF__RBOVIF__POSITION                  0x00000002
#define __C1INTF__RBOVIF__MASK                      0x00000004
#define __C1INTF__RBOVIF__LENGTH                    0x00000001

#define __C1INTF__FIFOIF__POSITION                  0x00000003
#define __C1INTF__FIFOIF__MASK                      0x00000008
#define __C1INTF__FIFOIF__LENGTH                    0x00000001

#define __C1INTF__ERRIF__POSITION                   0x00000005
#define __C1INTF__ERRIF__MASK                       0x00000020
#define __C1INTF__ERRIF__LENGTH                     0x00000001

#define __C1INTF__WAKIF__POSITION                   0x00000006
#define __C1INTF__WAKIF__MASK                       0x00000040
#define __C1INTF__WAKIF__LENGTH                     0x00000001

#define __C1INTF__IVRIF__POSITION                   0x00000007
#define __C1INTF__IVRIF__MASK                       0x00000080
#define __C1INTF__IVRIF__LENGTH                     0x00000001

#define __C1INTF__EWARN__POSITION                   0x00000008
#define __C1INTF__EWARN__MASK                       0x00000100
#define __C1INTF__EWARN__LENGTH                     0x00000001

#define __C1INTF__RXWAR__POSITION                   0x00000009
#define __C1INTF__RXWAR__MASK                       0x00000200
#define __C1INTF__RXWAR__LENGTH                     0x00000001

#define __C1INTF__TXWAR__POSITION                   0x0000000A
#define __C1INTF__TXWAR__MASK                       0x00000400
#define __C1INTF__TXWAR__LENGTH                     0x00000001

#define __C1INTF__RXBP__POSITION                    0x0000000B
#define __C1INTF__RXBP__MASK                        0x00000800
#define __C1INTF__RXBP__LENGTH                      0x00000001

#define __C1INTF__TXBP__POSITION                    0x0000000C
#define __C1INTF__TXBP__MASK                        0x00001000
#define __C1INTF__TXBP__LENGTH                      0x00000001

#define __C1INTF__TXBO__POSITION                    0x0000000D
#define __C1INTF__TXBO__MASK                        0x00002000
#define __C1INTF__TXBO__LENGTH                      0x00000001

#define __C1INTE__TBIE__POSITION                    0x00000000
#define __C1INTE__TBIE__MASK                        0x00000001
#define __C1INTE__TBIE__LENGTH                      0x00000001

#define __C1INTE__RBIE__POSITION                    0x00000001
#define __C1INTE__RBIE__MASK                        0x00000002
#define __C1INTE__RBIE__LENGTH                      0x00000001

#define __C1INTE__RBOVIE__POSITION                  0x00000002
#define __C1INTE__RBOVIE__MASK                      0x00000004
#define __C1INTE__RBOVIE__LENGTH                    0x00000001

#define __C1INTE__FIFOIE__POSITION                  0x00000003
#define __C1INTE__FIFOIE__MASK                      0x00000008
#define __C1INTE__FIFOIE__LENGTH                    0x00000001

#define __C1INTE__ERRIE__POSITION                   0x00000005
#define __C1INTE__ERRIE__MASK                       0x00000020
#define __C1INTE__ERRIE__LENGTH                     0x00000001

#define __C1INTE__WAKIE__POSITION                   0x00000006
#define __C1INTE__WAKIE__MASK                       0x00000040
#define __C1INTE__WAKIE__LENGTH                     0x00000001

#define __C1INTE__IVRIE__POSITION                   0x00000007
#define __C1INTE__IVRIE__MASK                       0x00000080
#define __C1INTE__IVRIE__LENGTH                     0x00000001

#define __C1EC__RERRCNT__POSITION                   0x00000000
#define __C1EC__RERRCNT__MASK                       0x000000FF
#define __C1EC__RERRCNT__LENGTH                     0x00000008

#define __C1EC__TERRCNT__POSITION                   0x00000008
#define __C1EC__TERRCNT__MASK                       0x0000FF00
#define __C1EC__TERRCNT__LENGTH                     0x00000008

#define __C1EC__RERRCNT0__POSITION                  0x00000000
#define __C1EC__RERRCNT0__MASK                      0x00000001
#define __C1EC__RERRCNT0__LENGTH                    0x00000001

#define __C1EC__RERRCNT1__POSITION                  0x00000001
#define __C1EC__RERRCNT1__MASK                      0x00000002
#define __C1EC__RERRCNT1__LENGTH                    0x00000001

#define __C1EC__RERRCNT2__POSITION                  0x00000002
#define __C1EC__RERRCNT2__MASK                      0x00000004
#define __C1EC__RERRCNT2__LENGTH                    0x00000001

#define __C1EC__RERRCNT3__POSITION                  0x00000003
#define __C1EC__RERRCNT3__MASK                      0x00000008
#define __C1EC__RERRCNT3__LENGTH                    0x00000001

#define __C1EC__RERRCNT4__POSITION                  0x00000004
#define __C1EC__RERRCNT4__MASK                      0x00000010
#define __C1EC__RERRCNT4__LENGTH                    0x00000001

#define __C1EC__RERRCNT5__POSITION                  0x00000005
#define __C1EC__RERRCNT5__MASK                      0x00000020
#define __C1EC__RERRCNT5__LENGTH                    0x00000001

#define __C1EC__RERRCNT6__POSITION                  0x00000006
#define __C1EC__RERRCNT6__MASK                      0x00000040
#define __C1EC__RERRCNT6__LENGTH                    0x00000001

#define __C1EC__RERRCNT7__POSITION                  0x00000007
#define __C1EC__RERRCNT7__MASK                      0x00000080
#define __C1EC__RERRCNT7__LENGTH                    0x00000001

#define __C1EC__TERRCNT0__POSITION                  0x00000008
#define __C1EC__TERRCNT0__MASK                      0x00000100
#define __C1EC__TERRCNT0__LENGTH                    0x00000001

#define __C1EC__TERRCNT1__POSITION                  0x00000009
#define __C1EC__TERRCNT1__MASK                      0x00000200
#define __C1EC__TERRCNT1__LENGTH                    0x00000001

#define __C1EC__TERRCNT2__POSITION                  0x0000000A
#define __C1EC__TERRCNT2__MASK                      0x00000400
#define __C1EC__TERRCNT2__LENGTH                    0x00000001

#define __C1EC__TERRCNT3__POSITION                  0x0000000B
#define __C1EC__TERRCNT3__MASK                      0x00000800
#define __C1EC__TERRCNT3__LENGTH                    0x00000001

#define __C1EC__TERRCNT4__POSITION                  0x0000000C
#define __C1EC__TERRCNT4__MASK                      0x00001000
#define __C1EC__TERRCNT4__LENGTH                    0x00000001

#define __C1EC__TERRCNT5__POSITION                  0x0000000D
#define __C1EC__TERRCNT5__MASK                      0x00002000
#define __C1EC__TERRCNT5__LENGTH                    0x00000001

#define __C1EC__TERRCNT6__POSITION                  0x0000000E
#define __C1EC__TERRCNT6__MASK                      0x00004000
#define __C1EC__TERRCNT6__LENGTH                    0x00000001

#define __C1EC__TERRCNT7__POSITION                  0x0000000F
#define __C1EC__TERRCNT7__MASK                      0x00008000
#define __C1EC__TERRCNT7__LENGTH                    0x00000001

#define __C1CFG1__BRP__POSITION                     0x00000000
#define __C1CFG1__BRP__MASK                         0x0000003F
#define __C1CFG1__BRP__LENGTH                       0x00000006

#define __C1CFG1__SJW__POSITION                     0x00000006
#define __C1CFG1__SJW__MASK                         0x000000C0
#define __C1CFG1__SJW__LENGTH                       0x00000002

#define __C1CFG1__BRP0__POSITION                    0x00000000
#define __C1CFG1__BRP0__MASK                        0x00000001
#define __C1CFG1__BRP0__LENGTH                      0x00000001

#define __C1CFG1__BRP1__POSITION                    0x00000001
#define __C1CFG1__BRP1__MASK                        0x00000002
#define __C1CFG1__BRP1__LENGTH                      0x00000001

#define __C1CFG1__BRP2__POSITION                    0x00000002
#define __C1CFG1__BRP2__MASK                        0x00000004
#define __C1CFG1__BRP2__LENGTH                      0x00000001

#define __C1CFG1__BRP3__POSITION                    0x00000003
#define __C1CFG1__BRP3__MASK                        0x00000008
#define __C1CFG1__BRP3__LENGTH                      0x00000001

#define __C1CFG1__BRP4__POSITION                    0x00000004
#define __C1CFG1__BRP4__MASK                        0x00000010
#define __C1CFG1__BRP4__LENGTH                      0x00000001

#define __C1CFG1__BRP5__POSITION                    0x00000005
#define __C1CFG1__BRP5__MASK                        0x00000020
#define __C1CFG1__BRP5__LENGTH                      0x00000001

#define __C1CFG1__SJW0__POSITION                    0x00000006
#define __C1CFG1__SJW0__MASK                        0x00000040
#define __C1CFG1__SJW0__LENGTH                      0x00000001

#define __C1CFG1__SJW1__POSITION                    0x00000007
#define __C1CFG1__SJW1__MASK                        0x00000080
#define __C1CFG1__SJW1__LENGTH                      0x00000001

#define __C1CFG2__PRSEG__POSITION                   0x00000000
#define __C1CFG2__PRSEG__MASK                       0x00000007
#define __C1CFG2__PRSEG__LENGTH                     0x00000003

#define __C1CFG2__SEG1PH__POSITION                  0x00000003
#define __C1CFG2__SEG1PH__MASK                      0x00000038
#define __C1CFG2__SEG1PH__LENGTH                    0x00000003

#define __C1CFG2__SAM__POSITION                     0x00000006
#define __C1CFG2__SAM__MASK                         0x00000040
#define __C1CFG2__SAM__LENGTH                       0x00000001

#define __C1CFG2__SEG2PHTS__POSITION                0x00000007
#define __C1CFG2__SEG2PHTS__MASK                    0x00000080
#define __C1CFG2__SEG2PHTS__LENGTH                  0x00000001

#define __C1CFG2__SEG2PH__POSITION                  0x00000008
#define __C1CFG2__SEG2PH__MASK                      0x00000700
#define __C1CFG2__SEG2PH__LENGTH                    0x00000003

#define __C1CFG2__WAKFIL__POSITION                  0x0000000E
#define __C1CFG2__WAKFIL__MASK                      0x00004000
#define __C1CFG2__WAKFIL__LENGTH                    0x00000001

#define __C1CFG2__PRSEG0__POSITION                  0x00000000
#define __C1CFG2__PRSEG0__MASK                      0x00000001
#define __C1CFG2__PRSEG0__LENGTH                    0x00000001

#define __C1CFG2__PRSEG1__POSITION                  0x00000001
#define __C1CFG2__PRSEG1__MASK                      0x00000002
#define __C1CFG2__PRSEG1__LENGTH                    0x00000001

#define __C1CFG2__PRSEG2__POSITION                  0x00000002
#define __C1CFG2__PRSEG2__MASK                      0x00000004
#define __C1CFG2__PRSEG2__LENGTH                    0x00000001

#define __C1CFG2__SEG1PH0__POSITION                 0x00000003
#define __C1CFG2__SEG1PH0__MASK                     0x00000008
#define __C1CFG2__SEG1PH0__LENGTH                   0x00000001

#define __C1CFG2__SEG1PH1__POSITION                 0x00000004
#define __C1CFG2__SEG1PH1__MASK                     0x00000010
#define __C1CFG2__SEG1PH1__LENGTH                   0x00000001

#define __C1CFG2__SEG1PH2__POSITION                 0x00000005
#define __C1CFG2__SEG1PH2__MASK                     0x00000020
#define __C1CFG2__SEG1PH2__LENGTH                   0x00000001

#define __C1CFG2__SEG2PH0__POSITION                 0x00000008
#define __C1CFG2__SEG2PH0__MASK                     0x00000100
#define __C1CFG2__SEG2PH0__LENGTH                   0x00000001

#define __C1CFG2__SEG2PH1__POSITION                 0x00000009
#define __C1CFG2__SEG2PH1__MASK                     0x00000200
#define __C1CFG2__SEG2PH1__LENGTH                   0x00000001

#define __C1CFG2__SEG2PH2__POSITION                 0x0000000A
#define __C1CFG2__SEG2PH2__MASK                     0x00000400
#define __C1CFG2__SEG2PH2__LENGTH                   0x00000001

#define __C1FEN1__FLTEN__POSITION                   0x00000000
#define __C1FEN1__FLTEN__MASK                       0x0000FFFF
#define __C1FEN1__FLTEN__LENGTH                     0x00000010

#define __C1FEN1__FLTEN0__POSITION                  0x00000000
#define __C1FEN1__FLTEN0__MASK                      0x00000001
#define __C1FEN1__FLTEN0__LENGTH                    0x00000001

#define __C1FEN1__FLTEN1__POSITION                  0x00000001
#define __C1FEN1__FLTEN1__MASK                      0x00000002
#define __C1FEN1__FLTEN1__LENGTH                    0x00000001

#define __C1FEN1__FLTEN2__POSITION                  0x00000002
#define __C1FEN1__FLTEN2__MASK                      0x00000004
#define __C1FEN1__FLTEN2__LENGTH                    0x00000001

#define __C1FEN1__FLTEN3__POSITION                  0x00000003
#define __C1FEN1__FLTEN3__MASK                      0x00000008
#define __C1FEN1__FLTEN3__LENGTH                    0x00000001

#define __C1FEN1__FLTEN4__POSITION                  0x00000004
#define __C1FEN1__FLTEN4__MASK                      0x00000010
#define __C1FEN1__FLTEN4__LENGTH                    0x00000001

#define __C1FEN1__FLTEN5__POSITION                  0x00000005
#define __C1FEN1__FLTEN5__MASK                      0x00000020
#define __C1FEN1__FLTEN5__LENGTH                    0x00000001

#define __C1FEN1__FLTEN6__POSITION                  0x00000006
#define __C1FEN1__FLTEN6__MASK                      0x00000040
#define __C1FEN1__FLTEN6__LENGTH                    0x00000001

#define __C1FEN1__FLTEN7__POSITION                  0x00000007
#define __C1FEN1__FLTEN7__MASK                      0x00000080
#define __C1FEN1__FLTEN7__LENGTH                    0x00000001

#define __C1FEN1__FLTEN8__POSITION                  0x00000008
#define __C1FEN1__FLTEN8__MASK                      0x00000100
#define __C1FEN1__FLTEN8__LENGTH                    0x00000001

#define __C1FEN1__FLTEN9__POSITION                  0x00000009
#define __C1FEN1__FLTEN9__MASK                      0x00000200
#define __C1FEN1__FLTEN9__LENGTH                    0x00000001

#define __C1FEN1__FLTEN10__POSITION                 0x0000000A
#define __C1FEN1__FLTEN10__MASK                     0x00000400
#define __C1FEN1__FLTEN10__LENGTH                   0x00000001

#define __C1FEN1__FLTEN11__POSITION                 0x0000000B
#define __C1FEN1__FLTEN11__MASK                     0x00000800
#define __C1FEN1__FLTEN11__LENGTH                   0x00000001

#define __C1FEN1__FLTEN12__POSITION                 0x0000000C
#define __C1FEN1__FLTEN12__MASK                     0x00001000
#define __C1FEN1__FLTEN12__LENGTH                   0x00000001

#define __C1FEN1__FLTEN13__POSITION                 0x0000000D
#define __C1FEN1__FLTEN13__MASK                     0x00002000
#define __C1FEN1__FLTEN13__LENGTH                   0x00000001

#define __C1FEN1__FLTEN14__POSITION                 0x0000000E
#define __C1FEN1__FLTEN14__MASK                     0x00004000
#define __C1FEN1__FLTEN14__LENGTH                   0x00000001

#define __C1FEN1__FLTEN15__POSITION                 0x0000000F
#define __C1FEN1__FLTEN15__MASK                     0x00008000
#define __C1FEN1__FLTEN15__LENGTH                   0x00000001

#define __C1FMSKSEL1__F0MSK__POSITION               0x00000000
#define __C1FMSKSEL1__F0MSK__MASK                   0x00000003
#define __C1FMSKSEL1__F0MSK__LENGTH                 0x00000002

#define __C1FMSKSEL1__F1MSK__POSITION               0x00000002
#define __C1FMSKSEL1__F1MSK__MASK                   0x0000000C
#define __C1FMSKSEL1__F1MSK__LENGTH                 0x00000002

#define __C1FMSKSEL1__F2MSK__POSITION               0x00000004
#define __C1FMSKSEL1__F2MSK__MASK                   0x00000030
#define __C1FMSKSEL1__F2MSK__LENGTH                 0x00000002

#define __C1FMSKSEL1__F3MSK__POSITION               0x00000006
#define __C1FMSKSEL1__F3MSK__MASK                   0x000000C0
#define __C1FMSKSEL1__F3MSK__LENGTH                 0x00000002

#define __C1FMSKSEL1__F4MSK__POSITION               0x00000008
#define __C1FMSKSEL1__F4MSK__MASK                   0x00000300
#define __C1FMSKSEL1__F4MSK__LENGTH                 0x00000002

#define __C1FMSKSEL1__F5MSK__POSITION               0x0000000A
#define __C1FMSKSEL1__F5MSK__MASK                   0x00000C00
#define __C1FMSKSEL1__F5MSK__LENGTH                 0x00000002

#define __C1FMSKSEL1__F6MSK__POSITION               0x0000000C
#define __C1FMSKSEL1__F6MSK__MASK                   0x00003000
#define __C1FMSKSEL1__F6MSK__LENGTH                 0x00000002

#define __C1FMSKSEL1__F7MSK__POSITION               0x0000000E
#define __C1FMSKSEL1__F7MSK__MASK                   0x0000C000
#define __C1FMSKSEL1__F7MSK__LENGTH                 0x00000002

#define __C1FMSKSEL1__F0MSK0__POSITION              0x00000000
#define __C1FMSKSEL1__F0MSK0__MASK                  0x00000001
#define __C1FMSKSEL1__F0MSK0__LENGTH                0x00000001

#define __C1FMSKSEL1__F0MSK1__POSITION              0x00000001
#define __C1FMSKSEL1__F0MSK1__MASK                  0x00000002
#define __C1FMSKSEL1__F0MSK1__LENGTH                0x00000001

#define __C1FMSKSEL1__F1MSK0__POSITION              0x00000002
#define __C1FMSKSEL1__F1MSK0__MASK                  0x00000004
#define __C1FMSKSEL1__F1MSK0__LENGTH                0x00000001

#define __C1FMSKSEL1__F1MSK1__POSITION              0x00000003
#define __C1FMSKSEL1__F1MSK1__MASK                  0x00000008
#define __C1FMSKSEL1__F1MSK1__LENGTH                0x00000001

#define __C1FMSKSEL1__F2MSK0__POSITION              0x00000004
#define __C1FMSKSEL1__F2MSK0__MASK                  0x00000010
#define __C1FMSKSEL1__F2MSK0__LENGTH                0x00000001

#define __C1FMSKSEL1__F2MSK1__POSITION              0x00000005
#define __C1FMSKSEL1__F2MSK1__MASK                  0x00000020
#define __C1FMSKSEL1__F2MSK1__LENGTH                0x00000001

#define __C1FMSKSEL1__F3MSK0__POSITION              0x00000006
#define __C1FMSKSEL1__F3MSK0__MASK                  0x00000040
#define __C1FMSKSEL1__F3MSK0__LENGTH                0x00000001

#define __C1FMSKSEL1__F3MSK1__POSITION              0x00000007
#define __C1FMSKSEL1__F3MSK1__MASK                  0x00000080
#define __C1FMSKSEL1__F3MSK1__LENGTH                0x00000001

#define __C1FMSKSEL1__F4MSK0__POSITION              0x00000008
#define __C1FMSKSEL1__F4MSK0__MASK                  0x00000100
#define __C1FMSKSEL1__F4MSK0__LENGTH                0x00000001

#define __C1FMSKSEL1__F4MSK1__POSITION              0x00000009
#define __C1FMSKSEL1__F4MSK1__MASK                  0x00000200
#define __C1FMSKSEL1__F4MSK1__LENGTH                0x00000001

#define __C1FMSKSEL1__F5MSK0__POSITION              0x0000000A
#define __C1FMSKSEL1__F5MSK0__MASK                  0x00000400
#define __C1FMSKSEL1__F5MSK0__LENGTH                0x00000001

#define __C1FMSKSEL1__F5MSK1__POSITION              0x0000000B
#define __C1FMSKSEL1__F5MSK1__MASK                  0x00000800
#define __C1FMSKSEL1__F5MSK1__LENGTH                0x00000001

#define __C1FMSKSEL1__F6MSK0__POSITION              0x0000000C
#define __C1FMSKSEL1__F6MSK0__MASK                  0x00001000
#define __C1FMSKSEL1__F6MSK0__LENGTH                0x00000001

#define __C1FMSKSEL1__F6MSK1__POSITION              0x0000000D
#define __C1FMSKSEL1__F6MSK1__MASK                  0x00002000
#define __C1FMSKSEL1__F6MSK1__LENGTH                0x00000001

#define __C1FMSKSEL1__F7MSK0__POSITION              0x0000000E
#define __C1FMSKSEL1__F7MSK0__MASK                  0x00004000
#define __C1FMSKSEL1__F7MSK0__LENGTH                0x00000001

#define __C1FMSKSEL1__F7MSK1__POSITION              0x0000000F
#define __C1FMSKSEL1__F7MSK1__MASK                  0x00008000
#define __C1FMSKSEL1__F7MSK1__LENGTH                0x00000001

#define __C1FMSKSEL2__F8MSK__POSITION               0x00000000
#define __C1FMSKSEL2__F8MSK__MASK                   0x00000003
#define __C1FMSKSEL2__F8MSK__LENGTH                 0x00000002

#define __C1FMSKSEL2__F9MSK__POSITION               0x00000002
#define __C1FMSKSEL2__F9MSK__MASK                   0x0000000C
#define __C1FMSKSEL2__F9MSK__LENGTH                 0x00000002

#define __C1FMSKSEL2__F10MSK__POSITION              0x00000004
#define __C1FMSKSEL2__F10MSK__MASK                  0x00000030
#define __C1FMSKSEL2__F10MSK__LENGTH                0x00000002

#define __C1FMSKSEL2__F11MSK__POSITION              0x00000006
#define __C1FMSKSEL2__F11MSK__MASK                  0x000000C0
#define __C1FMSKSEL2__F11MSK__LENGTH                0x00000002

#define __C1FMSKSEL2__F12MSK__POSITION              0x00000008
#define __C1FMSKSEL2__F12MSK__MASK                  0x00000300
#define __C1FMSKSEL2__F12MSK__LENGTH                0x00000002

#define __C1FMSKSEL2__F13MSK__POSITION              0x0000000A
#define __C1FMSKSEL2__F13MSK__MASK                  0x00000C00
#define __C1FMSKSEL2__F13MSK__LENGTH                0x00000002

#define __C1FMSKSEL2__F14MSK__POSITION              0x0000000C
#define __C1FMSKSEL2__F14MSK__MASK                  0x00003000
#define __C1FMSKSEL2__F14MSK__LENGTH                0x00000002

#define __C1FMSKSEL2__F15MSK__POSITION              0x0000000E
#define __C1FMSKSEL2__F15MSK__MASK                  0x0000C000
#define __C1FMSKSEL2__F15MSK__LENGTH                0x00000002

#define __C1FMSKSEL2__F8MSK0__POSITION              0x00000000
#define __C1FMSKSEL2__F8MSK0__MASK                  0x00000001
#define __C1FMSKSEL2__F8MSK0__LENGTH                0x00000001

#define __C1FMSKSEL2__F8MSK1__POSITION              0x00000001
#define __C1FMSKSEL2__F8MSK1__MASK                  0x00000002
#define __C1FMSKSEL2__F8MSK1__LENGTH                0x00000001

#define __C1FMSKSEL2__F9MSK0__POSITION              0x00000002
#define __C1FMSKSEL2__F9MSK0__MASK                  0x00000004
#define __C1FMSKSEL2__F9MSK0__LENGTH                0x00000001

#define __C1FMSKSEL2__F9MSK1__POSITION              0x00000003
#define __C1FMSKSEL2__F9MSK1__MASK                  0x00000008
#define __C1FMSKSEL2__F9MSK1__LENGTH                0x00000001

#define __C1FMSKSEL2__F10MSK0__POSITION             0x00000004
#define __C1FMSKSEL2__F10MSK0__MASK                 0x00000010
#define __C1FMSKSEL2__F10MSK0__LENGTH               0x00000001

#define __C1FMSKSEL2__F10MSK1__POSITION             0x00000005
#define __C1FMSKSEL2__F10MSK1__MASK                 0x00000020
#define __C1FMSKSEL2__F10MSK1__LENGTH               0x00000001

#define __C1FMSKSEL2__F11MSK0__POSITION             0x00000006
#define __C1FMSKSEL2__F11MSK0__MASK                 0x00000040
#define __C1FMSKSEL2__F11MSK0__LENGTH               0x00000001

#define __C1FMSKSEL2__F11MSK1__POSITION             0x00000007
#define __C1FMSKSEL2__F11MSK1__MASK                 0x00000080
#define __C1FMSKSEL2__F11MSK1__LENGTH               0x00000001

#define __C1FMSKSEL2__F12MSK0__POSITION             0x00000008
#define __C1FMSKSEL2__F12MSK0__MASK                 0x00000100
#define __C1FMSKSEL2__F12MSK0__LENGTH               0x00000001

#define __C1FMSKSEL2__F12MSK1__POSITION             0x00000009
#define __C1FMSKSEL2__F12MSK1__MASK                 0x00000200
#define __C1FMSKSEL2__F12MSK1__LENGTH               0x00000001

#define __C1FMSKSEL2__F13MSK0__POSITION             0x0000000A
#define __C1FMSKSEL2__F13MSK0__MASK                 0x00000400
#define __C1FMSKSEL2__F13MSK0__LENGTH               0x00000001

#define __C1FMSKSEL2__F13MSK1__POSITION             0x0000000B
#define __C1FMSKSEL2__F13MSK1__MASK                 0x00000800
#define __C1FMSKSEL2__F13MSK1__LENGTH               0x00000001

#define __C1FMSKSEL2__F14MSK0__POSITION             0x0000000C
#define __C1FMSKSEL2__F14MSK0__MASK                 0x00001000
#define __C1FMSKSEL2__F14MSK0__LENGTH               0x00000001

#define __C1FMSKSEL2__F14MSK1__POSITION             0x0000000D
#define __C1FMSKSEL2__F14MSK1__MASK                 0x00002000
#define __C1FMSKSEL2__F14MSK1__LENGTH               0x00000001

#define __C1FMSKSEL2__F15MSK0__POSITION             0x0000000E
#define __C1FMSKSEL2__F15MSK0__MASK                 0x00004000
#define __C1FMSKSEL2__F15MSK0__LENGTH               0x00000001

#define __C1FMSKSEL2__F15MSK1__POSITION             0x0000000F
#define __C1FMSKSEL2__F15MSK1__MASK                 0x00008000
#define __C1FMSKSEL2__F15MSK1__LENGTH               0x00000001

#define __C1BUFPNT1__F0BP__POSITION                 0x00000000
#define __C1BUFPNT1__F0BP__MASK                     0x0000000F
#define __C1BUFPNT1__F0BP__LENGTH                   0x00000004

#define __C1BUFPNT1__F1BP__POSITION                 0x00000004
#define __C1BUFPNT1__F1BP__MASK                     0x000000F0
#define __C1BUFPNT1__F1BP__LENGTH                   0x00000004

#define __C1BUFPNT1__F2BP__POSITION                 0x00000008
#define __C1BUFPNT1__F2BP__MASK                     0x00000F00
#define __C1BUFPNT1__F2BP__LENGTH                   0x00000004

#define __C1BUFPNT1__F3BP__POSITION                 0x0000000C
#define __C1BUFPNT1__F3BP__MASK                     0x0000F000
#define __C1BUFPNT1__F3BP__LENGTH                   0x00000004

#define __C1BUFPNT1__F0BP0__POSITION                0x00000000
#define __C1BUFPNT1__F0BP0__MASK                    0x00000001
#define __C1BUFPNT1__F0BP0__LENGTH                  0x00000001

#define __C1BUFPNT1__F0BP1__POSITION                0x00000001
#define __C1BUFPNT1__F0BP1__MASK                    0x00000002
#define __C1BUFPNT1__F0BP1__LENGTH                  0x00000001

#define __C1BUFPNT1__F0BP2__POSITION                0x00000002
#define __C1BUFPNT1__F0BP2__MASK                    0x00000004
#define __C1BUFPNT1__F0BP2__LENGTH                  0x00000001

#define __C1BUFPNT1__F0BP3__POSITION                0x00000003
#define __C1BUFPNT1__F0BP3__MASK                    0x00000008
#define __C1BUFPNT1__F0BP3__LENGTH                  0x00000001

#define __C1BUFPNT1__F1BP0__POSITION                0x00000004
#define __C1BUFPNT1__F1BP0__MASK                    0x00000010
#define __C1BUFPNT1__F1BP0__LENGTH                  0x00000001

#define __C1BUFPNT1__F1BP1__POSITION                0x00000005
#define __C1BUFPNT1__F1BP1__MASK                    0x00000020
#define __C1BUFPNT1__F1BP1__LENGTH                  0x00000001

#define __C1BUFPNT1__F1BP2__POSITION                0x00000006
#define __C1BUFPNT1__F1BP2__MASK                    0x00000040
#define __C1BUFPNT1__F1BP2__LENGTH                  0x00000001

#define __C1BUFPNT1__F1BP3__POSITION                0x00000007
#define __C1BUFPNT1__F1BP3__MASK                    0x00000080
#define __C1BUFPNT1__F1BP3__LENGTH                  0x00000001

#define __C1BUFPNT1__F2BP0__POSITION                0x00000008
#define __C1BUFPNT1__F2BP0__MASK                    0x00000100
#define __C1BUFPNT1__F2BP0__LENGTH                  0x00000001

#define __C1BUFPNT1__F2BP1__POSITION                0x00000009
#define __C1BUFPNT1__F2BP1__MASK                    0x00000200
#define __C1BUFPNT1__F2BP1__LENGTH                  0x00000001

#define __C1BUFPNT1__F2BP2__POSITION                0x0000000A
#define __C1BUFPNT1__F2BP2__MASK                    0x00000400
#define __C1BUFPNT1__F2BP2__LENGTH                  0x00000001

#define __C1BUFPNT1__F2BP3__POSITION                0x0000000B
#define __C1BUFPNT1__F2BP3__MASK                    0x00000800
#define __C1BUFPNT1__F2BP3__LENGTH                  0x00000001

#define __C1BUFPNT1__F3BP0__POSITION                0x0000000C
#define __C1BUFPNT1__F3BP0__MASK                    0x00001000
#define __C1BUFPNT1__F3BP0__LENGTH                  0x00000001

#define __C1BUFPNT1__F3BP1__POSITION                0x0000000D
#define __C1BUFPNT1__F3BP1__MASK                    0x00002000
#define __C1BUFPNT1__F3BP1__LENGTH                  0x00000001

#define __C1BUFPNT1__F3BP2__POSITION                0x0000000E
#define __C1BUFPNT1__F3BP2__MASK                    0x00004000
#define __C1BUFPNT1__F3BP2__LENGTH                  0x00000001

#define __C1BUFPNT1__F3BP3__POSITION                0x0000000F
#define __C1BUFPNT1__F3BP3__MASK                    0x00008000
#define __C1BUFPNT1__F3BP3__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL0__POSITION                0x00000000
#define __C1RXFUL1__RXFUL0__MASK                    0x00000001
#define __C1RXFUL1__RXFUL0__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL1__POSITION                0x00000001
#define __C1RXFUL1__RXFUL1__MASK                    0x00000002
#define __C1RXFUL1__RXFUL1__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL2__POSITION                0x00000002
#define __C1RXFUL1__RXFUL2__MASK                    0x00000004
#define __C1RXFUL1__RXFUL2__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL3__POSITION                0x00000003
#define __C1RXFUL1__RXFUL3__MASK                    0x00000008
#define __C1RXFUL1__RXFUL3__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL4__POSITION                0x00000004
#define __C1RXFUL1__RXFUL4__MASK                    0x00000010
#define __C1RXFUL1__RXFUL4__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL5__POSITION                0x00000005
#define __C1RXFUL1__RXFUL5__MASK                    0x00000020
#define __C1RXFUL1__RXFUL5__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL6__POSITION                0x00000006
#define __C1RXFUL1__RXFUL6__MASK                    0x00000040
#define __C1RXFUL1__RXFUL6__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL7__POSITION                0x00000007
#define __C1RXFUL1__RXFUL7__MASK                    0x00000080
#define __C1RXFUL1__RXFUL7__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL8__POSITION                0x00000008
#define __C1RXFUL1__RXFUL8__MASK                    0x00000100
#define __C1RXFUL1__RXFUL8__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL9__POSITION                0x00000009
#define __C1RXFUL1__RXFUL9__MASK                    0x00000200
#define __C1RXFUL1__RXFUL9__LENGTH                  0x00000001

#define __C1RXFUL1__RXFUL10__POSITION               0x0000000A
#define __C1RXFUL1__RXFUL10__MASK                   0x00000400
#define __C1RXFUL1__RXFUL10__LENGTH                 0x00000001

#define __C1RXFUL1__RXFUL11__POSITION               0x0000000B
#define __C1RXFUL1__RXFUL11__MASK                   0x00000800
#define __C1RXFUL1__RXFUL11__LENGTH                 0x00000001

#define __C1RXFUL1__RXFUL12__POSITION               0x0000000C
#define __C1RXFUL1__RXFUL12__MASK                   0x00001000
#define __C1RXFUL1__RXFUL12__LENGTH                 0x00000001

#define __C1RXFUL1__RXFUL13__POSITION               0x0000000D
#define __C1RXFUL1__RXFUL13__MASK                   0x00002000
#define __C1RXFUL1__RXFUL13__LENGTH                 0x00000001

#define __C1RXFUL1__RXFUL14__POSITION               0x0000000E
#define __C1RXFUL1__RXFUL14__MASK                   0x00004000
#define __C1RXFUL1__RXFUL14__LENGTH                 0x00000001

#define __C1RXFUL1__RXFUL15__POSITION               0x0000000F
#define __C1RXFUL1__RXFUL15__MASK                   0x00008000
#define __C1RXFUL1__RXFUL15__LENGTH                 0x00000001

#define __C1BUFPNT2__F4BP__POSITION                 0x00000000
#define __C1BUFPNT2__F4BP__MASK                     0x0000000F
#define __C1BUFPNT2__F4BP__LENGTH                   0x00000004

#define __C1BUFPNT2__F5BP__POSITION                 0x00000004
#define __C1BUFPNT2__F5BP__MASK                     0x000000F0
#define __C1BUFPNT2__F5BP__LENGTH                   0x00000004

#define __C1BUFPNT2__F6BP__POSITION                 0x00000008
#define __C1BUFPNT2__F6BP__MASK                     0x00000F00
#define __C1BUFPNT2__F6BP__LENGTH                   0x00000004

#define __C1BUFPNT2__F7BP__POSITION                 0x0000000C
#define __C1BUFPNT2__F7BP__MASK                     0x0000F000
#define __C1BUFPNT2__F7BP__LENGTH                   0x00000004

#define __C1BUFPNT2__F4BP0__POSITION                0x00000000
#define __C1BUFPNT2__F4BP0__MASK                    0x00000001
#define __C1BUFPNT2__F4BP0__LENGTH                  0x00000001

#define __C1BUFPNT2__F4BP1__POSITION                0x00000001
#define __C1BUFPNT2__F4BP1__MASK                    0x00000002
#define __C1BUFPNT2__F4BP1__LENGTH                  0x00000001

#define __C1BUFPNT2__F4BP2__POSITION                0x00000002
#define __C1BUFPNT2__F4BP2__MASK                    0x00000004
#define __C1BUFPNT2__F4BP2__LENGTH                  0x00000001

#define __C1BUFPNT2__F4BP3__POSITION                0x00000003
#define __C1BUFPNT2__F4BP3__MASK                    0x00000008
#define __C1BUFPNT2__F4BP3__LENGTH                  0x00000001

#define __C1BUFPNT2__F5BP0__POSITION                0x00000004
#define __C1BUFPNT2__F5BP0__MASK                    0x00000010
#define __C1BUFPNT2__F5BP0__LENGTH                  0x00000001

#define __C1BUFPNT2__F5BP1__POSITION                0x00000005
#define __C1BUFPNT2__F5BP1__MASK                    0x00000020
#define __C1BUFPNT2__F5BP1__LENGTH                  0x00000001

#define __C1BUFPNT2__F5BP2__POSITION                0x00000006
#define __C1BUFPNT2__F5BP2__MASK                    0x00000040
#define __C1BUFPNT2__F5BP2__LENGTH                  0x00000001

#define __C1BUFPNT2__F5BP3__POSITION                0x00000007
#define __C1BUFPNT2__F5BP3__MASK                    0x00000080
#define __C1BUFPNT2__F5BP3__LENGTH                  0x00000001

#define __C1BUFPNT2__F6BP0__POSITION                0x00000008
#define __C1BUFPNT2__F6BP0__MASK                    0x00000100
#define __C1BUFPNT2__F6BP0__LENGTH                  0x00000001

#define __C1BUFPNT2__F6BP1__POSITION                0x00000009
#define __C1BUFPNT2__F6BP1__MASK                    0x00000200
#define __C1BUFPNT2__F6BP1__LENGTH                  0x00000001

#define __C1BUFPNT2__F6BP2__POSITION                0x0000000A
#define __C1BUFPNT2__F6BP2__MASK                    0x00000400
#define __C1BUFPNT2__F6BP2__LENGTH                  0x00000001

#define __C1BUFPNT2__F6BP3__POSITION                0x0000000B
#define __C1BUFPNT2__F6BP3__MASK                    0x00000800
#define __C1BUFPNT2__F6BP3__LENGTH                  0x00000001

#define __C1BUFPNT2__F7BP0__POSITION                0x0000000C
#define __C1BUFPNT2__F7BP0__MASK                    0x00001000
#define __C1BUFPNT2__F7BP0__LENGTH                  0x00000001

#define __C1BUFPNT2__F7BP1__POSITION                0x0000000D
#define __C1BUFPNT2__F7BP1__MASK                    0x00002000
#define __C1BUFPNT2__F7BP1__LENGTH                  0x00000001

#define __C1BUFPNT2__F7BP2__POSITION                0x0000000E
#define __C1BUFPNT2__F7BP2__MASK                    0x00004000
#define __C1BUFPNT2__F7BP2__LENGTH                  0x00000001

#define __C1BUFPNT2__F7BP3__POSITION                0x0000000F
#define __C1BUFPNT2__F7BP3__MASK                    0x00008000
#define __C1BUFPNT2__F7BP3__LENGTH                  0x00000001

#define __C1RXFUL2__RXFUL16__POSITION               0x00000000
#define __C1RXFUL2__RXFUL16__MASK                   0x00000001
#define __C1RXFUL2__RXFUL16__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL17__POSITION               0x00000001
#define __C1RXFUL2__RXFUL17__MASK                   0x00000002
#define __C1RXFUL2__RXFUL17__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL18__POSITION               0x00000002
#define __C1RXFUL2__RXFUL18__MASK                   0x00000004
#define __C1RXFUL2__RXFUL18__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL19__POSITION               0x00000003
#define __C1RXFUL2__RXFUL19__MASK                   0x00000008
#define __C1RXFUL2__RXFUL19__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL20__POSITION               0x00000004
#define __C1RXFUL2__RXFUL20__MASK                   0x00000010
#define __C1RXFUL2__RXFUL20__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL21__POSITION               0x00000005
#define __C1RXFUL2__RXFUL21__MASK                   0x00000020
#define __C1RXFUL2__RXFUL21__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL22__POSITION               0x00000006
#define __C1RXFUL2__RXFUL22__MASK                   0x00000040
#define __C1RXFUL2__RXFUL22__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL23__POSITION               0x00000007
#define __C1RXFUL2__RXFUL23__MASK                   0x00000080
#define __C1RXFUL2__RXFUL23__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL24__POSITION               0x00000008
#define __C1RXFUL2__RXFUL24__MASK                   0x00000100
#define __C1RXFUL2__RXFUL24__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL25__POSITION               0x00000009
#define __C1RXFUL2__RXFUL25__MASK                   0x00000200
#define __C1RXFUL2__RXFUL25__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL26__POSITION               0x0000000A
#define __C1RXFUL2__RXFUL26__MASK                   0x00000400
#define __C1RXFUL2__RXFUL26__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL27__POSITION               0x0000000B
#define __C1RXFUL2__RXFUL27__MASK                   0x00000800
#define __C1RXFUL2__RXFUL27__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL28__POSITION               0x0000000C
#define __C1RXFUL2__RXFUL28__MASK                   0x00001000
#define __C1RXFUL2__RXFUL28__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL29__POSITION               0x0000000D
#define __C1RXFUL2__RXFUL29__MASK                   0x00002000
#define __C1RXFUL2__RXFUL29__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL30__POSITION               0x0000000E
#define __C1RXFUL2__RXFUL30__MASK                   0x00004000
#define __C1RXFUL2__RXFUL30__LENGTH                 0x00000001

#define __C1RXFUL2__RXFUL31__POSITION               0x0000000F
#define __C1RXFUL2__RXFUL31__MASK                   0x00008000
#define __C1RXFUL2__RXFUL31__LENGTH                 0x00000001

#define __C1BUFPNT3__F8BP__POSITION                 0x00000000
#define __C1BUFPNT3__F8BP__MASK                     0x0000000F
#define __C1BUFPNT3__F8BP__LENGTH                   0x00000004

#define __C1BUFPNT3__F9BP__POSITION                 0x00000004
#define __C1BUFPNT3__F9BP__MASK                     0x000000F0
#define __C1BUFPNT3__F9BP__LENGTH                   0x00000004

#define __C1BUFPNT3__F10BP__POSITION                0x00000008
#define __C1BUFPNT3__F10BP__MASK                    0x00000F00
#define __C1BUFPNT3__F10BP__LENGTH                  0x00000004

#define __C1BUFPNT3__F11BP__POSITION                0x0000000C
#define __C1BUFPNT3__F11BP__MASK                    0x0000F000
#define __C1BUFPNT3__F11BP__LENGTH                  0x00000004

#define __C1BUFPNT3__F8BP0__POSITION                0x00000000
#define __C1BUFPNT3__F8BP0__MASK                    0x00000001
#define __C1BUFPNT3__F8BP0__LENGTH                  0x00000001

#define __C1BUFPNT3__F8BP1__POSITION                0x00000001
#define __C1BUFPNT3__F8BP1__MASK                    0x00000002
#define __C1BUFPNT3__F8BP1__LENGTH                  0x00000001

#define __C1BUFPNT3__F8BP2__POSITION                0x00000002
#define __C1BUFPNT3__F8BP2__MASK                    0x00000004
#define __C1BUFPNT3__F8BP2__LENGTH                  0x00000001

#define __C1BUFPNT3__F8BP3__POSITION                0x00000003
#define __C1BUFPNT3__F8BP3__MASK                    0x00000008
#define __C1BUFPNT3__F8BP3__LENGTH                  0x00000001

#define __C1BUFPNT3__F9BP0__POSITION                0x00000004
#define __C1BUFPNT3__F9BP0__MASK                    0x00000010
#define __C1BUFPNT3__F9BP0__LENGTH                  0x00000001

#define __C1BUFPNT3__F9BP1__POSITION                0x00000005
#define __C1BUFPNT3__F9BP1__MASK                    0x00000020
#define __C1BUFPNT3__F9BP1__LENGTH                  0x00000001

#define __C1BUFPNT3__F9BP2__POSITION                0x00000006
#define __C1BUFPNT3__F9BP2__MASK                    0x00000040
#define __C1BUFPNT3__F9BP2__LENGTH                  0x00000001

#define __C1BUFPNT3__F9BP3__POSITION                0x00000007
#define __C1BUFPNT3__F9BP3__MASK                    0x00000080
#define __C1BUFPNT3__F9BP3__LENGTH                  0x00000001

#define __C1BUFPNT3__F10BP0__POSITION               0x00000008
#define __C1BUFPNT3__F10BP0__MASK                   0x00000100
#define __C1BUFPNT3__F10BP0__LENGTH                 0x00000001

#define __C1BUFPNT3__F10BP1__POSITION               0x00000009
#define __C1BUFPNT3__F10BP1__MASK                   0x00000200
#define __C1BUFPNT3__F10BP1__LENGTH                 0x00000001

#define __C1BUFPNT3__F10BP2__POSITION               0x0000000A
#define __C1BUFPNT3__F10BP2__MASK                   0x00000400
#define __C1BUFPNT3__F10BP2__LENGTH                 0x00000001

#define __C1BUFPNT3__F10BP3__POSITION               0x0000000B
#define __C1BUFPNT3__F10BP3__MASK                   0x00000800
#define __C1BUFPNT3__F10BP3__LENGTH                 0x00000001

#define __C1BUFPNT3__F11BP0__POSITION               0x0000000C
#define __C1BUFPNT3__F11BP0__MASK                   0x00001000
#define __C1BUFPNT3__F11BP0__LENGTH                 0x00000001

#define __C1BUFPNT3__F11BP1__POSITION               0x0000000D
#define __C1BUFPNT3__F11BP1__MASK                   0x00002000
#define __C1BUFPNT3__F11BP1__LENGTH                 0x00000001

#define __C1BUFPNT3__F11BP2__POSITION               0x0000000E
#define __C1BUFPNT3__F11BP2__MASK                   0x00004000
#define __C1BUFPNT3__F11BP2__LENGTH                 0x00000001

#define __C1BUFPNT3__F11BP3__POSITION               0x0000000F
#define __C1BUFPNT3__F11BP3__MASK                   0x00008000
#define __C1BUFPNT3__F11BP3__LENGTH                 0x00000001

#define __C1BUFPNT4__F12BP__POSITION                0x00000000
#define __C1BUFPNT4__F12BP__MASK                    0x0000000F
#define __C1BUFPNT4__F12BP__LENGTH                  0x00000004

#define __C1BUFPNT4__F13BP__POSITION                0x00000004
#define __C1BUFPNT4__F13BP__MASK                    0x000000F0
#define __C1BUFPNT4__F13BP__LENGTH                  0x00000004

#define __C1BUFPNT4__F14BP__POSITION                0x00000008
#define __C1BUFPNT4__F14BP__MASK                    0x00000F00
#define __C1BUFPNT4__F14BP__LENGTH                  0x00000004

#define __C1BUFPNT4__F15BP__POSITION                0x0000000C
#define __C1BUFPNT4__F15BP__MASK                    0x0000F000
#define __C1BUFPNT4__F15BP__LENGTH                  0x00000004

#define __C1BUFPNT4__F12BP0__POSITION               0x00000000
#define __C1BUFPNT4__F12BP0__MASK                   0x00000001
#define __C1BUFPNT4__F12BP0__LENGTH                 0x00000001

#define __C1BUFPNT4__F12BP1__POSITION               0x00000001
#define __C1BUFPNT4__F12BP1__MASK                   0x00000002
#define __C1BUFPNT4__F12BP1__LENGTH                 0x00000001

#define __C1BUFPNT4__F12BP2__POSITION               0x00000002
#define __C1BUFPNT4__F12BP2__MASK                   0x00000004
#define __C1BUFPNT4__F12BP2__LENGTH                 0x00000001

#define __C1BUFPNT4__F12BP3__POSITION               0x00000003
#define __C1BUFPNT4__F12BP3__MASK                   0x00000008
#define __C1BUFPNT4__F12BP3__LENGTH                 0x00000001

#define __C1BUFPNT4__F13BP0__POSITION               0x00000004
#define __C1BUFPNT4__F13BP0__MASK                   0x00000010
#define __C1BUFPNT4__F13BP0__LENGTH                 0x00000001

#define __C1BUFPNT4__F13BP1__POSITION               0x00000005
#define __C1BUFPNT4__F13BP1__MASK                   0x00000020
#define __C1BUFPNT4__F13BP1__LENGTH                 0x00000001

#define __C1BUFPNT4__F13BP2__POSITION               0x00000006
#define __C1BUFPNT4__F13BP2__MASK                   0x00000040
#define __C1BUFPNT4__F13BP2__LENGTH                 0x00000001

#define __C1BUFPNT4__F13BP3__POSITION               0x00000007
#define __C1BUFPNT4__F13BP3__MASK                   0x00000080
#define __C1BUFPNT4__F13BP3__LENGTH                 0x00000001

#define __C1BUFPNT4__F14BP0__POSITION               0x00000008
#define __C1BUFPNT4__F14BP0__MASK                   0x00000100
#define __C1BUFPNT4__F14BP0__LENGTH                 0x00000001

#define __C1BUFPNT4__F14BP1__POSITION               0x00000009
#define __C1BUFPNT4__F14BP1__MASK                   0x00000200
#define __C1BUFPNT4__F14BP1__LENGTH                 0x00000001

#define __C1BUFPNT4__F14BP2__POSITION               0x0000000A
#define __C1BUFPNT4__F14BP2__MASK                   0x00000400
#define __C1BUFPNT4__F14BP2__LENGTH                 0x00000001

#define __C1BUFPNT4__F14BP3__POSITION               0x0000000B
#define __C1BUFPNT4__F14BP3__MASK                   0x00000800
#define __C1BUFPNT4__F14BP3__LENGTH                 0x00000001

#define __C1BUFPNT4__F15BP0__POSITION               0x0000000C
#define __C1BUFPNT4__F15BP0__MASK                   0x00001000
#define __C1BUFPNT4__F15BP0__LENGTH                 0x00000001

#define __C1BUFPNT4__F15BP1__POSITION               0x0000000D
#define __C1BUFPNT4__F15BP1__MASK                   0x00002000
#define __C1BUFPNT4__F15BP1__LENGTH                 0x00000001

#define __C1BUFPNT4__F15BP2__POSITION               0x0000000E
#define __C1BUFPNT4__F15BP2__MASK                   0x00004000
#define __C1BUFPNT4__F15BP2__LENGTH                 0x00000001

#define __C1BUFPNT4__F15BP3__POSITION               0x0000000F
#define __C1BUFPNT4__F15BP3__MASK                   0x00008000
#define __C1BUFPNT4__F15BP3__LENGTH                 0x00000001

#define __C1RXOVF1__RXOVF0__POSITION                0x00000000
#define __C1RXOVF1__RXOVF0__MASK                    0x00000001
#define __C1RXOVF1__RXOVF0__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF1__POSITION                0x00000001
#define __C1RXOVF1__RXOVF1__MASK                    0x00000002
#define __C1RXOVF1__RXOVF1__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF2__POSITION                0x00000002
#define __C1RXOVF1__RXOVF2__MASK                    0x00000004
#define __C1RXOVF1__RXOVF2__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF3__POSITION                0x00000003
#define __C1RXOVF1__RXOVF3__MASK                    0x00000008
#define __C1RXOVF1__RXOVF3__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF4__POSITION                0x00000004
#define __C1RXOVF1__RXOVF4__MASK                    0x00000010
#define __C1RXOVF1__RXOVF4__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF5__POSITION                0x00000005
#define __C1RXOVF1__RXOVF5__MASK                    0x00000020
#define __C1RXOVF1__RXOVF5__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF6__POSITION                0x00000006
#define __C1RXOVF1__RXOVF6__MASK                    0x00000040
#define __C1RXOVF1__RXOVF6__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF7__POSITION                0x00000007
#define __C1RXOVF1__RXOVF7__MASK                    0x00000080
#define __C1RXOVF1__RXOVF7__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF8__POSITION                0x00000008
#define __C1RXOVF1__RXOVF8__MASK                    0x00000100
#define __C1RXOVF1__RXOVF8__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF9__POSITION                0x00000009
#define __C1RXOVF1__RXOVF9__MASK                    0x00000200
#define __C1RXOVF1__RXOVF9__LENGTH                  0x00000001

#define __C1RXOVF1__RXOVF10__POSITION               0x0000000A
#define __C1RXOVF1__RXOVF10__MASK                   0x00000400
#define __C1RXOVF1__RXOVF10__LENGTH                 0x00000001

#define __C1RXOVF1__RXOVF11__POSITION               0x0000000B
#define __C1RXOVF1__RXOVF11__MASK                   0x00000800
#define __C1RXOVF1__RXOVF11__LENGTH                 0x00000001

#define __C1RXOVF1__RXOVF12__POSITION               0x0000000C
#define __C1RXOVF1__RXOVF12__MASK                   0x00001000
#define __C1RXOVF1__RXOVF12__LENGTH                 0x00000001

#define __C1RXOVF1__RXOVF13__POSITION               0x0000000D
#define __C1RXOVF1__RXOVF13__MASK                   0x00002000
#define __C1RXOVF1__RXOVF13__LENGTH                 0x00000001

#define __C1RXOVF1__RXOVF14__POSITION               0x0000000E
#define __C1RXOVF1__RXOVF14__MASK                   0x00004000
#define __C1RXOVF1__RXOVF14__LENGTH                 0x00000001

#define __C1RXOVF1__RXOVF15__POSITION               0x0000000F
#define __C1RXOVF1__RXOVF15__MASK                   0x00008000
#define __C1RXOVF1__RXOVF15__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF16__POSITION               0x00000000
#define __C1RXOVF2__RXOVF16__MASK                   0x00000001
#define __C1RXOVF2__RXOVF16__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF17__POSITION               0x00000001
#define __C1RXOVF2__RXOVF17__MASK                   0x00000002
#define __C1RXOVF2__RXOVF17__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF18__POSITION               0x00000002
#define __C1RXOVF2__RXOVF18__MASK                   0x00000004
#define __C1RXOVF2__RXOVF18__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF19__POSITION               0x00000003
#define __C1RXOVF2__RXOVF19__MASK                   0x00000008
#define __C1RXOVF2__RXOVF19__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF20__POSITION               0x00000004
#define __C1RXOVF2__RXOVF20__MASK                   0x00000010
#define __C1RXOVF2__RXOVF20__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF21__POSITION               0x00000005
#define __C1RXOVF2__RXOVF21__MASK                   0x00000020
#define __C1RXOVF2__RXOVF21__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF22__POSITION               0x00000006
#define __C1RXOVF2__RXOVF22__MASK                   0x00000040
#define __C1RXOVF2__RXOVF22__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF23__POSITION               0x00000007
#define __C1RXOVF2__RXOVF23__MASK                   0x00000080
#define __C1RXOVF2__RXOVF23__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF24__POSITION               0x00000008
#define __C1RXOVF2__RXOVF24__MASK                   0x00000100
#define __C1RXOVF2__RXOVF24__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF25__POSITION               0x00000009
#define __C1RXOVF2__RXOVF25__MASK                   0x00000200
#define __C1RXOVF2__RXOVF25__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF26__POSITION               0x0000000A
#define __C1RXOVF2__RXOVF26__MASK                   0x00000400
#define __C1RXOVF2__RXOVF26__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF27__POSITION               0x0000000B
#define __C1RXOVF2__RXOVF27__MASK                   0x00000800
#define __C1RXOVF2__RXOVF27__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF28__POSITION               0x0000000C
#define __C1RXOVF2__RXOVF28__MASK                   0x00001000
#define __C1RXOVF2__RXOVF28__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF29__POSITION               0x0000000D
#define __C1RXOVF2__RXOVF29__MASK                   0x00002000
#define __C1RXOVF2__RXOVF29__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF30__POSITION               0x0000000E
#define __C1RXOVF2__RXOVF30__MASK                   0x00004000
#define __C1RXOVF2__RXOVF30__LENGTH                 0x00000001

#define __C1RXOVF2__RXOVF31__POSITION               0x0000000F
#define __C1RXOVF2__RXOVF31__MASK                   0x00008000
#define __C1RXOVF2__RXOVF31__LENGTH                 0x00000001

#define __C1RXM0SID__EID16__POSITION                0x00000000
#define __C1RXM0SID__EID16__MASK                    0x00000001
#define __C1RXM0SID__EID16__LENGTH                  0x00000001

#define __C1RXM0SID__EID17__POSITION                0x00000001
#define __C1RXM0SID__EID17__MASK                    0x00000002
#define __C1RXM0SID__EID17__LENGTH                  0x00000001

#define __C1RXM0SID__MIDE__POSITION                 0x00000003
#define __C1RXM0SID__MIDE__MASK                     0x00000008
#define __C1RXM0SID__MIDE__LENGTH                   0x00000001

#define __C1RXM0SID__SID0__POSITION                 0x00000005
#define __C1RXM0SID__SID0__MASK                     0x00000020
#define __C1RXM0SID__SID0__LENGTH                   0x00000001

#define __C1RXM0SID__SID1__POSITION                 0x00000006
#define __C1RXM0SID__SID1__MASK                     0x00000040
#define __C1RXM0SID__SID1__LENGTH                   0x00000001

#define __C1RXM0SID__SID2__POSITION                 0x00000007
#define __C1RXM0SID__SID2__MASK                     0x00000080
#define __C1RXM0SID__SID2__LENGTH                   0x00000001

#define __C1RXM0SID__SID3__POSITION                 0x00000008
#define __C1RXM0SID__SID3__MASK                     0x00000100
#define __C1RXM0SID__SID3__LENGTH                   0x00000001

#define __C1RXM0SID__SID4__POSITION                 0x00000009
#define __C1RXM0SID__SID4__MASK                     0x00000200
#define __C1RXM0SID__SID4__LENGTH                   0x00000001

#define __C1RXM0SID__SID5__POSITION                 0x0000000A
#define __C1RXM0SID__SID5__MASK                     0x00000400
#define __C1RXM0SID__SID5__LENGTH                   0x00000001

#define __C1RXM0SID__SID6__POSITION                 0x0000000B
#define __C1RXM0SID__SID6__MASK                     0x00000800
#define __C1RXM0SID__SID6__LENGTH                   0x00000001

#define __C1RXM0SID__SID7__POSITION                 0x0000000C
#define __C1RXM0SID__SID7__MASK                     0x00001000
#define __C1RXM0SID__SID7__LENGTH                   0x00000001

#define __C1RXM0SID__SID8__POSITION                 0x0000000D
#define __C1RXM0SID__SID8__MASK                     0x00002000
#define __C1RXM0SID__SID8__LENGTH                   0x00000001

#define __C1RXM0SID__SID9__POSITION                 0x0000000E
#define __C1RXM0SID__SID9__MASK                     0x00004000
#define __C1RXM0SID__SID9__LENGTH                   0x00000001

#define __C1RXM0SID__SID10__POSITION                0x0000000F
#define __C1RXM0SID__SID10__MASK                    0x00008000
#define __C1RXM0SID__SID10__LENGTH                  0x00000001

#define __C1RXM0SID__EID__POSITION                  0x00000000
#define __C1RXM0SID__EID__MASK                      0x00000003
#define __C1RXM0SID__EID__LENGTH                    0x00000002

#define __C1RXM0SID__SID__POSITION                  0x00000005
#define __C1RXM0SID__SID__MASK                      0x0000FFE0
#define __C1RXM0SID__SID__LENGTH                    0x0000000B

#define __C1TR01CON__TX0PRI__POSITION               0x00000000
#define __C1TR01CON__TX0PRI__MASK                   0x00000003
#define __C1TR01CON__TX0PRI__LENGTH                 0x00000002

#define __C1TR01CON__RTREN0__POSITION               0x00000002
#define __C1TR01CON__RTREN0__MASK                   0x00000004
#define __C1TR01CON__RTREN0__LENGTH                 0x00000001

#define __C1TR01CON__TXREQ0__POSITION               0x00000003
#define __C1TR01CON__TXREQ0__MASK                   0x00000008
#define __C1TR01CON__TXREQ0__LENGTH                 0x00000001

#define __C1TR01CON__TXERR0__POSITION               0x00000004
#define __C1TR01CON__TXERR0__MASK                   0x00000010
#define __C1TR01CON__TXERR0__LENGTH                 0x00000001

#define __C1TR01CON__TXLARB0__POSITION              0x00000005
#define __C1TR01CON__TXLARB0__MASK                  0x00000020
#define __C1TR01CON__TXLARB0__LENGTH                0x00000001

#define __C1TR01CON__TXABT0__POSITION               0x00000006
#define __C1TR01CON__TXABT0__MASK                   0x00000040
#define __C1TR01CON__TXABT0__LENGTH                 0x00000001

#define __C1TR01CON__TXEN0__POSITION                0x00000007
#define __C1TR01CON__TXEN0__MASK                    0x00000080
#define __C1TR01CON__TXEN0__LENGTH                  0x00000001

#define __C1TR01CON__TX1PRI__POSITION               0x00000008
#define __C1TR01CON__TX1PRI__MASK                   0x00000300
#define __C1TR01CON__TX1PRI__LENGTH                 0x00000002

#define __C1TR01CON__RTREN1__POSITION               0x0000000A
#define __C1TR01CON__RTREN1__MASK                   0x00000400
#define __C1TR01CON__RTREN1__LENGTH                 0x00000001

#define __C1TR01CON__TXREQ1__POSITION               0x0000000B
#define __C1TR01CON__TXREQ1__MASK                   0x00000800
#define __C1TR01CON__TXREQ1__LENGTH                 0x00000001

#define __C1TR01CON__TXERR1__POSITION               0x0000000C
#define __C1TR01CON__TXERR1__MASK                   0x00001000
#define __C1TR01CON__TXERR1__LENGTH                 0x00000001

#define __C1TR01CON__TXLARB1__POSITION              0x0000000D
#define __C1TR01CON__TXLARB1__MASK                  0x00002000
#define __C1TR01CON__TXLARB1__LENGTH                0x00000001

#define __C1TR01CON__TXABT1__POSITION               0x0000000E
#define __C1TR01CON__TXABT1__MASK                   0x00004000
#define __C1TR01CON__TXABT1__LENGTH                 0x00000001

#define __C1TR01CON__TXEN1__POSITION                0x0000000F
#define __C1TR01CON__TXEN1__MASK                    0x00008000
#define __C1TR01CON__TXEN1__LENGTH                  0x00000001

#define __C1TR01CON__TX0PRI0__POSITION              0x00000000
#define __C1TR01CON__TX0PRI0__MASK                  0x00000001
#define __C1TR01CON__TX0PRI0__LENGTH                0x00000001

#define __C1TR01CON__TX0PRI1__POSITION              0x00000001
#define __C1TR01CON__TX0PRI1__MASK                  0x00000002
#define __C1TR01CON__TX0PRI1__LENGTH                0x00000001

#define __C1TR01CON__TX1PRI0__POSITION              0x00000008
#define __C1TR01CON__TX1PRI0__MASK                  0x00000100
#define __C1TR01CON__TX1PRI0__LENGTH                0x00000001

#define __C1TR01CON__TX1PRI1__POSITION              0x00000009
#define __C1TR01CON__TX1PRI1__MASK                  0x00000200
#define __C1TR01CON__TX1PRI1__LENGTH                0x00000001

#define __C1RXM0EID__EID0__POSITION                 0x00000000
#define __C1RXM0EID__EID0__MASK                     0x00000001
#define __C1RXM0EID__EID0__LENGTH                   0x00000001

#define __C1RXM0EID__EID1__POSITION                 0x00000001
#define __C1RXM0EID__EID1__MASK                     0x00000002
#define __C1RXM0EID__EID1__LENGTH                   0x00000001

#define __C1RXM0EID__EID2__POSITION                 0x00000002
#define __C1RXM0EID__EID2__MASK                     0x00000004
#define __C1RXM0EID__EID2__LENGTH                   0x00000001

#define __C1RXM0EID__EID3__POSITION                 0x00000003
#define __C1RXM0EID__EID3__MASK                     0x00000008
#define __C1RXM0EID__EID3__LENGTH                   0x00000001

#define __C1RXM0EID__EID4__POSITION                 0x00000004
#define __C1RXM0EID__EID4__MASK                     0x00000010
#define __C1RXM0EID__EID4__LENGTH                   0x00000001

#define __C1RXM0EID__EID5__POSITION                 0x00000005
#define __C1RXM0EID__EID5__MASK                     0x00000020
#define __C1RXM0EID__EID5__LENGTH                   0x00000001

#define __C1RXM0EID__EID6__POSITION                 0x00000006
#define __C1RXM0EID__EID6__MASK                     0x00000040
#define __C1RXM0EID__EID6__LENGTH                   0x00000001

#define __C1RXM0EID__EID7__POSITION                 0x00000007
#define __C1RXM0EID__EID7__MASK                     0x00000080
#define __C1RXM0EID__EID7__LENGTH                   0x00000001

#define __C1RXM0EID__EID8__POSITION                 0x00000008
#define __C1RXM0EID__EID8__MASK                     0x00000100
#define __C1RXM0EID__EID8__LENGTH                   0x00000001

#define __C1RXM0EID__EID9__POSITION                 0x00000009
#define __C1RXM0EID__EID9__MASK                     0x00000200
#define __C1RXM0EID__EID9__LENGTH                   0x00000001

#define __C1RXM0EID__EID10__POSITION                0x0000000A
#define __C1RXM0EID__EID10__MASK                    0x00000400
#define __C1RXM0EID__EID10__LENGTH                  0x00000001

#define __C1RXM0EID__EID11__POSITION                0x0000000B
#define __C1RXM0EID__EID11__MASK                    0x00000800
#define __C1RXM0EID__EID11__LENGTH                  0x00000001

#define __C1RXM0EID__EID12__POSITION                0x0000000C
#define __C1RXM0EID__EID12__MASK                    0x00001000
#define __C1RXM0EID__EID12__LENGTH                  0x00000001

#define __C1RXM0EID__EID13__POSITION                0x0000000D
#define __C1RXM0EID__EID13__MASK                    0x00002000
#define __C1RXM0EID__EID13__LENGTH                  0x00000001

#define __C1RXM0EID__EID14__POSITION                0x0000000E
#define __C1RXM0EID__EID14__MASK                    0x00004000
#define __C1RXM0EID__EID14__LENGTH                  0x00000001

#define __C1RXM0EID__EID15__POSITION                0x0000000F
#define __C1RXM0EID__EID15__MASK                    0x00008000
#define __C1RXM0EID__EID15__LENGTH                  0x00000001

#define __C1RXM0EID__EID__POSITION                  0x00000000
#define __C1RXM0EID__EID__MASK                      0x0000FFFF
#define __C1RXM0EID__EID__LENGTH                    0x00000010

#define __C1TR23CON__TX2PRI__POSITION               0x00000000
#define __C1TR23CON__TX2PRI__MASK                   0x00000003
#define __C1TR23CON__TX2PRI__LENGTH                 0x00000002

#define __C1TR23CON__RTREN2__POSITION               0x00000002
#define __C1TR23CON__RTREN2__MASK                   0x00000004
#define __C1TR23CON__RTREN2__LENGTH                 0x00000001

#define __C1TR23CON__TXREQ2__POSITION               0x00000003
#define __C1TR23CON__TXREQ2__MASK                   0x00000008
#define __C1TR23CON__TXREQ2__LENGTH                 0x00000001

#define __C1TR23CON__TXERR2__POSITION               0x00000004
#define __C1TR23CON__TXERR2__MASK                   0x00000010
#define __C1TR23CON__TXERR2__LENGTH                 0x00000001

#define __C1TR23CON__TXLARB2__POSITION              0x00000005
#define __C1TR23CON__TXLARB2__MASK                  0x00000020
#define __C1TR23CON__TXLARB2__LENGTH                0x00000001

#define __C1TR23CON__TXABT2__POSITION               0x00000006
#define __C1TR23CON__TXABT2__MASK                   0x00000040
#define __C1TR23CON__TXABT2__LENGTH                 0x00000001

#define __C1TR23CON__TXEN2__POSITION                0x00000007
#define __C1TR23CON__TXEN2__MASK                    0x00000080
#define __C1TR23CON__TXEN2__LENGTH                  0x00000001

#define __C1TR23CON__TX3PRI__POSITION               0x00000008
#define __C1TR23CON__TX3PRI__MASK                   0x00000300
#define __C1TR23CON__TX3PRI__LENGTH                 0x00000002

#define __C1TR23CON__RTREN3__POSITION               0x0000000A
#define __C1TR23CON__RTREN3__MASK                   0x00000400
#define __C1TR23CON__RTREN3__LENGTH                 0x00000001

#define __C1TR23CON__TXREQ3__POSITION               0x0000000B
#define __C1TR23CON__TXREQ3__MASK                   0x00000800
#define __C1TR23CON__TXREQ3__LENGTH                 0x00000001

#define __C1TR23CON__TXERR3__POSITION               0x0000000C
#define __C1TR23CON__TXERR3__MASK                   0x00001000
#define __C1TR23CON__TXERR3__LENGTH                 0x00000001

#define __C1TR23CON__TXLARB3__POSITION              0x0000000D
#define __C1TR23CON__TXLARB3__MASK                  0x00002000
#define __C1TR23CON__TXLARB3__LENGTH                0x00000001

#define __C1TR23CON__TXABT3__POSITION               0x0000000E
#define __C1TR23CON__TXABT3__MASK                   0x00004000
#define __C1TR23CON__TXABT3__LENGTH                 0x00000001

#define __C1TR23CON__TXEN3__POSITION                0x0000000F
#define __C1TR23CON__TXEN3__MASK                    0x00008000
#define __C1TR23CON__TXEN3__LENGTH                  0x00000001

#define __C1TR23CON__TX2PRI0__POSITION              0x00000000
#define __C1TR23CON__TX2PRI0__MASK                  0x00000001
#define __C1TR23CON__TX2PRI0__LENGTH                0x00000001

#define __C1TR23CON__TX2PRI1__POSITION              0x00000001
#define __C1TR23CON__TX2PRI1__MASK                  0x00000002
#define __C1TR23CON__TX2PRI1__LENGTH                0x00000001

#define __C1TR23CON__TX3PRI0__POSITION              0x00000008
#define __C1TR23CON__TX3PRI0__MASK                  0x00000100
#define __C1TR23CON__TX3PRI0__LENGTH                0x00000001

#define __C1TR23CON__TX3PRI1__POSITION              0x00000009
#define __C1TR23CON__TX3PRI1__MASK                  0x00000200
#define __C1TR23CON__TX3PRI1__LENGTH                0x00000001

#define __C1RXM1SID__EID16__POSITION                0x00000000
#define __C1RXM1SID__EID16__MASK                    0x00000001
#define __C1RXM1SID__EID16__LENGTH                  0x00000001

#define __C1RXM1SID__EID17__POSITION                0x00000001
#define __C1RXM1SID__EID17__MASK                    0x00000002
#define __C1RXM1SID__EID17__LENGTH                  0x00000001

#define __C1RXM1SID__MIDE__POSITION                 0x00000003
#define __C1RXM1SID__MIDE__MASK                     0x00000008
#define __C1RXM1SID__MIDE__LENGTH                   0x00000001

#define __C1RXM1SID__SID0__POSITION                 0x00000005
#define __C1RXM1SID__SID0__MASK                     0x00000020
#define __C1RXM1SID__SID0__LENGTH                   0x00000001

#define __C1RXM1SID__SID1__POSITION                 0x00000006
#define __C1RXM1SID__SID1__MASK                     0x00000040
#define __C1RXM1SID__SID1__LENGTH                   0x00000001

#define __C1RXM1SID__SID2__POSITION                 0x00000007
#define __C1RXM1SID__SID2__MASK                     0x00000080
#define __C1RXM1SID__SID2__LENGTH                   0x00000001

#define __C1RXM1SID__SID3__POSITION                 0x00000008
#define __C1RXM1SID__SID3__MASK                     0x00000100
#define __C1RXM1SID__SID3__LENGTH                   0x00000001

#define __C1RXM1SID__SID4__POSITION                 0x00000009
#define __C1RXM1SID__SID4__MASK                     0x00000200
#define __C1RXM1SID__SID4__LENGTH                   0x00000001

#define __C1RXM1SID__SID5__POSITION                 0x0000000A
#define __C1RXM1SID__SID5__MASK                     0x00000400
#define __C1RXM1SID__SID5__LENGTH                   0x00000001

#define __C1RXM1SID__SID6__POSITION                 0x0000000B
#define __C1RXM1SID__SID6__MASK                     0x00000800
#define __C1RXM1SID__SID6__LENGTH                   0x00000001

#define __C1RXM1SID__SID7__POSITION                 0x0000000C
#define __C1RXM1SID__SID7__MASK                     0x00001000
#define __C1RXM1SID__SID7__LENGTH                   0x00000001

#define __C1RXM1SID__SID8__POSITION                 0x0000000D
#define __C1RXM1SID__SID8__MASK                     0x00002000
#define __C1RXM1SID__SID8__LENGTH                   0x00000001

#define __C1RXM1SID__SID9__POSITION                 0x0000000E
#define __C1RXM1SID__SID9__MASK                     0x00004000
#define __C1RXM1SID__SID9__LENGTH                   0x00000001

#define __C1RXM1SID__SID10__POSITION                0x0000000F
#define __C1RXM1SID__SID10__MASK                    0x00008000
#define __C1RXM1SID__SID10__LENGTH                  0x00000001

#define __C1RXM1SID__EID__POSITION                  0x00000000
#define __C1RXM1SID__EID__MASK                      0x00000003
#define __C1RXM1SID__EID__LENGTH                    0x00000002

#define __C1RXM1SID__SID__POSITION                  0x00000005
#define __C1RXM1SID__SID__MASK                      0x0000FFE0
#define __C1RXM1SID__SID__LENGTH                    0x0000000B

#define __C1TR45CON__TX4PRI__POSITION               0x00000000
#define __C1TR45CON__TX4PRI__MASK                   0x00000003
#define __C1TR45CON__TX4PRI__LENGTH                 0x00000002

#define __C1TR45CON__RTREN4__POSITION               0x00000002
#define __C1TR45CON__RTREN4__MASK                   0x00000004
#define __C1TR45CON__RTREN4__LENGTH                 0x00000001

#define __C1TR45CON__TXREQ4__POSITION               0x00000003
#define __C1TR45CON__TXREQ4__MASK                   0x00000008
#define __C1TR45CON__TXREQ4__LENGTH                 0x00000001

#define __C1TR45CON__TXERR4__POSITION               0x00000004
#define __C1TR45CON__TXERR4__MASK                   0x00000010
#define __C1TR45CON__TXERR4__LENGTH                 0x00000001

#define __C1TR45CON__TXLARB4__POSITION              0x00000005
#define __C1TR45CON__TXLARB4__MASK                  0x00000020
#define __C1TR45CON__TXLARB4__LENGTH                0x00000001

#define __C1TR45CON__TXABT4__POSITION               0x00000006
#define __C1TR45CON__TXABT4__MASK                   0x00000040
#define __C1TR45CON__TXABT4__LENGTH                 0x00000001

#define __C1TR45CON__TXEN4__POSITION                0x00000007
#define __C1TR45CON__TXEN4__MASK                    0x00000080
#define __C1TR45CON__TXEN4__LENGTH                  0x00000001

#define __C1TR45CON__TX5PRI__POSITION               0x00000008
#define __C1TR45CON__TX5PRI__MASK                   0x00000300
#define __C1TR45CON__TX5PRI__LENGTH                 0x00000002

#define __C1TR45CON__RTREN5__POSITION               0x0000000A
#define __C1TR45CON__RTREN5__MASK                   0x00000400
#define __C1TR45CON__RTREN5__LENGTH                 0x00000001

#define __C1TR45CON__TXREQ5__POSITION               0x0000000B
#define __C1TR45CON__TXREQ5__MASK                   0x00000800
#define __C1TR45CON__TXREQ5__LENGTH                 0x00000001

#define __C1TR45CON__TXERR5__POSITION               0x0000000C
#define __C1TR45CON__TXERR5__MASK                   0x00001000
#define __C1TR45CON__TXERR5__LENGTH                 0x00000001

#define __C1TR45CON__TXLARB5__POSITION              0x0000000D
#define __C1TR45CON__TXLARB5__MASK                  0x00002000
#define __C1TR45CON__TXLARB5__LENGTH                0x00000001

#define __C1TR45CON__TXABT5__POSITION               0x0000000E
#define __C1TR45CON__TXABT5__MASK                   0x00004000
#define __C1TR45CON__TXABT5__LENGTH                 0x00000001

#define __C1TR45CON__TXEN5__POSITION                0x0000000F
#define __C1TR45CON__TXEN5__MASK                    0x00008000
#define __C1TR45CON__TXEN5__LENGTH                  0x00000001

#define __C1TR45CON__TX4PRI0__POSITION              0x00000000
#define __C1TR45CON__TX4PRI0__MASK                  0x00000001
#define __C1TR45CON__TX4PRI0__LENGTH                0x00000001

#define __C1TR45CON__TX4PRI1__POSITION              0x00000001
#define __C1TR45CON__TX4PRI1__MASK                  0x00000002
#define __C1TR45CON__TX4PRI1__LENGTH                0x00000001

#define __C1TR45CON__TX5PRI0__POSITION              0x00000008
#define __C1TR45CON__TX5PRI0__MASK                  0x00000100
#define __C1TR45CON__TX5PRI0__LENGTH                0x00000001

#define __C1TR45CON__TX5PRI1__POSITION              0x00000009
#define __C1TR45CON__TX5PRI1__MASK                  0x00000200
#define __C1TR45CON__TX5PRI1__LENGTH                0x00000001

#define __C1RXM1EID__EID0__POSITION                 0x00000000
#define __C1RXM1EID__EID0__MASK                     0x00000001
#define __C1RXM1EID__EID0__LENGTH                   0x00000001

#define __C1RXM1EID__EID1__POSITION                 0x00000001
#define __C1RXM1EID__EID1__MASK                     0x00000002
#define __C1RXM1EID__EID1__LENGTH                   0x00000001

#define __C1RXM1EID__EID2__POSITION                 0x00000002
#define __C1RXM1EID__EID2__MASK                     0x00000004
#define __C1RXM1EID__EID2__LENGTH                   0x00000001

#define __C1RXM1EID__EID3__POSITION                 0x00000003
#define __C1RXM1EID__EID3__MASK                     0x00000008
#define __C1RXM1EID__EID3__LENGTH                   0x00000001

#define __C1RXM1EID__EID4__POSITION                 0x00000004
#define __C1RXM1EID__EID4__MASK                     0x00000010
#define __C1RXM1EID__EID4__LENGTH                   0x00000001

#define __C1RXM1EID__EID5__POSITION                 0x00000005
#define __C1RXM1EID__EID5__MASK                     0x00000020
#define __C1RXM1EID__EID5__LENGTH                   0x00000001

#define __C1RXM1EID__EID6__POSITION                 0x00000006
#define __C1RXM1EID__EID6__MASK                     0x00000040
#define __C1RXM1EID__EID6__LENGTH                   0x00000001

#define __C1RXM1EID__EID7__POSITION                 0x00000007
#define __C1RXM1EID__EID7__MASK                     0x00000080
#define __C1RXM1EID__EID7__LENGTH                   0x00000001

#define __C1RXM1EID__EID8__POSITION                 0x00000008
#define __C1RXM1EID__EID8__MASK                     0x00000100
#define __C1RXM1EID__EID8__LENGTH                   0x00000001

#define __C1RXM1EID__EID9__POSITION                 0x00000009
#define __C1RXM1EID__EID9__MASK                     0x00000200
#define __C1RXM1EID__EID9__LENGTH                   0x00000001

#define __C1RXM1EID__EID10__POSITION                0x0000000A
#define __C1RXM1EID__EID10__MASK                    0x00000400
#define __C1RXM1EID__EID10__LENGTH                  0x00000001

#define __C1RXM1EID__EID11__POSITION                0x0000000B
#define __C1RXM1EID__EID11__MASK                    0x00000800
#define __C1RXM1EID__EID11__LENGTH                  0x00000001

#define __C1RXM1EID__EID12__POSITION                0x0000000C
#define __C1RXM1EID__EID12__MASK                    0x00001000
#define __C1RXM1EID__EID12__LENGTH                  0x00000001

#define __C1RXM1EID__EID13__POSITION                0x0000000D
#define __C1RXM1EID__EID13__MASK                    0x00002000
#define __C1RXM1EID__EID13__LENGTH                  0x00000001

#define __C1RXM1EID__EID14__POSITION                0x0000000E
#define __C1RXM1EID__EID14__MASK                    0x00004000
#define __C1RXM1EID__EID14__LENGTH                  0x00000001

#define __C1RXM1EID__EID15__POSITION                0x0000000F
#define __C1RXM1EID__EID15__MASK                    0x00008000
#define __C1RXM1EID__EID15__LENGTH                  0x00000001

#define __C1RXM1EID__EID__POSITION                  0x00000000
#define __C1RXM1EID__EID__MASK                      0x0000FFFF
#define __C1RXM1EID__EID__LENGTH                    0x00000010

#define __C1TR67CON__TX6PRI__POSITION               0x00000000
#define __C1TR67CON__TX6PRI__MASK                   0x00000003
#define __C1TR67CON__TX6PRI__LENGTH                 0x00000002

#define __C1TR67CON__RTREN6__POSITION               0x00000002
#define __C1TR67CON__RTREN6__MASK                   0x00000004
#define __C1TR67CON__RTREN6__LENGTH                 0x00000001

#define __C1TR67CON__TXREQ6__POSITION               0x00000003
#define __C1TR67CON__TXREQ6__MASK                   0x00000008
#define __C1TR67CON__TXREQ6__LENGTH                 0x00000001

#define __C1TR67CON__TXERR6__POSITION               0x00000004
#define __C1TR67CON__TXERR6__MASK                   0x00000010
#define __C1TR67CON__TXERR6__LENGTH                 0x00000001

#define __C1TR67CON__TXLARB6__POSITION              0x00000005
#define __C1TR67CON__TXLARB6__MASK                  0x00000020
#define __C1TR67CON__TXLARB6__LENGTH                0x00000001

#define __C1TR67CON__TXABT6__POSITION               0x00000006
#define __C1TR67CON__TXABT6__MASK                   0x00000040
#define __C1TR67CON__TXABT6__LENGTH                 0x00000001

#define __C1TR67CON__TXEN6__POSITION                0x00000007
#define __C1TR67CON__TXEN6__MASK                    0x00000080
#define __C1TR67CON__TXEN6__LENGTH                  0x00000001

#define __C1TR67CON__TX7PRI__POSITION               0x00000008
#define __C1TR67CON__TX7PRI__MASK                   0x00000300
#define __C1TR67CON__TX7PRI__LENGTH                 0x00000002

#define __C1TR67CON__RTREN7__POSITION               0x0000000A
#define __C1TR67CON__RTREN7__MASK                   0x00000400
#define __C1TR67CON__RTREN7__LENGTH                 0x00000001

#define __C1TR67CON__TXREQ7__POSITION               0x0000000B
#define __C1TR67CON__TXREQ7__MASK                   0x00000800
#define __C1TR67CON__TXREQ7__LENGTH                 0x00000001

#define __C1TR67CON__TXERR7__POSITION               0x0000000C
#define __C1TR67CON__TXERR7__MASK                   0x00001000
#define __C1TR67CON__TXERR7__LENGTH                 0x00000001

#define __C1TR67CON__TXLARB7__POSITION              0x0000000D
#define __C1TR67CON__TXLARB7__MASK                  0x00002000
#define __C1TR67CON__TXLARB7__LENGTH                0x00000001

#define __C1TR67CON__TXABT7__POSITION               0x0000000E
#define __C1TR67CON__TXABT7__MASK                   0x00004000
#define __C1TR67CON__TXABT7__LENGTH                 0x00000001

#define __C1TR67CON__TXEN7__POSITION                0x0000000F
#define __C1TR67CON__TXEN7__MASK                    0x00008000
#define __C1TR67CON__TXEN7__LENGTH                  0x00000001

#define __C1TR67CON__TX6PRI0__POSITION              0x00000000
#define __C1TR67CON__TX6PRI0__MASK                  0x00000001
#define __C1TR67CON__TX6PRI0__LENGTH                0x00000001

#define __C1TR67CON__TX6PRI1__POSITION              0x00000001
#define __C1TR67CON__TX6PRI1__MASK                  0x00000002
#define __C1TR67CON__TX6PRI1__LENGTH                0x00000001

#define __C1TR67CON__TX7PRI0__POSITION              0x00000008
#define __C1TR67CON__TX7PRI0__MASK                  0x00000100
#define __C1TR67CON__TX7PRI0__LENGTH                0x00000001

#define __C1TR67CON__TX7PRI1__POSITION              0x00000009
#define __C1TR67CON__TX7PRI1__MASK                  0x00000200
#define __C1TR67CON__TX7PRI1__LENGTH                0x00000001

#define __C1RXM2SID__EID16__POSITION                0x00000000
#define __C1RXM2SID__EID16__MASK                    0x00000001
#define __C1RXM2SID__EID16__LENGTH                  0x00000001

#define __C1RXM2SID__EID17__POSITION                0x00000001
#define __C1RXM2SID__EID17__MASK                    0x00000002
#define __C1RXM2SID__EID17__LENGTH                  0x00000001

#define __C1RXM2SID__MIDE__POSITION                 0x00000003
#define __C1RXM2SID__MIDE__MASK                     0x00000008
#define __C1RXM2SID__MIDE__LENGTH                   0x00000001

#define __C1RXM2SID__SID0__POSITION                 0x00000005
#define __C1RXM2SID__SID0__MASK                     0x00000020
#define __C1RXM2SID__SID0__LENGTH                   0x00000001

#define __C1RXM2SID__SID1__POSITION                 0x00000006
#define __C1RXM2SID__SID1__MASK                     0x00000040
#define __C1RXM2SID__SID1__LENGTH                   0x00000001

#define __C1RXM2SID__SID2__POSITION                 0x00000007
#define __C1RXM2SID__SID2__MASK                     0x00000080
#define __C1RXM2SID__SID2__LENGTH                   0x00000001

#define __C1RXM2SID__SID3__POSITION                 0x00000008
#define __C1RXM2SID__SID3__MASK                     0x00000100
#define __C1RXM2SID__SID3__LENGTH                   0x00000001

#define __C1RXM2SID__SID4__POSITION                 0x00000009
#define __C1RXM2SID__SID4__MASK                     0x00000200
#define __C1RXM2SID__SID4__LENGTH                   0x00000001

#define __C1RXM2SID__SID5__POSITION                 0x0000000A
#define __C1RXM2SID__SID5__MASK                     0x00000400
#define __C1RXM2SID__SID5__LENGTH                   0x00000001

#define __C1RXM2SID__SID6__POSITION                 0x0000000B
#define __C1RXM2SID__SID6__MASK                     0x00000800
#define __C1RXM2SID__SID6__LENGTH                   0x00000001

#define __C1RXM2SID__SID7__POSITION                 0x0000000C
#define __C1RXM2SID__SID7__MASK                     0x00001000
#define __C1RXM2SID__SID7__LENGTH                   0x00000001

#define __C1RXM2SID__SID8__POSITION                 0x0000000D
#define __C1RXM2SID__SID8__MASK                     0x00002000
#define __C1RXM2SID__SID8__LENGTH                   0x00000001

#define __C1RXM2SID__SID9__POSITION                 0x0000000E
#define __C1RXM2SID__SID9__MASK                     0x00004000
#define __C1RXM2SID__SID9__LENGTH                   0x00000001

#define __C1RXM2SID__SID10__POSITION                0x0000000F
#define __C1RXM2SID__SID10__MASK                    0x00008000
#define __C1RXM2SID__SID10__LENGTH                  0x00000001

#define __C1RXM2SID__EID__POSITION                  0x00000000
#define __C1RXM2SID__EID__MASK                      0x00000003
#define __C1RXM2SID__EID__LENGTH                    0x00000002

#define __C1RXM2SID__SID__POSITION                  0x00000005
#define __C1RXM2SID__SID__MASK                      0x0000FFE0
#define __C1RXM2SID__SID__LENGTH                    0x0000000B

#define __C1RXM2EID__EID0__POSITION                 0x00000000
#define __C1RXM2EID__EID0__MASK                     0x00000001
#define __C1RXM2EID__EID0__LENGTH                   0x00000001

#define __C1RXM2EID__EID1__POSITION                 0x00000001
#define __C1RXM2EID__EID1__MASK                     0x00000002
#define __C1RXM2EID__EID1__LENGTH                   0x00000001

#define __C1RXM2EID__EID2__POSITION                 0x00000002
#define __C1RXM2EID__EID2__MASK                     0x00000004
#define __C1RXM2EID__EID2__LENGTH                   0x00000001

#define __C1RXM2EID__EID3__POSITION                 0x00000003
#define __C1RXM2EID__EID3__MASK                     0x00000008
#define __C1RXM2EID__EID3__LENGTH                   0x00000001

#define __C1RXM2EID__EID4__POSITION                 0x00000004
#define __C1RXM2EID__EID4__MASK                     0x00000010
#define __C1RXM2EID__EID4__LENGTH                   0x00000001

#define __C1RXM2EID__EID5__POSITION                 0x00000005
#define __C1RXM2EID__EID5__MASK                     0x00000020
#define __C1RXM2EID__EID5__LENGTH                   0x00000001

#define __C1RXM2EID__EID6__POSITION                 0x00000006
#define __C1RXM2EID__EID6__MASK                     0x00000040
#define __C1RXM2EID__EID6__LENGTH                   0x00000001

#define __C1RXM2EID__EID7__POSITION                 0x00000007
#define __C1RXM2EID__EID7__MASK                     0x00000080
#define __C1RXM2EID__EID7__LENGTH                   0x00000001

#define __C1RXM2EID__EID8__POSITION                 0x00000008
#define __C1RXM2EID__EID8__MASK                     0x00000100
#define __C1RXM2EID__EID8__LENGTH                   0x00000001

#define __C1RXM2EID__EID9__POSITION                 0x00000009
#define __C1RXM2EID__EID9__MASK                     0x00000200
#define __C1RXM2EID__EID9__LENGTH                   0x00000001

#define __C1RXM2EID__EID10__POSITION                0x0000000A
#define __C1RXM2EID__EID10__MASK                    0x00000400
#define __C1RXM2EID__EID10__LENGTH                  0x00000001

#define __C1RXM2EID__EID11__POSITION                0x0000000B
#define __C1RXM2EID__EID11__MASK                    0x00000800
#define __C1RXM2EID__EID11__LENGTH                  0x00000001

#define __C1RXM2EID__EID12__POSITION                0x0000000C
#define __C1RXM2EID__EID12__MASK                    0x00001000
#define __C1RXM2EID__EID12__LENGTH                  0x00000001

#define __C1RXM2EID__EID13__POSITION                0x0000000D
#define __C1RXM2EID__EID13__MASK                    0x00002000
#define __C1RXM2EID__EID13__LENGTH                  0x00000001

#define __C1RXM2EID__EID14__POSITION                0x0000000E
#define __C1RXM2EID__EID14__MASK                    0x00004000
#define __C1RXM2EID__EID14__LENGTH                  0x00000001

#define __C1RXM2EID__EID15__POSITION                0x0000000F
#define __C1RXM2EID__EID15__MASK                    0x00008000
#define __C1RXM2EID__EID15__LENGTH                  0x00000001

#define __C1RXM2EID__EID__POSITION                  0x00000000
#define __C1RXM2EID__EID__MASK                      0x0000FFFF
#define __C1RXM2EID__EID__LENGTH                    0x00000010

#define __C1RXF0SID__EID__POSITION                  0x00000000
#define __C1RXF0SID__EID__MASK                      0x00000003
#define __C1RXF0SID__EID__LENGTH                    0x00000002

#define __C1RXF0SID__EXIDE__POSITION                0x00000003
#define __C1RXF0SID__EXIDE__MASK                    0x00000008
#define __C1RXF0SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF0SID__SID__POSITION                  0x00000005
#define __C1RXF0SID__SID__MASK                      0x0000FFE0
#define __C1RXF0SID__SID__LENGTH                    0x0000000B

#define __C1RXF0SID__EID16__POSITION                0x00000000
#define __C1RXF0SID__EID16__MASK                    0x00000001
#define __C1RXF0SID__EID16__LENGTH                  0x00000001

#define __C1RXF0SID__EID17__POSITION                0x00000001
#define __C1RXF0SID__EID17__MASK                    0x00000002
#define __C1RXF0SID__EID17__LENGTH                  0x00000001

#define __C1RXF0SID__SID0__POSITION                 0x00000005
#define __C1RXF0SID__SID0__MASK                     0x00000020
#define __C1RXF0SID__SID0__LENGTH                   0x00000001

#define __C1RXF0SID__SID1__POSITION                 0x00000006
#define __C1RXF0SID__SID1__MASK                     0x00000040
#define __C1RXF0SID__SID1__LENGTH                   0x00000001

#define __C1RXF0SID__SID2__POSITION                 0x00000007
#define __C1RXF0SID__SID2__MASK                     0x00000080
#define __C1RXF0SID__SID2__LENGTH                   0x00000001

#define __C1RXF0SID__SID3__POSITION                 0x00000008
#define __C1RXF0SID__SID3__MASK                     0x00000100
#define __C1RXF0SID__SID3__LENGTH                   0x00000001

#define __C1RXF0SID__SID4__POSITION                 0x00000009
#define __C1RXF0SID__SID4__MASK                     0x00000200
#define __C1RXF0SID__SID4__LENGTH                   0x00000001

#define __C1RXF0SID__SID5__POSITION                 0x0000000A
#define __C1RXF0SID__SID5__MASK                     0x00000400
#define __C1RXF0SID__SID5__LENGTH                   0x00000001

#define __C1RXF0SID__SID6__POSITION                 0x0000000B
#define __C1RXF0SID__SID6__MASK                     0x00000800
#define __C1RXF0SID__SID6__LENGTH                   0x00000001

#define __C1RXF0SID__SID7__POSITION                 0x0000000C
#define __C1RXF0SID__SID7__MASK                     0x00001000
#define __C1RXF0SID__SID7__LENGTH                   0x00000001

#define __C1RXF0SID__SID8__POSITION                 0x0000000D
#define __C1RXF0SID__SID8__MASK                     0x00002000
#define __C1RXF0SID__SID8__LENGTH                   0x00000001

#define __C1RXF0SID__SID9__POSITION                 0x0000000E
#define __C1RXF0SID__SID9__MASK                     0x00004000
#define __C1RXF0SID__SID9__LENGTH                   0x00000001

#define __C1RXF0SID__SID10__POSITION                0x0000000F
#define __C1RXF0SID__SID10__MASK                    0x00008000
#define __C1RXF0SID__SID10__LENGTH                  0x00000001

#define __C1RXF0EID__EID__POSITION                  0x00000000
#define __C1RXF0EID__EID__MASK                      0x0000FFFF
#define __C1RXF0EID__EID__LENGTH                    0x00000010

#define __C1RXF0EID__EID0__POSITION                 0x00000000
#define __C1RXF0EID__EID0__MASK                     0x00000001
#define __C1RXF0EID__EID0__LENGTH                   0x00000001

#define __C1RXF0EID__EID1__POSITION                 0x00000001
#define __C1RXF0EID__EID1__MASK                     0x00000002
#define __C1RXF0EID__EID1__LENGTH                   0x00000001

#define __C1RXF0EID__EID2__POSITION                 0x00000002
#define __C1RXF0EID__EID2__MASK                     0x00000004
#define __C1RXF0EID__EID2__LENGTH                   0x00000001

#define __C1RXF0EID__EID3__POSITION                 0x00000003
#define __C1RXF0EID__EID3__MASK                     0x00000008
#define __C1RXF0EID__EID3__LENGTH                   0x00000001

#define __C1RXF0EID__EID4__POSITION                 0x00000004
#define __C1RXF0EID__EID4__MASK                     0x00000010
#define __C1RXF0EID__EID4__LENGTH                   0x00000001

#define __C1RXF0EID__EID5__POSITION                 0x00000005
#define __C1RXF0EID__EID5__MASK                     0x00000020
#define __C1RXF0EID__EID5__LENGTH                   0x00000001

#define __C1RXF0EID__EID6__POSITION                 0x00000006
#define __C1RXF0EID__EID6__MASK                     0x00000040
#define __C1RXF0EID__EID6__LENGTH                   0x00000001

#define __C1RXF0EID__EID7__POSITION                 0x00000007
#define __C1RXF0EID__EID7__MASK                     0x00000080
#define __C1RXF0EID__EID7__LENGTH                   0x00000001

#define __C1RXF0EID__EID8__POSITION                 0x00000008
#define __C1RXF0EID__EID8__MASK                     0x00000100
#define __C1RXF0EID__EID8__LENGTH                   0x00000001

#define __C1RXF0EID__EID9__POSITION                 0x00000009
#define __C1RXF0EID__EID9__MASK                     0x00000200
#define __C1RXF0EID__EID9__LENGTH                   0x00000001

#define __C1RXF0EID__EID10__POSITION                0x0000000A
#define __C1RXF0EID__EID10__MASK                    0x00000400
#define __C1RXF0EID__EID10__LENGTH                  0x00000001

#define __C1RXF0EID__EID11__POSITION                0x0000000B
#define __C1RXF0EID__EID11__MASK                    0x00000800
#define __C1RXF0EID__EID11__LENGTH                  0x00000001

#define __C1RXF0EID__EID12__POSITION                0x0000000C
#define __C1RXF0EID__EID12__MASK                    0x00001000
#define __C1RXF0EID__EID12__LENGTH                  0x00000001

#define __C1RXF0EID__EID13__POSITION                0x0000000D
#define __C1RXF0EID__EID13__MASK                    0x00002000
#define __C1RXF0EID__EID13__LENGTH                  0x00000001

#define __C1RXF0EID__EID14__POSITION                0x0000000E
#define __C1RXF0EID__EID14__MASK                    0x00004000
#define __C1RXF0EID__EID14__LENGTH                  0x00000001

#define __C1RXF0EID__EID15__POSITION                0x0000000F
#define __C1RXF0EID__EID15__MASK                    0x00008000
#define __C1RXF0EID__EID15__LENGTH                  0x00000001

#define __C1RXF1SID__EID__POSITION                  0x00000000
#define __C1RXF1SID__EID__MASK                      0x00000003
#define __C1RXF1SID__EID__LENGTH                    0x00000002

#define __C1RXF1SID__EXIDE__POSITION                0x00000003
#define __C1RXF1SID__EXIDE__MASK                    0x00000008
#define __C1RXF1SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF1SID__SID__POSITION                  0x00000005
#define __C1RXF1SID__SID__MASK                      0x0000FFE0
#define __C1RXF1SID__SID__LENGTH                    0x0000000B

#define __C1RXF1SID__EID16__POSITION                0x00000000
#define __C1RXF1SID__EID16__MASK                    0x00000001
#define __C1RXF1SID__EID16__LENGTH                  0x00000001

#define __C1RXF1SID__EID17__POSITION                0x00000001
#define __C1RXF1SID__EID17__MASK                    0x00000002
#define __C1RXF1SID__EID17__LENGTH                  0x00000001

#define __C1RXF1SID__SID0__POSITION                 0x00000005
#define __C1RXF1SID__SID0__MASK                     0x00000020
#define __C1RXF1SID__SID0__LENGTH                   0x00000001

#define __C1RXF1SID__SID1__POSITION                 0x00000006
#define __C1RXF1SID__SID1__MASK                     0x00000040
#define __C1RXF1SID__SID1__LENGTH                   0x00000001

#define __C1RXF1SID__SID2__POSITION                 0x00000007
#define __C1RXF1SID__SID2__MASK                     0x00000080
#define __C1RXF1SID__SID2__LENGTH                   0x00000001

#define __C1RXF1SID__SID3__POSITION                 0x00000008
#define __C1RXF1SID__SID3__MASK                     0x00000100
#define __C1RXF1SID__SID3__LENGTH                   0x00000001

#define __C1RXF1SID__SID4__POSITION                 0x00000009
#define __C1RXF1SID__SID4__MASK                     0x00000200
#define __C1RXF1SID__SID4__LENGTH                   0x00000001

#define __C1RXF1SID__SID5__POSITION                 0x0000000A
#define __C1RXF1SID__SID5__MASK                     0x00000400
#define __C1RXF1SID__SID5__LENGTH                   0x00000001

#define __C1RXF1SID__SID6__POSITION                 0x0000000B
#define __C1RXF1SID__SID6__MASK                     0x00000800
#define __C1RXF1SID__SID6__LENGTH                   0x00000001

#define __C1RXF1SID__SID7__POSITION                 0x0000000C
#define __C1RXF1SID__SID7__MASK                     0x00001000
#define __C1RXF1SID__SID7__LENGTH                   0x00000001

#define __C1RXF1SID__SID8__POSITION                 0x0000000D
#define __C1RXF1SID__SID8__MASK                     0x00002000
#define __C1RXF1SID__SID8__LENGTH                   0x00000001

#define __C1RXF1SID__SID9__POSITION                 0x0000000E
#define __C1RXF1SID__SID9__MASK                     0x00004000
#define __C1RXF1SID__SID9__LENGTH                   0x00000001

#define __C1RXF1SID__SID10__POSITION                0x0000000F
#define __C1RXF1SID__SID10__MASK                    0x00008000
#define __C1RXF1SID__SID10__LENGTH                  0x00000001

#define __C1RXF1EID__EID__POSITION                  0x00000000
#define __C1RXF1EID__EID__MASK                      0x0000FFFF
#define __C1RXF1EID__EID__LENGTH                    0x00000010

#define __C1RXF1EID__EID0__POSITION                 0x00000000
#define __C1RXF1EID__EID0__MASK                     0x00000001
#define __C1RXF1EID__EID0__LENGTH                   0x00000001

#define __C1RXF1EID__EID1__POSITION                 0x00000001
#define __C1RXF1EID__EID1__MASK                     0x00000002
#define __C1RXF1EID__EID1__LENGTH                   0x00000001

#define __C1RXF1EID__EID2__POSITION                 0x00000002
#define __C1RXF1EID__EID2__MASK                     0x00000004
#define __C1RXF1EID__EID2__LENGTH                   0x00000001

#define __C1RXF1EID__EID3__POSITION                 0x00000003
#define __C1RXF1EID__EID3__MASK                     0x00000008
#define __C1RXF1EID__EID3__LENGTH                   0x00000001

#define __C1RXF1EID__EID4__POSITION                 0x00000004
#define __C1RXF1EID__EID4__MASK                     0x00000010
#define __C1RXF1EID__EID4__LENGTH                   0x00000001

#define __C1RXF1EID__EID5__POSITION                 0x00000005
#define __C1RXF1EID__EID5__MASK                     0x00000020
#define __C1RXF1EID__EID5__LENGTH                   0x00000001

#define __C1RXF1EID__EID6__POSITION                 0x00000006
#define __C1RXF1EID__EID6__MASK                     0x00000040
#define __C1RXF1EID__EID6__LENGTH                   0x00000001

#define __C1RXF1EID__EID7__POSITION                 0x00000007
#define __C1RXF1EID__EID7__MASK                     0x00000080
#define __C1RXF1EID__EID7__LENGTH                   0x00000001

#define __C1RXF1EID__EID8__POSITION                 0x00000008
#define __C1RXF1EID__EID8__MASK                     0x00000100
#define __C1RXF1EID__EID8__LENGTH                   0x00000001

#define __C1RXF1EID__EID9__POSITION                 0x00000009
#define __C1RXF1EID__EID9__MASK                     0x00000200
#define __C1RXF1EID__EID9__LENGTH                   0x00000001

#define __C1RXF1EID__EID10__POSITION                0x0000000A
#define __C1RXF1EID__EID10__MASK                    0x00000400
#define __C1RXF1EID__EID10__LENGTH                  0x00000001

#define __C1RXF1EID__EID11__POSITION                0x0000000B
#define __C1RXF1EID__EID11__MASK                    0x00000800
#define __C1RXF1EID__EID11__LENGTH                  0x00000001

#define __C1RXF1EID__EID12__POSITION                0x0000000C
#define __C1RXF1EID__EID12__MASK                    0x00001000
#define __C1RXF1EID__EID12__LENGTH                  0x00000001

#define __C1RXF1EID__EID13__POSITION                0x0000000D
#define __C1RXF1EID__EID13__MASK                    0x00002000
#define __C1RXF1EID__EID13__LENGTH                  0x00000001

#define __C1RXF1EID__EID14__POSITION                0x0000000E
#define __C1RXF1EID__EID14__MASK                    0x00004000
#define __C1RXF1EID__EID14__LENGTH                  0x00000001

#define __C1RXF1EID__EID15__POSITION                0x0000000F
#define __C1RXF1EID__EID15__MASK                    0x00008000
#define __C1RXF1EID__EID15__LENGTH                  0x00000001

#define __C1RXF2SID__EID__POSITION                  0x00000000
#define __C1RXF2SID__EID__MASK                      0x00000003
#define __C1RXF2SID__EID__LENGTH                    0x00000002

#define __C1RXF2SID__EXIDE__POSITION                0x00000003
#define __C1RXF2SID__EXIDE__MASK                    0x00000008
#define __C1RXF2SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF2SID__SID__POSITION                  0x00000005
#define __C1RXF2SID__SID__MASK                      0x0000FFE0
#define __C1RXF2SID__SID__LENGTH                    0x0000000B

#define __C1RXF2SID__EID16__POSITION                0x00000000
#define __C1RXF2SID__EID16__MASK                    0x00000001
#define __C1RXF2SID__EID16__LENGTH                  0x00000001

#define __C1RXF2SID__EID17__POSITION                0x00000001
#define __C1RXF2SID__EID17__MASK                    0x00000002
#define __C1RXF2SID__EID17__LENGTH                  0x00000001

#define __C1RXF2SID__SID0__POSITION                 0x00000005
#define __C1RXF2SID__SID0__MASK                     0x00000020
#define __C1RXF2SID__SID0__LENGTH                   0x00000001

#define __C1RXF2SID__SID1__POSITION                 0x00000006
#define __C1RXF2SID__SID1__MASK                     0x00000040
#define __C1RXF2SID__SID1__LENGTH                   0x00000001

#define __C1RXF2SID__SID2__POSITION                 0x00000007
#define __C1RXF2SID__SID2__MASK                     0x00000080
#define __C1RXF2SID__SID2__LENGTH                   0x00000001

#define __C1RXF2SID__SID3__POSITION                 0x00000008
#define __C1RXF2SID__SID3__MASK                     0x00000100
#define __C1RXF2SID__SID3__LENGTH                   0x00000001

#define __C1RXF2SID__SID4__POSITION                 0x00000009
#define __C1RXF2SID__SID4__MASK                     0x00000200
#define __C1RXF2SID__SID4__LENGTH                   0x00000001

#define __C1RXF2SID__SID5__POSITION                 0x0000000A
#define __C1RXF2SID__SID5__MASK                     0x00000400
#define __C1RXF2SID__SID5__LENGTH                   0x00000001

#define __C1RXF2SID__SID6__POSITION                 0x0000000B
#define __C1RXF2SID__SID6__MASK                     0x00000800
#define __C1RXF2SID__SID6__LENGTH                   0x00000001

#define __C1RXF2SID__SID7__POSITION                 0x0000000C
#define __C1RXF2SID__SID7__MASK                     0x00001000
#define __C1RXF2SID__SID7__LENGTH                   0x00000001

#define __C1RXF2SID__SID8__POSITION                 0x0000000D
#define __C1RXF2SID__SID8__MASK                     0x00002000
#define __C1RXF2SID__SID8__LENGTH                   0x00000001

#define __C1RXF2SID__SID9__POSITION                 0x0000000E
#define __C1RXF2SID__SID9__MASK                     0x00004000
#define __C1RXF2SID__SID9__LENGTH                   0x00000001

#define __C1RXF2SID__SID10__POSITION                0x0000000F
#define __C1RXF2SID__SID10__MASK                    0x00008000
#define __C1RXF2SID__SID10__LENGTH                  0x00000001

#define __C1RXF2EID__EID__POSITION                  0x00000000
#define __C1RXF2EID__EID__MASK                      0x0000FFFF
#define __C1RXF2EID__EID__LENGTH                    0x00000010

#define __C1RXF2EID__EID0__POSITION                 0x00000000
#define __C1RXF2EID__EID0__MASK                     0x00000001
#define __C1RXF2EID__EID0__LENGTH                   0x00000001

#define __C1RXF2EID__EID1__POSITION                 0x00000001
#define __C1RXF2EID__EID1__MASK                     0x00000002
#define __C1RXF2EID__EID1__LENGTH                   0x00000001

#define __C1RXF2EID__EID2__POSITION                 0x00000002
#define __C1RXF2EID__EID2__MASK                     0x00000004
#define __C1RXF2EID__EID2__LENGTH                   0x00000001

#define __C1RXF2EID__EID3__POSITION                 0x00000003
#define __C1RXF2EID__EID3__MASK                     0x00000008
#define __C1RXF2EID__EID3__LENGTH                   0x00000001

#define __C1RXF2EID__EID4__POSITION                 0x00000004
#define __C1RXF2EID__EID4__MASK                     0x00000010
#define __C1RXF2EID__EID4__LENGTH                   0x00000001

#define __C1RXF2EID__EID5__POSITION                 0x00000005
#define __C1RXF2EID__EID5__MASK                     0x00000020
#define __C1RXF2EID__EID5__LENGTH                   0x00000001

#define __C1RXF2EID__EID6__POSITION                 0x00000006
#define __C1RXF2EID__EID6__MASK                     0x00000040
#define __C1RXF2EID__EID6__LENGTH                   0x00000001

#define __C1RXF2EID__EID7__POSITION                 0x00000007
#define __C1RXF2EID__EID7__MASK                     0x00000080
#define __C1RXF2EID__EID7__LENGTH                   0x00000001

#define __C1RXF2EID__EID8__POSITION                 0x00000008
#define __C1RXF2EID__EID8__MASK                     0x00000100
#define __C1RXF2EID__EID8__LENGTH                   0x00000001

#define __C1RXF2EID__EID9__POSITION                 0x00000009
#define __C1RXF2EID__EID9__MASK                     0x00000200
#define __C1RXF2EID__EID9__LENGTH                   0x00000001

#define __C1RXF2EID__EID10__POSITION                0x0000000A
#define __C1RXF2EID__EID10__MASK                    0x00000400
#define __C1RXF2EID__EID10__LENGTH                  0x00000001

#define __C1RXF2EID__EID11__POSITION                0x0000000B
#define __C1RXF2EID__EID11__MASK                    0x00000800
#define __C1RXF2EID__EID11__LENGTH                  0x00000001

#define __C1RXF2EID__EID12__POSITION                0x0000000C
#define __C1RXF2EID__EID12__MASK                    0x00001000
#define __C1RXF2EID__EID12__LENGTH                  0x00000001

#define __C1RXF2EID__EID13__POSITION                0x0000000D
#define __C1RXF2EID__EID13__MASK                    0x00002000
#define __C1RXF2EID__EID13__LENGTH                  0x00000001

#define __C1RXF2EID__EID14__POSITION                0x0000000E
#define __C1RXF2EID__EID14__MASK                    0x00004000
#define __C1RXF2EID__EID14__LENGTH                  0x00000001

#define __C1RXF2EID__EID15__POSITION                0x0000000F
#define __C1RXF2EID__EID15__MASK                    0x00008000
#define __C1RXF2EID__EID15__LENGTH                  0x00000001

#define __C1RXF3SID__EID__POSITION                  0x00000000
#define __C1RXF3SID__EID__MASK                      0x00000003
#define __C1RXF3SID__EID__LENGTH                    0x00000002

#define __C1RXF3SID__EXIDE__POSITION                0x00000003
#define __C1RXF3SID__EXIDE__MASK                    0x00000008
#define __C1RXF3SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF3SID__SID__POSITION                  0x00000005
#define __C1RXF3SID__SID__MASK                      0x0000FFE0
#define __C1RXF3SID__SID__LENGTH                    0x0000000B

#define __C1RXF3SID__EID16__POSITION                0x00000000
#define __C1RXF3SID__EID16__MASK                    0x00000001
#define __C1RXF3SID__EID16__LENGTH                  0x00000001

#define __C1RXF3SID__EID17__POSITION                0x00000001
#define __C1RXF3SID__EID17__MASK                    0x00000002
#define __C1RXF3SID__EID17__LENGTH                  0x00000001

#define __C1RXF3SID__SID0__POSITION                 0x00000005
#define __C1RXF3SID__SID0__MASK                     0x00000020
#define __C1RXF3SID__SID0__LENGTH                   0x00000001

#define __C1RXF3SID__SID1__POSITION                 0x00000006
#define __C1RXF3SID__SID1__MASK                     0x00000040
#define __C1RXF3SID__SID1__LENGTH                   0x00000001

#define __C1RXF3SID__SID2__POSITION                 0x00000007
#define __C1RXF3SID__SID2__MASK                     0x00000080
#define __C1RXF3SID__SID2__LENGTH                   0x00000001

#define __C1RXF3SID__SID3__POSITION                 0x00000008
#define __C1RXF3SID__SID3__MASK                     0x00000100
#define __C1RXF3SID__SID3__LENGTH                   0x00000001

#define __C1RXF3SID__SID4__POSITION                 0x00000009
#define __C1RXF3SID__SID4__MASK                     0x00000200
#define __C1RXF3SID__SID4__LENGTH                   0x00000001

#define __C1RXF3SID__SID5__POSITION                 0x0000000A
#define __C1RXF3SID__SID5__MASK                     0x00000400
#define __C1RXF3SID__SID5__LENGTH                   0x00000001

#define __C1RXF3SID__SID6__POSITION                 0x0000000B
#define __C1RXF3SID__SID6__MASK                     0x00000800
#define __C1RXF3SID__SID6__LENGTH                   0x00000001

#define __C1RXF3SID__SID7__POSITION                 0x0000000C
#define __C1RXF3SID__SID7__MASK                     0x00001000
#define __C1RXF3SID__SID7__LENGTH                   0x00000001

#define __C1RXF3SID__SID8__POSITION                 0x0000000D
#define __C1RXF3SID__SID8__MASK                     0x00002000
#define __C1RXF3SID__SID8__LENGTH                   0x00000001

#define __C1RXF3SID__SID9__POSITION                 0x0000000E
#define __C1RXF3SID__SID9__MASK                     0x00004000
#define __C1RXF3SID__SID9__LENGTH                   0x00000001

#define __C1RXF3SID__SID10__POSITION                0x0000000F
#define __C1RXF3SID__SID10__MASK                    0x00008000
#define __C1RXF3SID__SID10__LENGTH                  0x00000001

#define __C1RXF3EID__EID__POSITION                  0x00000000
#define __C1RXF3EID__EID__MASK                      0x0000FFFF
#define __C1RXF3EID__EID__LENGTH                    0x00000010

#define __C1RXF3EID__EID0__POSITION                 0x00000000
#define __C1RXF3EID__EID0__MASK                     0x00000001
#define __C1RXF3EID__EID0__LENGTH                   0x00000001

#define __C1RXF3EID__EID1__POSITION                 0x00000001
#define __C1RXF3EID__EID1__MASK                     0x00000002
#define __C1RXF3EID__EID1__LENGTH                   0x00000001

#define __C1RXF3EID__EID2__POSITION                 0x00000002
#define __C1RXF3EID__EID2__MASK                     0x00000004
#define __C1RXF3EID__EID2__LENGTH                   0x00000001

#define __C1RXF3EID__EID3__POSITION                 0x00000003
#define __C1RXF3EID__EID3__MASK                     0x00000008
#define __C1RXF3EID__EID3__LENGTH                   0x00000001

#define __C1RXF3EID__EID4__POSITION                 0x00000004
#define __C1RXF3EID__EID4__MASK                     0x00000010
#define __C1RXF3EID__EID4__LENGTH                   0x00000001

#define __C1RXF3EID__EID5__POSITION                 0x00000005
#define __C1RXF3EID__EID5__MASK                     0x00000020
#define __C1RXF3EID__EID5__LENGTH                   0x00000001

#define __C1RXF3EID__EID6__POSITION                 0x00000006
#define __C1RXF3EID__EID6__MASK                     0x00000040
#define __C1RXF3EID__EID6__LENGTH                   0x00000001

#define __C1RXF3EID__EID7__POSITION                 0x00000007
#define __C1RXF3EID__EID7__MASK                     0x00000080
#define __C1RXF3EID__EID7__LENGTH                   0x00000001

#define __C1RXF3EID__EID8__POSITION                 0x00000008
#define __C1RXF3EID__EID8__MASK                     0x00000100
#define __C1RXF3EID__EID8__LENGTH                   0x00000001

#define __C1RXF3EID__EID9__POSITION                 0x00000009
#define __C1RXF3EID__EID9__MASK                     0x00000200
#define __C1RXF3EID__EID9__LENGTH                   0x00000001

#define __C1RXF3EID__EID10__POSITION                0x0000000A
#define __C1RXF3EID__EID10__MASK                    0x00000400
#define __C1RXF3EID__EID10__LENGTH                  0x00000001

#define __C1RXF3EID__EID11__POSITION                0x0000000B
#define __C1RXF3EID__EID11__MASK                    0x00000800
#define __C1RXF3EID__EID11__LENGTH                  0x00000001

#define __C1RXF3EID__EID12__POSITION                0x0000000C
#define __C1RXF3EID__EID12__MASK                    0x00001000
#define __C1RXF3EID__EID12__LENGTH                  0x00000001

#define __C1RXF3EID__EID13__POSITION                0x0000000D
#define __C1RXF3EID__EID13__MASK                    0x00002000
#define __C1RXF3EID__EID13__LENGTH                  0x00000001

#define __C1RXF3EID__EID14__POSITION                0x0000000E
#define __C1RXF3EID__EID14__MASK                    0x00004000
#define __C1RXF3EID__EID14__LENGTH                  0x00000001

#define __C1RXF3EID__EID15__POSITION                0x0000000F
#define __C1RXF3EID__EID15__MASK                    0x00008000
#define __C1RXF3EID__EID15__LENGTH                  0x00000001

#define __C1RXF4SID__EID__POSITION                  0x00000000
#define __C1RXF4SID__EID__MASK                      0x00000003
#define __C1RXF4SID__EID__LENGTH                    0x00000002

#define __C1RXF4SID__EXIDE__POSITION                0x00000003
#define __C1RXF4SID__EXIDE__MASK                    0x00000008
#define __C1RXF4SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF4SID__SID__POSITION                  0x00000005
#define __C1RXF4SID__SID__MASK                      0x0000FFE0
#define __C1RXF4SID__SID__LENGTH                    0x0000000B

#define __C1RXF4SID__EID16__POSITION                0x00000000
#define __C1RXF4SID__EID16__MASK                    0x00000001
#define __C1RXF4SID__EID16__LENGTH                  0x00000001

#define __C1RXF4SID__EID17__POSITION                0x00000001
#define __C1RXF4SID__EID17__MASK                    0x00000002
#define __C1RXF4SID__EID17__LENGTH                  0x00000001

#define __C1RXF4SID__SID0__POSITION                 0x00000005
#define __C1RXF4SID__SID0__MASK                     0x00000020
#define __C1RXF4SID__SID0__LENGTH                   0x00000001

#define __C1RXF4SID__SID1__POSITION                 0x00000006
#define __C1RXF4SID__SID1__MASK                     0x00000040
#define __C1RXF4SID__SID1__LENGTH                   0x00000001

#define __C1RXF4SID__SID2__POSITION                 0x00000007
#define __C1RXF4SID__SID2__MASK                     0x00000080
#define __C1RXF4SID__SID2__LENGTH                   0x00000001

#define __C1RXF4SID__SID3__POSITION                 0x00000008
#define __C1RXF4SID__SID3__MASK                     0x00000100
#define __C1RXF4SID__SID3__LENGTH                   0x00000001

#define __C1RXF4SID__SID4__POSITION                 0x00000009
#define __C1RXF4SID__SID4__MASK                     0x00000200
#define __C1RXF4SID__SID4__LENGTH                   0x00000001

#define __C1RXF4SID__SID5__POSITION                 0x0000000A
#define __C1RXF4SID__SID5__MASK                     0x00000400
#define __C1RXF4SID__SID5__LENGTH                   0x00000001

#define __C1RXF4SID__SID6__POSITION                 0x0000000B
#define __C1RXF4SID__SID6__MASK                     0x00000800
#define __C1RXF4SID__SID6__LENGTH                   0x00000001

#define __C1RXF4SID__SID7__POSITION                 0x0000000C
#define __C1RXF4SID__SID7__MASK                     0x00001000
#define __C1RXF4SID__SID7__LENGTH                   0x00000001

#define __C1RXF4SID__SID8__POSITION                 0x0000000D
#define __C1RXF4SID__SID8__MASK                     0x00002000
#define __C1RXF4SID__SID8__LENGTH                   0x00000001

#define __C1RXF4SID__SID9__POSITION                 0x0000000E
#define __C1RXF4SID__SID9__MASK                     0x00004000
#define __C1RXF4SID__SID9__LENGTH                   0x00000001

#define __C1RXF4SID__SID10__POSITION                0x0000000F
#define __C1RXF4SID__SID10__MASK                    0x00008000
#define __C1RXF4SID__SID10__LENGTH                  0x00000001

#define __C1RXF4EID__EID__POSITION                  0x00000000
#define __C1RXF4EID__EID__MASK                      0x0000FFFF
#define __C1RXF4EID__EID__LENGTH                    0x00000010

#define __C1RXF4EID__EID0__POSITION                 0x00000000
#define __C1RXF4EID__EID0__MASK                     0x00000001
#define __C1RXF4EID__EID0__LENGTH                   0x00000001

#define __C1RXF4EID__EID1__POSITION                 0x00000001
#define __C1RXF4EID__EID1__MASK                     0x00000002
#define __C1RXF4EID__EID1__LENGTH                   0x00000001

#define __C1RXF4EID__EID2__POSITION                 0x00000002
#define __C1RXF4EID__EID2__MASK                     0x00000004
#define __C1RXF4EID__EID2__LENGTH                   0x00000001

#define __C1RXF4EID__EID3__POSITION                 0x00000003
#define __C1RXF4EID__EID3__MASK                     0x00000008
#define __C1RXF4EID__EID3__LENGTH                   0x00000001

#define __C1RXF4EID__EID4__POSITION                 0x00000004
#define __C1RXF4EID__EID4__MASK                     0x00000010
#define __C1RXF4EID__EID4__LENGTH                   0x00000001

#define __C1RXF4EID__EID5__POSITION                 0x00000005
#define __C1RXF4EID__EID5__MASK                     0x00000020
#define __C1RXF4EID__EID5__LENGTH                   0x00000001

#define __C1RXF4EID__EID6__POSITION                 0x00000006
#define __C1RXF4EID__EID6__MASK                     0x00000040
#define __C1RXF4EID__EID6__LENGTH                   0x00000001

#define __C1RXF4EID__EID7__POSITION                 0x00000007
#define __C1RXF4EID__EID7__MASK                     0x00000080
#define __C1RXF4EID__EID7__LENGTH                   0x00000001

#define __C1RXF4EID__EID8__POSITION                 0x00000008
#define __C1RXF4EID__EID8__MASK                     0x00000100
#define __C1RXF4EID__EID8__LENGTH                   0x00000001

#define __C1RXF4EID__EID9__POSITION                 0x00000009
#define __C1RXF4EID__EID9__MASK                     0x00000200
#define __C1RXF4EID__EID9__LENGTH                   0x00000001

#define __C1RXF4EID__EID10__POSITION                0x0000000A
#define __C1RXF4EID__EID10__MASK                    0x00000400
#define __C1RXF4EID__EID10__LENGTH                  0x00000001

#define __C1RXF4EID__EID11__POSITION                0x0000000B
#define __C1RXF4EID__EID11__MASK                    0x00000800
#define __C1RXF4EID__EID11__LENGTH                  0x00000001

#define __C1RXF4EID__EID12__POSITION                0x0000000C
#define __C1RXF4EID__EID12__MASK                    0x00001000
#define __C1RXF4EID__EID12__LENGTH                  0x00000001

#define __C1RXF4EID__EID13__POSITION                0x0000000D
#define __C1RXF4EID__EID13__MASK                    0x00002000
#define __C1RXF4EID__EID13__LENGTH                  0x00000001

#define __C1RXF4EID__EID14__POSITION                0x0000000E
#define __C1RXF4EID__EID14__MASK                    0x00004000
#define __C1RXF4EID__EID14__LENGTH                  0x00000001

#define __C1RXF4EID__EID15__POSITION                0x0000000F
#define __C1RXF4EID__EID15__MASK                    0x00008000
#define __C1RXF4EID__EID15__LENGTH                  0x00000001

#define __C1RXF5SID__EID__POSITION                  0x00000000
#define __C1RXF5SID__EID__MASK                      0x00000003
#define __C1RXF5SID__EID__LENGTH                    0x00000002

#define __C1RXF5SID__EXIDE__POSITION                0x00000003
#define __C1RXF5SID__EXIDE__MASK                    0x00000008
#define __C1RXF5SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF5SID__SID__POSITION                  0x00000005
#define __C1RXF5SID__SID__MASK                      0x0000FFE0
#define __C1RXF5SID__SID__LENGTH                    0x0000000B

#define __C1RXF5SID__EID16__POSITION                0x00000000
#define __C1RXF5SID__EID16__MASK                    0x00000001
#define __C1RXF5SID__EID16__LENGTH                  0x00000001

#define __C1RXF5SID__EID17__POSITION                0x00000001
#define __C1RXF5SID__EID17__MASK                    0x00000002
#define __C1RXF5SID__EID17__LENGTH                  0x00000001

#define __C1RXF5SID__SID0__POSITION                 0x00000005
#define __C1RXF5SID__SID0__MASK                     0x00000020
#define __C1RXF5SID__SID0__LENGTH                   0x00000001

#define __C1RXF5SID__SID1__POSITION                 0x00000006
#define __C1RXF5SID__SID1__MASK                     0x00000040
#define __C1RXF5SID__SID1__LENGTH                   0x00000001

#define __C1RXF5SID__SID2__POSITION                 0x00000007
#define __C1RXF5SID__SID2__MASK                     0x00000080
#define __C1RXF5SID__SID2__LENGTH                   0x00000001

#define __C1RXF5SID__SID3__POSITION                 0x00000008
#define __C1RXF5SID__SID3__MASK                     0x00000100
#define __C1RXF5SID__SID3__LENGTH                   0x00000001

#define __C1RXF5SID__SID4__POSITION                 0x00000009
#define __C1RXF5SID__SID4__MASK                     0x00000200
#define __C1RXF5SID__SID4__LENGTH                   0x00000001

#define __C1RXF5SID__SID5__POSITION                 0x0000000A
#define __C1RXF5SID__SID5__MASK                     0x00000400
#define __C1RXF5SID__SID5__LENGTH                   0x00000001

#define __C1RXF5SID__SID6__POSITION                 0x0000000B
#define __C1RXF5SID__SID6__MASK                     0x00000800
#define __C1RXF5SID__SID6__LENGTH                   0x00000001

#define __C1RXF5SID__SID7__POSITION                 0x0000000C
#define __C1RXF5SID__SID7__MASK                     0x00001000
#define __C1RXF5SID__SID7__LENGTH                   0x00000001

#define __C1RXF5SID__SID8__POSITION                 0x0000000D
#define __C1RXF5SID__SID8__MASK                     0x00002000
#define __C1RXF5SID__SID8__LENGTH                   0x00000001

#define __C1RXF5SID__SID9__POSITION                 0x0000000E
#define __C1RXF5SID__SID9__MASK                     0x00004000
#define __C1RXF5SID__SID9__LENGTH                   0x00000001

#define __C1RXF5SID__SID10__POSITION                0x0000000F
#define __C1RXF5SID__SID10__MASK                    0x00008000
#define __C1RXF5SID__SID10__LENGTH                  0x00000001

#define __C1RXF5EID__EID__POSITION                  0x00000000
#define __C1RXF5EID__EID__MASK                      0x0000FFFF
#define __C1RXF5EID__EID__LENGTH                    0x00000010

#define __C1RXF5EID__EID0__POSITION                 0x00000000
#define __C1RXF5EID__EID0__MASK                     0x00000001
#define __C1RXF5EID__EID0__LENGTH                   0x00000001

#define __C1RXF5EID__EID1__POSITION                 0x00000001
#define __C1RXF5EID__EID1__MASK                     0x00000002
#define __C1RXF5EID__EID1__LENGTH                   0x00000001

#define __C1RXF5EID__EID2__POSITION                 0x00000002
#define __C1RXF5EID__EID2__MASK                     0x00000004
#define __C1RXF5EID__EID2__LENGTH                   0x00000001

#define __C1RXF5EID__EID3__POSITION                 0x00000003
#define __C1RXF5EID__EID3__MASK                     0x00000008
#define __C1RXF5EID__EID3__LENGTH                   0x00000001

#define __C1RXF5EID__EID4__POSITION                 0x00000004
#define __C1RXF5EID__EID4__MASK                     0x00000010
#define __C1RXF5EID__EID4__LENGTH                   0x00000001

#define __C1RXF5EID__EID5__POSITION                 0x00000005
#define __C1RXF5EID__EID5__MASK                     0x00000020
#define __C1RXF5EID__EID5__LENGTH                   0x00000001

#define __C1RXF5EID__EID6__POSITION                 0x00000006
#define __C1RXF5EID__EID6__MASK                     0x00000040
#define __C1RXF5EID__EID6__LENGTH                   0x00000001

#define __C1RXF5EID__EID7__POSITION                 0x00000007
#define __C1RXF5EID__EID7__MASK                     0x00000080
#define __C1RXF5EID__EID7__LENGTH                   0x00000001

#define __C1RXF5EID__EID8__POSITION                 0x00000008
#define __C1RXF5EID__EID8__MASK                     0x00000100
#define __C1RXF5EID__EID8__LENGTH                   0x00000001

#define __C1RXF5EID__EID9__POSITION                 0x00000009
#define __C1RXF5EID__EID9__MASK                     0x00000200
#define __C1RXF5EID__EID9__LENGTH                   0x00000001

#define __C1RXF5EID__EID10__POSITION                0x0000000A
#define __C1RXF5EID__EID10__MASK                    0x00000400
#define __C1RXF5EID__EID10__LENGTH                  0x00000001

#define __C1RXF5EID__EID11__POSITION                0x0000000B
#define __C1RXF5EID__EID11__MASK                    0x00000800
#define __C1RXF5EID__EID11__LENGTH                  0x00000001

#define __C1RXF5EID__EID12__POSITION                0x0000000C
#define __C1RXF5EID__EID12__MASK                    0x00001000
#define __C1RXF5EID__EID12__LENGTH                  0x00000001

#define __C1RXF5EID__EID13__POSITION                0x0000000D
#define __C1RXF5EID__EID13__MASK                    0x00002000
#define __C1RXF5EID__EID13__LENGTH                  0x00000001

#define __C1RXF5EID__EID14__POSITION                0x0000000E
#define __C1RXF5EID__EID14__MASK                    0x00004000
#define __C1RXF5EID__EID14__LENGTH                  0x00000001

#define __C1RXF5EID__EID15__POSITION                0x0000000F
#define __C1RXF5EID__EID15__MASK                    0x00008000
#define __C1RXF5EID__EID15__LENGTH                  0x00000001

#define __C1RXF6SID__EID__POSITION                  0x00000000
#define __C1RXF6SID__EID__MASK                      0x00000003
#define __C1RXF6SID__EID__LENGTH                    0x00000002

#define __C1RXF6SID__EXIDE__POSITION                0x00000003
#define __C1RXF6SID__EXIDE__MASK                    0x00000008
#define __C1RXF6SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF6SID__SID__POSITION                  0x00000005
#define __C1RXF6SID__SID__MASK                      0x0000FFE0
#define __C1RXF6SID__SID__LENGTH                    0x0000000B

#define __C1RXF6SID__EID16__POSITION                0x00000000
#define __C1RXF6SID__EID16__MASK                    0x00000001
#define __C1RXF6SID__EID16__LENGTH                  0x00000001

#define __C1RXF6SID__EID17__POSITION                0x00000001
#define __C1RXF6SID__EID17__MASK                    0x00000002
#define __C1RXF6SID__EID17__LENGTH                  0x00000001

#define __C1RXF6SID__SID0__POSITION                 0x00000005
#define __C1RXF6SID__SID0__MASK                     0x00000020
#define __C1RXF6SID__SID0__LENGTH                   0x00000001

#define __C1RXF6SID__SID1__POSITION                 0x00000006
#define __C1RXF6SID__SID1__MASK                     0x00000040
#define __C1RXF6SID__SID1__LENGTH                   0x00000001

#define __C1RXF6SID__SID2__POSITION                 0x00000007
#define __C1RXF6SID__SID2__MASK                     0x00000080
#define __C1RXF6SID__SID2__LENGTH                   0x00000001

#define __C1RXF6SID__SID3__POSITION                 0x00000008
#define __C1RXF6SID__SID3__MASK                     0x00000100
#define __C1RXF6SID__SID3__LENGTH                   0x00000001

#define __C1RXF6SID__SID4__POSITION                 0x00000009
#define __C1RXF6SID__SID4__MASK                     0x00000200
#define __C1RXF6SID__SID4__LENGTH                   0x00000001

#define __C1RXF6SID__SID5__POSITION                 0x0000000A
#define __C1RXF6SID__SID5__MASK                     0x00000400
#define __C1RXF6SID__SID5__LENGTH                   0x00000001

#define __C1RXF6SID__SID6__POSITION                 0x0000000B
#define __C1RXF6SID__SID6__MASK                     0x00000800
#define __C1RXF6SID__SID6__LENGTH                   0x00000001

#define __C1RXF6SID__SID7__POSITION                 0x0000000C
#define __C1RXF6SID__SID7__MASK                     0x00001000
#define __C1RXF6SID__SID7__LENGTH                   0x00000001

#define __C1RXF6SID__SID8__POSITION                 0x0000000D
#define __C1RXF6SID__SID8__MASK                     0x00002000
#define __C1RXF6SID__SID8__LENGTH                   0x00000001

#define __C1RXF6SID__SID9__POSITION                 0x0000000E
#define __C1RXF6SID__SID9__MASK                     0x00004000
#define __C1RXF6SID__SID9__LENGTH                   0x00000001

#define __C1RXF6SID__SID10__POSITION                0x0000000F
#define __C1RXF6SID__SID10__MASK                    0x00008000
#define __C1RXF6SID__SID10__LENGTH                  0x00000001

#define __C1RXF6EID__EID__POSITION                  0x00000000
#define __C1RXF6EID__EID__MASK                      0x0000FFFF
#define __C1RXF6EID__EID__LENGTH                    0x00000010

#define __C1RXF6EID__EID0__POSITION                 0x00000000
#define __C1RXF6EID__EID0__MASK                     0x00000001
#define __C1RXF6EID__EID0__LENGTH                   0x00000001

#define __C1RXF6EID__EID1__POSITION                 0x00000001
#define __C1RXF6EID__EID1__MASK                     0x00000002
#define __C1RXF6EID__EID1__LENGTH                   0x00000001

#define __C1RXF6EID__EID2__POSITION                 0x00000002
#define __C1RXF6EID__EID2__MASK                     0x00000004
#define __C1RXF6EID__EID2__LENGTH                   0x00000001

#define __C1RXF6EID__EID3__POSITION                 0x00000003
#define __C1RXF6EID__EID3__MASK                     0x00000008
#define __C1RXF6EID__EID3__LENGTH                   0x00000001

#define __C1RXF6EID__EID4__POSITION                 0x00000004
#define __C1RXF6EID__EID4__MASK                     0x00000010
#define __C1RXF6EID__EID4__LENGTH                   0x00000001

#define __C1RXF6EID__EID5__POSITION                 0x00000005
#define __C1RXF6EID__EID5__MASK                     0x00000020
#define __C1RXF6EID__EID5__LENGTH                   0x00000001

#define __C1RXF6EID__EID6__POSITION                 0x00000006
#define __C1RXF6EID__EID6__MASK                     0x00000040
#define __C1RXF6EID__EID6__LENGTH                   0x00000001

#define __C1RXF6EID__EID7__POSITION                 0x00000007
#define __C1RXF6EID__EID7__MASK                     0x00000080
#define __C1RXF6EID__EID7__LENGTH                   0x00000001

#define __C1RXF6EID__EID8__POSITION                 0x00000008
#define __C1RXF6EID__EID8__MASK                     0x00000100
#define __C1RXF6EID__EID8__LENGTH                   0x00000001

#define __C1RXF6EID__EID9__POSITION                 0x00000009
#define __C1RXF6EID__EID9__MASK                     0x00000200
#define __C1RXF6EID__EID9__LENGTH                   0x00000001

#define __C1RXF6EID__EID10__POSITION                0x0000000A
#define __C1RXF6EID__EID10__MASK                    0x00000400
#define __C1RXF6EID__EID10__LENGTH                  0x00000001

#define __C1RXF6EID__EID11__POSITION                0x0000000B
#define __C1RXF6EID__EID11__MASK                    0x00000800
#define __C1RXF6EID__EID11__LENGTH                  0x00000001

#define __C1RXF6EID__EID12__POSITION                0x0000000C
#define __C1RXF6EID__EID12__MASK                    0x00001000
#define __C1RXF6EID__EID12__LENGTH                  0x00000001

#define __C1RXF6EID__EID13__POSITION                0x0000000D
#define __C1RXF6EID__EID13__MASK                    0x00002000
#define __C1RXF6EID__EID13__LENGTH                  0x00000001

#define __C1RXF6EID__EID14__POSITION                0x0000000E
#define __C1RXF6EID__EID14__MASK                    0x00004000
#define __C1RXF6EID__EID14__LENGTH                  0x00000001

#define __C1RXF6EID__EID15__POSITION                0x0000000F
#define __C1RXF6EID__EID15__MASK                    0x00008000
#define __C1RXF6EID__EID15__LENGTH                  0x00000001

#define __C1RXF7SID__EID__POSITION                  0x00000000
#define __C1RXF7SID__EID__MASK                      0x00000003
#define __C1RXF7SID__EID__LENGTH                    0x00000002

#define __C1RXF7SID__EXIDE__POSITION                0x00000003
#define __C1RXF7SID__EXIDE__MASK                    0x00000008
#define __C1RXF7SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF7SID__SID__POSITION                  0x00000005
#define __C1RXF7SID__SID__MASK                      0x0000FFE0
#define __C1RXF7SID__SID__LENGTH                    0x0000000B

#define __C1RXF7SID__EID16__POSITION                0x00000000
#define __C1RXF7SID__EID16__MASK                    0x00000001
#define __C1RXF7SID__EID16__LENGTH                  0x00000001

#define __C1RXF7SID__EID17__POSITION                0x00000001
#define __C1RXF7SID__EID17__MASK                    0x00000002
#define __C1RXF7SID__EID17__LENGTH                  0x00000001

#define __C1RXF7SID__SID0__POSITION                 0x00000005
#define __C1RXF7SID__SID0__MASK                     0x00000020
#define __C1RXF7SID__SID0__LENGTH                   0x00000001

#define __C1RXF7SID__SID1__POSITION                 0x00000006
#define __C1RXF7SID__SID1__MASK                     0x00000040
#define __C1RXF7SID__SID1__LENGTH                   0x00000001

#define __C1RXF7SID__SID2__POSITION                 0x00000007
#define __C1RXF7SID__SID2__MASK                     0x00000080
#define __C1RXF7SID__SID2__LENGTH                   0x00000001

#define __C1RXF7SID__SID3__POSITION                 0x00000008
#define __C1RXF7SID__SID3__MASK                     0x00000100
#define __C1RXF7SID__SID3__LENGTH                   0x00000001

#define __C1RXF7SID__SID4__POSITION                 0x00000009
#define __C1RXF7SID__SID4__MASK                     0x00000200
#define __C1RXF7SID__SID4__LENGTH                   0x00000001

#define __C1RXF7SID__SID5__POSITION                 0x0000000A
#define __C1RXF7SID__SID5__MASK                     0x00000400
#define __C1RXF7SID__SID5__LENGTH                   0x00000001

#define __C1RXF7SID__SID6__POSITION                 0x0000000B
#define __C1RXF7SID__SID6__MASK                     0x00000800
#define __C1RXF7SID__SID6__LENGTH                   0x00000001

#define __C1RXF7SID__SID7__POSITION                 0x0000000C
#define __C1RXF7SID__SID7__MASK                     0x00001000
#define __C1RXF7SID__SID7__LENGTH                   0x00000001

#define __C1RXF7SID__SID8__POSITION                 0x0000000D
#define __C1RXF7SID__SID8__MASK                     0x00002000
#define __C1RXF7SID__SID8__LENGTH                   0x00000001

#define __C1RXF7SID__SID9__POSITION                 0x0000000E
#define __C1RXF7SID__SID9__MASK                     0x00004000
#define __C1RXF7SID__SID9__LENGTH                   0x00000001

#define __C1RXF7SID__SID10__POSITION                0x0000000F
#define __C1RXF7SID__SID10__MASK                    0x00008000
#define __C1RXF7SID__SID10__LENGTH                  0x00000001

#define __C1RXF7EID__EID__POSITION                  0x00000000
#define __C1RXF7EID__EID__MASK                      0x0000FFFF
#define __C1RXF7EID__EID__LENGTH                    0x00000010

#define __C1RXF7EID__EID0__POSITION                 0x00000000
#define __C1RXF7EID__EID0__MASK                     0x00000001
#define __C1RXF7EID__EID0__LENGTH                   0x00000001

#define __C1RXF7EID__EID1__POSITION                 0x00000001
#define __C1RXF7EID__EID1__MASK                     0x00000002
#define __C1RXF7EID__EID1__LENGTH                   0x00000001

#define __C1RXF7EID__EID2__POSITION                 0x00000002
#define __C1RXF7EID__EID2__MASK                     0x00000004
#define __C1RXF7EID__EID2__LENGTH                   0x00000001

#define __C1RXF7EID__EID3__POSITION                 0x00000003
#define __C1RXF7EID__EID3__MASK                     0x00000008
#define __C1RXF7EID__EID3__LENGTH                   0x00000001

#define __C1RXF7EID__EID4__POSITION                 0x00000004
#define __C1RXF7EID__EID4__MASK                     0x00000010
#define __C1RXF7EID__EID4__LENGTH                   0x00000001

#define __C1RXF7EID__EID5__POSITION                 0x00000005
#define __C1RXF7EID__EID5__MASK                     0x00000020
#define __C1RXF7EID__EID5__LENGTH                   0x00000001

#define __C1RXF7EID__EID6__POSITION                 0x00000006
#define __C1RXF7EID__EID6__MASK                     0x00000040
#define __C1RXF7EID__EID6__LENGTH                   0x00000001

#define __C1RXF7EID__EID7__POSITION                 0x00000007
#define __C1RXF7EID__EID7__MASK                     0x00000080
#define __C1RXF7EID__EID7__LENGTH                   0x00000001

#define __C1RXF7EID__EID8__POSITION                 0x00000008
#define __C1RXF7EID__EID8__MASK                     0x00000100
#define __C1RXF7EID__EID8__LENGTH                   0x00000001

#define __C1RXF7EID__EID9__POSITION                 0x00000009
#define __C1RXF7EID__EID9__MASK                     0x00000200
#define __C1RXF7EID__EID9__LENGTH                   0x00000001

#define __C1RXF7EID__EID10__POSITION                0x0000000A
#define __C1RXF7EID__EID10__MASK                    0x00000400
#define __C1RXF7EID__EID10__LENGTH                  0x00000001

#define __C1RXF7EID__EID11__POSITION                0x0000000B
#define __C1RXF7EID__EID11__MASK                    0x00000800
#define __C1RXF7EID__EID11__LENGTH                  0x00000001

#define __C1RXF7EID__EID12__POSITION                0x0000000C
#define __C1RXF7EID__EID12__MASK                    0x00001000
#define __C1RXF7EID__EID12__LENGTH                  0x00000001

#define __C1RXF7EID__EID13__POSITION                0x0000000D
#define __C1RXF7EID__EID13__MASK                    0x00002000
#define __C1RXF7EID__EID13__LENGTH                  0x00000001

#define __C1RXF7EID__EID14__POSITION                0x0000000E
#define __C1RXF7EID__EID14__MASK                    0x00004000
#define __C1RXF7EID__EID14__LENGTH                  0x00000001

#define __C1RXF7EID__EID15__POSITION                0x0000000F
#define __C1RXF7EID__EID15__MASK                    0x00008000
#define __C1RXF7EID__EID15__LENGTH                  0x00000001

#define __C1RXF8SID__EID__POSITION                  0x00000000
#define __C1RXF8SID__EID__MASK                      0x00000003
#define __C1RXF8SID__EID__LENGTH                    0x00000002

#define __C1RXF8SID__EXIDE__POSITION                0x00000003
#define __C1RXF8SID__EXIDE__MASK                    0x00000008
#define __C1RXF8SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF8SID__SID__POSITION                  0x00000005
#define __C1RXF8SID__SID__MASK                      0x0000FFE0
#define __C1RXF8SID__SID__LENGTH                    0x0000000B

#define __C1RXF8SID__EID16__POSITION                0x00000000
#define __C1RXF8SID__EID16__MASK                    0x00000001
#define __C1RXF8SID__EID16__LENGTH                  0x00000001

#define __C1RXF8SID__EID17__POSITION                0x00000001
#define __C1RXF8SID__EID17__MASK                    0x00000002
#define __C1RXF8SID__EID17__LENGTH                  0x00000001

#define __C1RXF8SID__SID0__POSITION                 0x00000005
#define __C1RXF8SID__SID0__MASK                     0x00000020
#define __C1RXF8SID__SID0__LENGTH                   0x00000001

#define __C1RXF8SID__SID1__POSITION                 0x00000006
#define __C1RXF8SID__SID1__MASK                     0x00000040
#define __C1RXF8SID__SID1__LENGTH                   0x00000001

#define __C1RXF8SID__SID2__POSITION                 0x00000007
#define __C1RXF8SID__SID2__MASK                     0x00000080
#define __C1RXF8SID__SID2__LENGTH                   0x00000001

#define __C1RXF8SID__SID3__POSITION                 0x00000008
#define __C1RXF8SID__SID3__MASK                     0x00000100
#define __C1RXF8SID__SID3__LENGTH                   0x00000001

#define __C1RXF8SID__SID4__POSITION                 0x00000009
#define __C1RXF8SID__SID4__MASK                     0x00000200
#define __C1RXF8SID__SID4__LENGTH                   0x00000001

#define __C1RXF8SID__SID5__POSITION                 0x0000000A
#define __C1RXF8SID__SID5__MASK                     0x00000400
#define __C1RXF8SID__SID5__LENGTH                   0x00000001

#define __C1RXF8SID__SID6__POSITION                 0x0000000B
#define __C1RXF8SID__SID6__MASK                     0x00000800
#define __C1RXF8SID__SID6__LENGTH                   0x00000001

#define __C1RXF8SID__SID7__POSITION                 0x0000000C
#define __C1RXF8SID__SID7__MASK                     0x00001000
#define __C1RXF8SID__SID7__LENGTH                   0x00000001

#define __C1RXF8SID__SID8__POSITION                 0x0000000D
#define __C1RXF8SID__SID8__MASK                     0x00002000
#define __C1RXF8SID__SID8__LENGTH                   0x00000001

#define __C1RXF8SID__SID9__POSITION                 0x0000000E
#define __C1RXF8SID__SID9__MASK                     0x00004000
#define __C1RXF8SID__SID9__LENGTH                   0x00000001

#define __C1RXF8SID__SID10__POSITION                0x0000000F
#define __C1RXF8SID__SID10__MASK                    0x00008000
#define __C1RXF8SID__SID10__LENGTH                  0x00000001

#define __C1RXF8EID__EID__POSITION                  0x00000000
#define __C1RXF8EID__EID__MASK                      0x0000FFFF
#define __C1RXF8EID__EID__LENGTH                    0x00000010

#define __C1RXF8EID__EID0__POSITION                 0x00000000
#define __C1RXF8EID__EID0__MASK                     0x00000001
#define __C1RXF8EID__EID0__LENGTH                   0x00000001

#define __C1RXF8EID__EID1__POSITION                 0x00000001
#define __C1RXF8EID__EID1__MASK                     0x00000002
#define __C1RXF8EID__EID1__LENGTH                   0x00000001

#define __C1RXF8EID__EID2__POSITION                 0x00000002
#define __C1RXF8EID__EID2__MASK                     0x00000004
#define __C1RXF8EID__EID2__LENGTH                   0x00000001

#define __C1RXF8EID__EID3__POSITION                 0x00000003
#define __C1RXF8EID__EID3__MASK                     0x00000008
#define __C1RXF8EID__EID3__LENGTH                   0x00000001

#define __C1RXF8EID__EID4__POSITION                 0x00000004
#define __C1RXF8EID__EID4__MASK                     0x00000010
#define __C1RXF8EID__EID4__LENGTH                   0x00000001

#define __C1RXF8EID__EID5__POSITION                 0x00000005
#define __C1RXF8EID__EID5__MASK                     0x00000020
#define __C1RXF8EID__EID5__LENGTH                   0x00000001

#define __C1RXF8EID__EID6__POSITION                 0x00000006
#define __C1RXF8EID__EID6__MASK                     0x00000040
#define __C1RXF8EID__EID6__LENGTH                   0x00000001

#define __C1RXF8EID__EID7__POSITION                 0x00000007
#define __C1RXF8EID__EID7__MASK                     0x00000080
#define __C1RXF8EID__EID7__LENGTH                   0x00000001

#define __C1RXF8EID__EID8__POSITION                 0x00000008
#define __C1RXF8EID__EID8__MASK                     0x00000100
#define __C1RXF8EID__EID8__LENGTH                   0x00000001

#define __C1RXF8EID__EID9__POSITION                 0x00000009
#define __C1RXF8EID__EID9__MASK                     0x00000200
#define __C1RXF8EID__EID9__LENGTH                   0x00000001

#define __C1RXF8EID__EID10__POSITION                0x0000000A
#define __C1RXF8EID__EID10__MASK                    0x00000400
#define __C1RXF8EID__EID10__LENGTH                  0x00000001

#define __C1RXF8EID__EID11__POSITION                0x0000000B
#define __C1RXF8EID__EID11__MASK                    0x00000800
#define __C1RXF8EID__EID11__LENGTH                  0x00000001

#define __C1RXF8EID__EID12__POSITION                0x0000000C
#define __C1RXF8EID__EID12__MASK                    0x00001000
#define __C1RXF8EID__EID12__LENGTH                  0x00000001

#define __C1RXF8EID__EID13__POSITION                0x0000000D
#define __C1RXF8EID__EID13__MASK                    0x00002000
#define __C1RXF8EID__EID13__LENGTH                  0x00000001

#define __C1RXF8EID__EID14__POSITION                0x0000000E
#define __C1RXF8EID__EID14__MASK                    0x00004000
#define __C1RXF8EID__EID14__LENGTH                  0x00000001

#define __C1RXF8EID__EID15__POSITION                0x0000000F
#define __C1RXF8EID__EID15__MASK                    0x00008000
#define __C1RXF8EID__EID15__LENGTH                  0x00000001

#define __C1RXF9SID__EID__POSITION                  0x00000000
#define __C1RXF9SID__EID__MASK                      0x00000003
#define __C1RXF9SID__EID__LENGTH                    0x00000002

#define __C1RXF9SID__EXIDE__POSITION                0x00000003
#define __C1RXF9SID__EXIDE__MASK                    0x00000008
#define __C1RXF9SID__EXIDE__LENGTH                  0x00000001

#define __C1RXF9SID__SID__POSITION                  0x00000005
#define __C1RXF9SID__SID__MASK                      0x0000FFE0
#define __C1RXF9SID__SID__LENGTH                    0x0000000B

#define __C1RXF9SID__EID16__POSITION                0x00000000
#define __C1RXF9SID__EID16__MASK                    0x00000001
#define __C1RXF9SID__EID16__LENGTH                  0x00000001

#define __C1RXF9SID__EID17__POSITION                0x00000001
#define __C1RXF9SID__EID17__MASK                    0x00000002
#define __C1RXF9SID__EID17__LENGTH                  0x00000001

#define __C1RXF9SID__SID0__POSITION                 0x00000005
#define __C1RXF9SID__SID0__MASK                     0x00000020
#define __C1RXF9SID__SID0__LENGTH                   0x00000001

#define __C1RXF9SID__SID1__POSITION                 0x00000006
#define __C1RXF9SID__SID1__MASK                     0x00000040
#define __C1RXF9SID__SID1__LENGTH                   0x00000001

#define __C1RXF9SID__SID2__POSITION                 0x00000007
#define __C1RXF9SID__SID2__MASK                     0x00000080
#define __C1RXF9SID__SID2__LENGTH                   0x00000001

#define __C1RXF9SID__SID3__POSITION                 0x00000008
#define __C1RXF9SID__SID3__MASK                     0x00000100
#define __C1RXF9SID__SID3__LENGTH                   0x00000001

#define __C1RXF9SID__SID4__POSITION                 0x00000009
#define __C1RXF9SID__SID4__MASK                     0x00000200
#define __C1RXF9SID__SID4__LENGTH                   0x00000001

#define __C1RXF9SID__SID5__POSITION                 0x0000000A
#define __C1RXF9SID__SID5__MASK                     0x00000400
#define __C1RXF9SID__SID5__LENGTH                   0x00000001

#define __C1RXF9SID__SID6__POSITION                 0x0000000B
#define __C1RXF9SID__SID6__MASK                     0x00000800
#define __C1RXF9SID__SID6__LENGTH                   0x00000001

#define __C1RXF9SID__SID7__POSITION                 0x0000000C
#define __C1RXF9SID__SID7__MASK                     0x00001000
#define __C1RXF9SID__SID7__LENGTH                   0x00000001

#define __C1RXF9SID__SID8__POSITION                 0x0000000D
#define __C1RXF9SID__SID8__MASK                     0x00002000
#define __C1RXF9SID__SID8__LENGTH                   0x00000001

#define __C1RXF9SID__SID9__POSITION                 0x0000000E
#define __C1RXF9SID__SID9__MASK                     0x00004000
#define __C1RXF9SID__SID9__LENGTH                   0x00000001

#define __C1RXF9SID__SID10__POSITION                0x0000000F
#define __C1RXF9SID__SID10__MASK                    0x00008000
#define __C1RXF9SID__SID10__LENGTH                  0x00000001

#define __C1RXF9EID__EID__POSITION                  0x00000000
#define __C1RXF9EID__EID__MASK                      0x0000FFFF
#define __C1RXF9EID__EID__LENGTH                    0x00000010

#define __C1RXF9EID__EID0__POSITION                 0x00000000
#define __C1RXF9EID__EID0__MASK                     0x00000001
#define __C1RXF9EID__EID0__LENGTH                   0x00000001

#define __C1RXF9EID__EID1__POSITION                 0x00000001
#define __C1RXF9EID__EID1__MASK                     0x00000002
#define __C1RXF9EID__EID1__LENGTH                   0x00000001

#define __C1RXF9EID__EID2__POSITION                 0x00000002
#define __C1RXF9EID__EID2__MASK                     0x00000004
#define __C1RXF9EID__EID2__LENGTH                   0x00000001

#define __C1RXF9EID__EID3__POSITION                 0x00000003
#define __C1RXF9EID__EID3__MASK                     0x00000008
#define __C1RXF9EID__EID3__LENGTH                   0x00000001

#define __C1RXF9EID__EID4__POSITION                 0x00000004
#define __C1RXF9EID__EID4__MASK                     0x00000010
#define __C1RXF9EID__EID4__LENGTH                   0x00000001

#define __C1RXF9EID__EID5__POSITION                 0x00000005
#define __C1RXF9EID__EID5__MASK                     0x00000020
#define __C1RXF9EID__EID5__LENGTH                   0x00000001

#define __C1RXF9EID__EID6__POSITION                 0x00000006
#define __C1RXF9EID__EID6__MASK                     0x00000040
#define __C1RXF9EID__EID6__LENGTH                   0x00000001

#define __C1RXF9EID__EID7__POSITION                 0x00000007
#define __C1RXF9EID__EID7__MASK                     0x00000080
#define __C1RXF9EID__EID7__LENGTH                   0x00000001

#define __C1RXF9EID__EID8__POSITION                 0x00000008
#define __C1RXF9EID__EID8__MASK                     0x00000100
#define __C1RXF9EID__EID8__LENGTH                   0x00000001

#define __C1RXF9EID__EID9__POSITION                 0x00000009
#define __C1RXF9EID__EID9__MASK                     0x00000200
#define __C1RXF9EID__EID9__LENGTH                   0x00000001

#define __C1RXF9EID__EID10__POSITION                0x0000000A
#define __C1RXF9EID__EID10__MASK                    0x00000400
#define __C1RXF9EID__EID10__LENGTH                  0x00000001

#define __C1RXF9EID__EID11__POSITION                0x0000000B
#define __C1RXF9EID__EID11__MASK                    0x00000800
#define __C1RXF9EID__EID11__LENGTH                  0x00000001

#define __C1RXF9EID__EID12__POSITION                0x0000000C
#define __C1RXF9EID__EID12__MASK                    0x00001000
#define __C1RXF9EID__EID12__LENGTH                  0x00000001

#define __C1RXF9EID__EID13__POSITION                0x0000000D
#define __C1RXF9EID__EID13__MASK                    0x00002000
#define __C1RXF9EID__EID13__LENGTH                  0x00000001

#define __C1RXF9EID__EID14__POSITION                0x0000000E
#define __C1RXF9EID__EID14__MASK                    0x00004000
#define __C1RXF9EID__EID14__LENGTH                  0x00000001

#define __C1RXF9EID__EID15__POSITION                0x0000000F
#define __C1RXF9EID__EID15__MASK                    0x00008000
#define __C1RXF9EID__EID15__LENGTH                  0x00000001

#define __C1RXF10SID__EID__POSITION                 0x00000000
#define __C1RXF10SID__EID__MASK                     0x00000003
#define __C1RXF10SID__EID__LENGTH                   0x00000002

#define __C1RXF10SID__EXIDE__POSITION               0x00000003
#define __C1RXF10SID__EXIDE__MASK                   0x00000008
#define __C1RXF10SID__EXIDE__LENGTH                 0x00000001

#define __C1RXF10SID__SID__POSITION                 0x00000005
#define __C1RXF10SID__SID__MASK                     0x0000FFE0
#define __C1RXF10SID__SID__LENGTH                   0x0000000B

#define __C1RXF10SID__EID16__POSITION               0x00000000
#define __C1RXF10SID__EID16__MASK                   0x00000001
#define __C1RXF10SID__EID16__LENGTH                 0x00000001

#define __C1RXF10SID__EID17__POSITION               0x00000001
#define __C1RXF10SID__EID17__MASK                   0x00000002
#define __C1RXF10SID__EID17__LENGTH                 0x00000001

#define __C1RXF10SID__SID0__POSITION                0x00000005
#define __C1RXF10SID__SID0__MASK                    0x00000020
#define __C1RXF10SID__SID0__LENGTH                  0x00000001

#define __C1RXF10SID__SID1__POSITION                0x00000006
#define __C1RXF10SID__SID1__MASK                    0x00000040
#define __C1RXF10SID__SID1__LENGTH                  0x00000001

#define __C1RXF10SID__SID2__POSITION                0x00000007
#define __C1RXF10SID__SID2__MASK                    0x00000080
#define __C1RXF10SID__SID2__LENGTH                  0x00000001

#define __C1RXF10SID__SID3__POSITION                0x00000008
#define __C1RXF10SID__SID3__MASK                    0x00000100
#define __C1RXF10SID__SID3__LENGTH                  0x00000001

#define __C1RXF10SID__SID4__POSITION                0x00000009
#define __C1RXF10SID__SID4__MASK                    0x00000200
#define __C1RXF10SID__SID4__LENGTH                  0x00000001

#define __C1RXF10SID__SID5__POSITION                0x0000000A
#define __C1RXF10SID__SID5__MASK                    0x00000400
#define __C1RXF10SID__SID5__LENGTH                  0x00000001

#define __C1RXF10SID__SID6__POSITION                0x0000000B
#define __C1RXF10SID__SID6__MASK                    0x00000800
#define __C1RXF10SID__SID6__LENGTH                  0x00000001

#define __C1RXF10SID__SID7__POSITION                0x0000000C
#define __C1RXF10SID__SID7__MASK                    0x00001000
#define __C1RXF10SID__SID7__LENGTH                  0x00000001

#define __C1RXF10SID__SID8__POSITION                0x0000000D
#define __C1RXF10SID__SID8__MASK                    0x00002000
#define __C1RXF10SID__SID8__LENGTH                  0x00000001

#define __C1RXF10SID__SID9__POSITION                0x0000000E
#define __C1RXF10SID__SID9__MASK                    0x00004000
#define __C1RXF10SID__SID9__LENGTH                  0x00000001

#define __C1RXF10SID__SID10__POSITION               0x0000000F
#define __C1RXF10SID__SID10__MASK                   0x00008000
#define __C1RXF10SID__SID10__LENGTH                 0x00000001

#define __C1RXF10EID__EID__POSITION                 0x00000000
#define __C1RXF10EID__EID__MASK                     0x0000FFFF
#define __C1RXF10EID__EID__LENGTH                   0x00000010

#define __C1RXF10EID__EID0__POSITION                0x00000000
#define __C1RXF10EID__EID0__MASK                    0x00000001
#define __C1RXF10EID__EID0__LENGTH                  0x00000001

#define __C1RXF10EID__EID1__POSITION                0x00000001
#define __C1RXF10EID__EID1__MASK                    0x00000002
#define __C1RXF10EID__EID1__LENGTH                  0x00000001

#define __C1RXF10EID__EID2__POSITION                0x00000002
#define __C1RXF10EID__EID2__MASK                    0x00000004
#define __C1RXF10EID__EID2__LENGTH                  0x00000001

#define __C1RXF10EID__EID3__POSITION                0x00000003
#define __C1RXF10EID__EID3__MASK                    0x00000008
#define __C1RXF10EID__EID3__LENGTH                  0x00000001

#define __C1RXF10EID__EID4__POSITION                0x00000004
#define __C1RXF10EID__EID4__MASK                    0x00000010
#define __C1RXF10EID__EID4__LENGTH                  0x00000001

#define __C1RXF10EID__EID5__POSITION                0x00000005
#define __C1RXF10EID__EID5__MASK                    0x00000020
#define __C1RXF10EID__EID5__LENGTH                  0x00000001

#define __C1RXF10EID__EID6__POSITION                0x00000006
#define __C1RXF10EID__EID6__MASK                    0x00000040
#define __C1RXF10EID__EID6__LENGTH                  0x00000001

#define __C1RXF10EID__EID7__POSITION                0x00000007
#define __C1RXF10EID__EID7__MASK                    0x00000080
#define __C1RXF10EID__EID7__LENGTH                  0x00000001

#define __C1RXF10EID__EID8__POSITION                0x00000008
#define __C1RXF10EID__EID8__MASK                    0x00000100
#define __C1RXF10EID__EID8__LENGTH                  0x00000001

#define __C1RXF10EID__EID9__POSITION                0x00000009
#define __C1RXF10EID__EID9__MASK                    0x00000200
#define __C1RXF10EID__EID9__LENGTH                  0x00000001

#define __C1RXF10EID__EID10__POSITION               0x0000000A
#define __C1RXF10EID__EID10__MASK                   0x00000400
#define __C1RXF10EID__EID10__LENGTH                 0x00000001

#define __C1RXF10EID__EID11__POSITION               0x0000000B
#define __C1RXF10EID__EID11__MASK                   0x00000800
#define __C1RXF10EID__EID11__LENGTH                 0x00000001

#define __C1RXF10EID__EID12__POSITION               0x0000000C
#define __C1RXF10EID__EID12__MASK                   0x00001000
#define __C1RXF10EID__EID12__LENGTH                 0x00000001

#define __C1RXF10EID__EID13__POSITION               0x0000000D
#define __C1RXF10EID__EID13__MASK                   0x00002000
#define __C1RXF10EID__EID13__LENGTH                 0x00000001

#define __C1RXF10EID__EID14__POSITION               0x0000000E
#define __C1RXF10EID__EID14__MASK                   0x00004000
#define __C1RXF10EID__EID14__LENGTH                 0x00000001

#define __C1RXF10EID__EID15__POSITION               0x0000000F
#define __C1RXF10EID__EID15__MASK                   0x00008000
#define __C1RXF10EID__EID15__LENGTH                 0x00000001

#define __C1RXF11SID__EID__POSITION                 0x00000000
#define __C1RXF11SID__EID__MASK                     0x00000003
#define __C1RXF11SID__EID__LENGTH                   0x00000002

#define __C1RXF11SID__EXIDE__POSITION               0x00000003
#define __C1RXF11SID__EXIDE__MASK                   0x00000008
#define __C1RXF11SID__EXIDE__LENGTH                 0x00000001

#define __C1RXF11SID__SID__POSITION                 0x00000005
#define __C1RXF11SID__SID__MASK                     0x0000FFE0
#define __C1RXF11SID__SID__LENGTH                   0x0000000B

#define __C1RXF11SID__EID16__POSITION               0x00000000
#define __C1RXF11SID__EID16__MASK                   0x00000001
#define __C1RXF11SID__EID16__LENGTH                 0x00000001

#define __C1RXF11SID__EID17__POSITION               0x00000001
#define __C1RXF11SID__EID17__MASK                   0x00000002
#define __C1RXF11SID__EID17__LENGTH                 0x00000001

#define __C1RXF11SID__SID0__POSITION                0x00000005
#define __C1RXF11SID__SID0__MASK                    0x00000020
#define __C1RXF11SID__SID0__LENGTH                  0x00000001

#define __C1RXF11SID__SID1__POSITION                0x00000006
#define __C1RXF11SID__SID1__MASK                    0x00000040
#define __C1RXF11SID__SID1__LENGTH                  0x00000001

#define __C1RXF11SID__SID2__POSITION                0x00000007
#define __C1RXF11SID__SID2__MASK                    0x00000080
#define __C1RXF11SID__SID2__LENGTH                  0x00000001

#define __C1RXF11SID__SID3__POSITION                0x00000008
#define __C1RXF11SID__SID3__MASK                    0x00000100
#define __C1RXF11SID__SID3__LENGTH                  0x00000001

#define __C1RXF11SID__SID4__POSITION                0x00000009
#define __C1RXF11SID__SID4__MASK                    0x00000200
#define __C1RXF11SID__SID4__LENGTH                  0x00000001

#define __C1RXF11SID__SID5__POSITION                0x0000000A
#define __C1RXF11SID__SID5__MASK                    0x00000400
#define __C1RXF11SID__SID5__LENGTH                  0x00000001

#define __C1RXF11SID__SID6__POSITION                0x0000000B
#define __C1RXF11SID__SID6__MASK                    0x00000800
#define __C1RXF11SID__SID6__LENGTH                  0x00000001

#define __C1RXF11SID__SID7__POSITION                0x0000000C
#define __C1RXF11SID__SID7__MASK                    0x00001000
#define __C1RXF11SID__SID7__LENGTH                  0x00000001

#define __C1RXF11SID__SID8__POSITION                0x0000000D
#define __C1RXF11SID__SID8__MASK                    0x00002000
#define __C1RXF11SID__SID8__LENGTH                  0x00000001

#define __C1RXF11SID__SID9__POSITION                0x0000000E
#define __C1RXF11SID__SID9__MASK                    0x00004000
#define __C1RXF11SID__SID9__LENGTH                  0x00000001

#define __C1RXF11SID__SID10__POSITION               0x0000000F
#define __C1RXF11SID__SID10__MASK                   0x00008000
#define __C1RXF11SID__SID10__LENGTH                 0x00000001

#define __C1RXF11EID__EID__POSITION                 0x00000000
#define __C1RXF11EID__EID__MASK                     0x0000FFFF
#define __C1RXF11EID__EID__LENGTH                   0x00000010

#define __C1RXF11EID__EID0__POSITION                0x00000000
#define __C1RXF11EID__EID0__MASK                    0x00000001
#define __C1RXF11EID__EID0__LENGTH                  0x00000001

#define __C1RXF11EID__EID1__POSITION                0x00000001
#define __C1RXF11EID__EID1__MASK                    0x00000002
#define __C1RXF11EID__EID1__LENGTH                  0x00000001

#define __C1RXF11EID__EID2__POSITION                0x00000002
#define __C1RXF11EID__EID2__MASK                    0x00000004
#define __C1RXF11EID__EID2__LENGTH                  0x00000001

#define __C1RXF11EID__EID3__POSITION                0x00000003
#define __C1RXF11EID__EID3__MASK                    0x00000008
#define __C1RXF11EID__EID3__LENGTH                  0x00000001

#define __C1RXF11EID__EID4__POSITION                0x00000004
#define __C1RXF11EID__EID4__MASK                    0x00000010
#define __C1RXF11EID__EID4__LENGTH                  0x00000001

#define __C1RXF11EID__EID5__POSITION                0x00000005
#define __C1RXF11EID__EID5__MASK                    0x00000020
#define __C1RXF11EID__EID5__LENGTH                  0x00000001

#define __C1RXF11EID__EID6__POSITION                0x00000006
#define __C1RXF11EID__EID6__MASK                    0x00000040
#define __C1RXF11EID__EID6__LENGTH                  0x00000001

#define __C1RXF11EID__EID7__POSITION                0x00000007
#define __C1RXF11EID__EID7__MASK                    0x00000080
#define __C1RXF11EID__EID7__LENGTH                  0x00000001

#define __C1RXF11EID__EID8__POSITION                0x00000008
#define __C1RXF11EID__EID8__MASK                    0x00000100
#define __C1RXF11EID__EID8__LENGTH                  0x00000001

#define __C1RXF11EID__EID9__POSITION                0x00000009
#define __C1RXF11EID__EID9__MASK                    0x00000200
#define __C1RXF11EID__EID9__LENGTH                  0x00000001

#define __C1RXF11EID__EID10__POSITION               0x0000000A
#define __C1RXF11EID__EID10__MASK                   0x00000400
#define __C1RXF11EID__EID10__LENGTH                 0x00000001

#define __C1RXF11EID__EID11__POSITION               0x0000000B
#define __C1RXF11EID__EID11__MASK                   0x00000800
#define __C1RXF11EID__EID11__LENGTH                 0x00000001

#define __C1RXF11EID__EID12__POSITION               0x0000000C
#define __C1RXF11EID__EID12__MASK                   0x00001000
#define __C1RXF11EID__EID12__LENGTH                 0x00000001

#define __C1RXF11EID__EID13__POSITION               0x0000000D
#define __C1RXF11EID__EID13__MASK                   0x00002000
#define __C1RXF11EID__EID13__LENGTH                 0x00000001

#define __C1RXF11EID__EID14__POSITION               0x0000000E
#define __C1RXF11EID__EID14__MASK                   0x00004000
#define __C1RXF11EID__EID14__LENGTH                 0x00000001

#define __C1RXF11EID__EID15__POSITION               0x0000000F
#define __C1RXF11EID__EID15__MASK                   0x00008000
#define __C1RXF11EID__EID15__LENGTH                 0x00000001

#define __C1RXF12SID__EID__POSITION                 0x00000000
#define __C1RXF12SID__EID__MASK                     0x00000003
#define __C1RXF12SID__EID__LENGTH                   0x00000002

#define __C1RXF12SID__EXIDE__POSITION               0x00000003
#define __C1RXF12SID__EXIDE__MASK                   0x00000008
#define __C1RXF12SID__EXIDE__LENGTH                 0x00000001

#define __C1RXF12SID__SID__POSITION                 0x00000005
#define __C1RXF12SID__SID__MASK                     0x0000FFE0
#define __C1RXF12SID__SID__LENGTH                   0x0000000B

#define __C1RXF12SID__EID16__POSITION               0x00000000
#define __C1RXF12SID__EID16__MASK                   0x00000001
#define __C1RXF12SID__EID16__LENGTH                 0x00000001

#define __C1RXF12SID__EID17__POSITION               0x00000001
#define __C1RXF12SID__EID17__MASK                   0x00000002
#define __C1RXF12SID__EID17__LENGTH                 0x00000001

#define __C1RXF12SID__SID0__POSITION                0x00000005
#define __C1RXF12SID__SID0__MASK                    0x00000020
#define __C1RXF12SID__SID0__LENGTH                  0x00000001

#define __C1RXF12SID__SID1__POSITION                0x00000006
#define __C1RXF12SID__SID1__MASK                    0x00000040
#define __C1RXF12SID__SID1__LENGTH                  0x00000001

#define __C1RXF12SID__SID2__POSITION                0x00000007
#define __C1RXF12SID__SID2__MASK                    0x00000080
#define __C1RXF12SID__SID2__LENGTH                  0x00000001

#define __C1RXF12SID__SID3__POSITION                0x00000008
#define __C1RXF12SID__SID3__MASK                    0x00000100
#define __C1RXF12SID__SID3__LENGTH                  0x00000001

#define __C1RXF12SID__SID4__POSITION                0x00000009
#define __C1RXF12SID__SID4__MASK                    0x00000200
#define __C1RXF12SID__SID4__LENGTH                  0x00000001

#define __C1RXF12SID__SID5__POSITION                0x0000000A
#define __C1RXF12SID__SID5__MASK                    0x00000400
#define __C1RXF12SID__SID5__LENGTH                  0x00000001

#define __C1RXF12SID__SID6__POSITION                0x0000000B
#define __C1RXF12SID__SID6__MASK                    0x00000800
#define __C1RXF12SID__SID6__LENGTH                  0x00000001

#define __C1RXF12SID__SID7__POSITION                0x0000000C
#define __C1RXF12SID__SID7__MASK                    0x00001000
#define __C1RXF12SID__SID7__LENGTH                  0x00000001

#define __C1RXF12SID__SID8__POSITION                0x0000000D
#define __C1RXF12SID__SID8__MASK                    0x00002000
#define __C1RXF12SID__SID8__LENGTH                  0x00000001

#define __C1RXF12SID__SID9__POSITION                0x0000000E
#define __C1RXF12SID__SID9__MASK                    0x00004000
#define __C1RXF12SID__SID9__LENGTH                  0x00000001

#define __C1RXF12SID__SID10__POSITION               0x0000000F
#define __C1RXF12SID__SID10__MASK                   0x00008000
#define __C1RXF12SID__SID10__LENGTH                 0x00000001

#define __C1RXF12EID__EID__POSITION                 0x00000000
#define __C1RXF12EID__EID__MASK                     0x0000FFFF
#define __C1RXF12EID__EID__LENGTH                   0x00000010

#define __C1RXF12EID__EID0__POSITION                0x00000000
#define __C1RXF12EID__EID0__MASK                    0x00000001
#define __C1RXF12EID__EID0__LENGTH                  0x00000001

#define __C1RXF12EID__EID1__POSITION                0x00000001
#define __C1RXF12EID__EID1__MASK                    0x00000002
#define __C1RXF12EID__EID1__LENGTH                  0x00000001

#define __C1RXF12EID__EID2__POSITION                0x00000002
#define __C1RXF12EID__EID2__MASK                    0x00000004
#define __C1RXF12EID__EID2__LENGTH                  0x00000001

#define __C1RXF12EID__EID3__POSITION                0x00000003
#define __C1RXF12EID__EID3__MASK                    0x00000008
#define __C1RXF12EID__EID3__LENGTH                  0x00000001

#define __C1RXF12EID__EID4__POSITION                0x00000004
#define __C1RXF12EID__EID4__MASK                    0x00000010
#define __C1RXF12EID__EID4__LENGTH                  0x00000001

#define __C1RXF12EID__EID5__POSITION                0x00000005
#define __C1RXF12EID__EID5__MASK                    0x00000020
#define __C1RXF12EID__EID5__LENGTH                  0x00000001

#define __C1RXF12EID__EID6__POSITION                0x00000006
#define __C1RXF12EID__EID6__MASK                    0x00000040
#define __C1RXF12EID__EID6__LENGTH                  0x00000001

#define __C1RXF12EID__EID7__POSITION                0x00000007
#define __C1RXF12EID__EID7__MASK                    0x00000080
#define __C1RXF12EID__EID7__LENGTH                  0x00000001

#define __C1RXF12EID__EID8__POSITION                0x00000008
#define __C1RXF12EID__EID8__MASK                    0x00000100
#define __C1RXF12EID__EID8__LENGTH                  0x00000001

#define __C1RXF12EID__EID9__POSITION                0x00000009
#define __C1RXF12EID__EID9__MASK                    0x00000200
#define __C1RXF12EID__EID9__LENGTH                  0x00000001

#define __C1RXF12EID__EID10__POSITION               0x0000000A
#define __C1RXF12EID__EID10__MASK                   0x00000400
#define __C1RXF12EID__EID10__LENGTH                 0x00000001

#define __C1RXF12EID__EID11__POSITION               0x0000000B
#define __C1RXF12EID__EID11__MASK                   0x00000800
#define __C1RXF12EID__EID11__LENGTH                 0x00000001

#define __C1RXF12EID__EID12__POSITION               0x0000000C
#define __C1RXF12EID__EID12__MASK                   0x00001000
#define __C1RXF12EID__EID12__LENGTH                 0x00000001

#define __C1RXF12EID__EID13__POSITION               0x0000000D
#define __C1RXF12EID__EID13__MASK                   0x00002000
#define __C1RXF12EID__EID13__LENGTH                 0x00000001

#define __C1RXF12EID__EID14__POSITION               0x0000000E
#define __C1RXF12EID__EID14__MASK                   0x00004000
#define __C1RXF12EID__EID14__LENGTH                 0x00000001

#define __C1RXF12EID__EID15__POSITION               0x0000000F
#define __C1RXF12EID__EID15__MASK                   0x00008000
#define __C1RXF12EID__EID15__LENGTH                 0x00000001

#define __C1RXF13SID__EID__POSITION                 0x00000000
#define __C1RXF13SID__EID__MASK                     0x00000003
#define __C1RXF13SID__EID__LENGTH                   0x00000002

#define __C1RXF13SID__EXIDE__POSITION               0x00000003
#define __C1RXF13SID__EXIDE__MASK                   0x00000008
#define __C1RXF13SID__EXIDE__LENGTH                 0x00000001

#define __C1RXF13SID__SID__POSITION                 0x00000005
#define __C1RXF13SID__SID__MASK                     0x0000FFE0
#define __C1RXF13SID__SID__LENGTH                   0x0000000B

#define __C1RXF13SID__EID16__POSITION               0x00000000
#define __C1RXF13SID__EID16__MASK                   0x00000001
#define __C1RXF13SID__EID16__LENGTH                 0x00000001

#define __C1RXF13SID__EID17__POSITION               0x00000001
#define __C1RXF13SID__EID17__MASK                   0x00000002
#define __C1RXF13SID__EID17__LENGTH                 0x00000001

#define __C1RXF13SID__SID0__POSITION                0x00000005
#define __C1RXF13SID__SID0__MASK                    0x00000020
#define __C1RXF13SID__SID0__LENGTH                  0x00000001

#define __C1RXF13SID__SID1__POSITION                0x00000006
#define __C1RXF13SID__SID1__MASK                    0x00000040
#define __C1RXF13SID__SID1__LENGTH                  0x00000001

#define __C1RXF13SID__SID2__POSITION                0x00000007
#define __C1RXF13SID__SID2__MASK                    0x00000080
#define __C1RXF13SID__SID2__LENGTH                  0x00000001

#define __C1RXF13SID__SID3__POSITION                0x00000008
#define __C1RXF13SID__SID3__MASK                    0x00000100
#define __C1RXF13SID__SID3__LENGTH                  0x00000001

#define __C1RXF13SID__SID4__POSITION                0x00000009
#define __C1RXF13SID__SID4__MASK                    0x00000200
#define __C1RXF13SID__SID4__LENGTH                  0x00000001

#define __C1RXF13SID__SID5__POSITION                0x0000000A
#define __C1RXF13SID__SID5__MASK                    0x00000400
#define __C1RXF13SID__SID5__LENGTH                  0x00000001

#define __C1RXF13SID__SID6__POSITION                0x0000000B
#define __C1RXF13SID__SID6__MASK                    0x00000800
#define __C1RXF13SID__SID6__LENGTH                  0x00000001

#define __C1RXF13SID__SID7__POSITION                0x0000000C
#define __C1RXF13SID__SID7__MASK                    0x00001000
#define __C1RXF13SID__SID7__LENGTH                  0x00000001

#define __C1RXF13SID__SID8__POSITION                0x0000000D
#define __C1RXF13SID__SID8__MASK                    0x00002000
#define __C1RXF13SID__SID8__LENGTH                  0x00000001

#define __C1RXF13SID__SID9__POSITION                0x0000000E
#define __C1RXF13SID__SID9__MASK                    0x00004000
#define __C1RXF13SID__SID9__LENGTH                  0x00000001

#define __C1RXF13SID__SID10__POSITION               0x0000000F
#define __C1RXF13SID__SID10__MASK                   0x00008000
#define __C1RXF13SID__SID10__LENGTH                 0x00000001

#define __C1RXF13EID__EID__POSITION                 0x00000000
#define __C1RXF13EID__EID__MASK                     0x0000FFFF
#define __C1RXF13EID__EID__LENGTH                   0x00000010

#define __C1RXF13EID__EID0__POSITION                0x00000000
#define __C1RXF13EID__EID0__MASK                    0x00000001
#define __C1RXF13EID__EID0__LENGTH                  0x00000001

#define __C1RXF13EID__EID1__POSITION                0x00000001
#define __C1RXF13EID__EID1__MASK                    0x00000002
#define __C1RXF13EID__EID1__LENGTH                  0x00000001

#define __C1RXF13EID__EID2__POSITION                0x00000002
#define __C1RXF13EID__EID2__MASK                    0x00000004
#define __C1RXF13EID__EID2__LENGTH                  0x00000001

#define __C1RXF13EID__EID3__POSITION                0x00000003
#define __C1RXF13EID__EID3__MASK                    0x00000008
#define __C1RXF13EID__EID3__LENGTH                  0x00000001

#define __C1RXF13EID__EID4__POSITION                0x00000004
#define __C1RXF13EID__EID4__MASK                    0x00000010
#define __C1RXF13EID__EID4__LENGTH                  0x00000001

#define __C1RXF13EID__EID5__POSITION                0x00000005
#define __C1RXF13EID__EID5__MASK                    0x00000020
#define __C1RXF13EID__EID5__LENGTH                  0x00000001

#define __C1RXF13EID__EID6__POSITION                0x00000006
#define __C1RXF13EID__EID6__MASK                    0x00000040
#define __C1RXF13EID__EID6__LENGTH                  0x00000001

#define __C1RXF13EID__EID7__POSITION                0x00000007
#define __C1RXF13EID__EID7__MASK                    0x00000080
#define __C1RXF13EID__EID7__LENGTH                  0x00000001

#define __C1RXF13EID__EID8__POSITION                0x00000008
#define __C1RXF13EID__EID8__MASK                    0x00000100
#define __C1RXF13EID__EID8__LENGTH                  0x00000001

#define __C1RXF13EID__EID9__POSITION                0x00000009
#define __C1RXF13EID__EID9__MASK                    0x00000200
#define __C1RXF13EID__EID9__LENGTH                  0x00000001

#define __C1RXF13EID__EID10__POSITION               0x0000000A
#define __C1RXF13EID__EID10__MASK                   0x00000400
#define __C1RXF13EID__EID10__LENGTH                 0x00000001

#define __C1RXF13EID__EID11__POSITION               0x0000000B
#define __C1RXF13EID__EID11__MASK                   0x00000800
#define __C1RXF13EID__EID11__LENGTH                 0x00000001

#define __C1RXF13EID__EID12__POSITION               0x0000000C
#define __C1RXF13EID__EID12__MASK                   0x00001000
#define __C1RXF13EID__EID12__LENGTH                 0x00000001

#define __C1RXF13EID__EID13__POSITION               0x0000000D
#define __C1RXF13EID__EID13__MASK                   0x00002000
#define __C1RXF13EID__EID13__LENGTH                 0x00000001

#define __C1RXF13EID__EID14__POSITION               0x0000000E
#define __C1RXF13EID__EID14__MASK                   0x00004000
#define __C1RXF13EID__EID14__LENGTH                 0x00000001

#define __C1RXF13EID__EID15__POSITION               0x0000000F
#define __C1RXF13EID__EID15__MASK                   0x00008000
#define __C1RXF13EID__EID15__LENGTH                 0x00000001

#define __C1RXF14SID__EID__POSITION                 0x00000000
#define __C1RXF14SID__EID__MASK                     0x00000003
#define __C1RXF14SID__EID__LENGTH                   0x00000002

#define __C1RXF14SID__EXIDE__POSITION               0x00000003
#define __C1RXF14SID__EXIDE__MASK                   0x00000008
#define __C1RXF14SID__EXIDE__LENGTH                 0x00000001

#define __C1RXF14SID__SID__POSITION                 0x00000005
#define __C1RXF14SID__SID__MASK                     0x0000FFE0
#define __C1RXF14SID__SID__LENGTH                   0x0000000B

#define __C1RXF14SID__EID16__POSITION               0x00000000
#define __C1RXF14SID__EID16__MASK                   0x00000001
#define __C1RXF14SID__EID16__LENGTH                 0x00000001

#define __C1RXF14SID__EID17__POSITION               0x00000001
#define __C1RXF14SID__EID17__MASK                   0x00000002
#define __C1RXF14SID__EID17__LENGTH                 0x00000001

#define __C1RXF14SID__SID0__POSITION                0x00000005
#define __C1RXF14SID__SID0__MASK                    0x00000020
#define __C1RXF14SID__SID0__LENGTH                  0x00000001

#define __C1RXF14SID__SID1__POSITION                0x00000006
#define __C1RXF14SID__SID1__MASK                    0x00000040
#define __C1RXF14SID__SID1__LENGTH                  0x00000001

#define __C1RXF14SID__SID2__POSITION                0x00000007
#define __C1RXF14SID__SID2__MASK                    0x00000080
#define __C1RXF14SID__SID2__LENGTH                  0x00000001

#define __C1RXF14SID__SID3__POSITION                0x00000008
#define __C1RXF14SID__SID3__MASK                    0x00000100
#define __C1RXF14SID__SID3__LENGTH                  0x00000001

#define __C1RXF14SID__SID4__POSITION                0x00000009
#define __C1RXF14SID__SID4__MASK                    0x00000200
#define __C1RXF14SID__SID4__LENGTH                  0x00000001

#define __C1RXF14SID__SID5__POSITION                0x0000000A
#define __C1RXF14SID__SID5__MASK                    0x00000400
#define __C1RXF14SID__SID5__LENGTH                  0x00000001

#define __C1RXF14SID__SID6__POSITION                0x0000000B
#define __C1RXF14SID__SID6__MASK                    0x00000800
#define __C1RXF14SID__SID6__LENGTH                  0x00000001

#define __C1RXF14SID__SID7__POSITION                0x0000000C
#define __C1RXF14SID__SID7__MASK                    0x00001000
#define __C1RXF14SID__SID7__LENGTH                  0x00000001

#define __C1RXF14SID__SID8__POSITION                0x0000000D
#define __C1RXF14SID__SID8__MASK                    0x00002000
#define __C1RXF14SID__SID8__LENGTH                  0x00000001

#define __C1RXF14SID__SID9__POSITION                0x0000000E
#define __C1RXF14SID__SID9__MASK                    0x00004000
#define __C1RXF14SID__SID9__LENGTH                  0x00000001

#define __C1RXF14SID__SID10__POSITION               0x0000000F
#define __C1RXF14SID__SID10__MASK                   0x00008000
#define __C1RXF14SID__SID10__LENGTH                 0x00000001

#define __C1RXF14EID__EID__POSITION                 0x00000000
#define __C1RXF14EID__EID__MASK                     0x0000FFFF
#define __C1RXF14EID__EID__LENGTH                   0x00000010

#define __C1RXF14EID__EID0__POSITION                0x00000000
#define __C1RXF14EID__EID0__MASK                    0x00000001
#define __C1RXF14EID__EID0__LENGTH                  0x00000001

#define __C1RXF14EID__EID1__POSITION                0x00000001
#define __C1RXF14EID__EID1__MASK                    0x00000002
#define __C1RXF14EID__EID1__LENGTH                  0x00000001

#define __C1RXF14EID__EID2__POSITION                0x00000002
#define __C1RXF14EID__EID2__MASK                    0x00000004
#define __C1RXF14EID__EID2__LENGTH                  0x00000001

#define __C1RXF14EID__EID3__POSITION                0x00000003
#define __C1RXF14EID__EID3__MASK                    0x00000008
#define __C1RXF14EID__EID3__LENGTH                  0x00000001

#define __C1RXF14EID__EID4__POSITION                0x00000004
#define __C1RXF14EID__EID4__MASK                    0x00000010
#define __C1RXF14EID__EID4__LENGTH                  0x00000001

#define __C1RXF14EID__EID5__POSITION                0x00000005
#define __C1RXF14EID__EID5__MASK                    0x00000020
#define __C1RXF14EID__EID5__LENGTH                  0x00000001

#define __C1RXF14EID__EID6__POSITION                0x00000006
#define __C1RXF14EID__EID6__MASK                    0x00000040
#define __C1RXF14EID__EID6__LENGTH                  0x00000001

#define __C1RXF14EID__EID7__POSITION                0x00000007
#define __C1RXF14EID__EID7__MASK                    0x00000080
#define __C1RXF14EID__EID7__LENGTH                  0x00000001

#define __C1RXF14EID__EID8__POSITION                0x00000008
#define __C1RXF14EID__EID8__MASK                    0x00000100
#define __C1RXF14EID__EID8__LENGTH                  0x00000001

#define __C1RXF14EID__EID9__POSITION                0x00000009
#define __C1RXF14EID__EID9__MASK                    0x00000200
#define __C1RXF14EID__EID9__LENGTH                  0x00000001

#define __C1RXF14EID__EID10__POSITION               0x0000000A
#define __C1RXF14EID__EID10__MASK                   0x00000400
#define __C1RXF14EID__EID10__LENGTH                 0x00000001

#define __C1RXF14EID__EID11__POSITION               0x0000000B
#define __C1RXF14EID__EID11__MASK                   0x00000800
#define __C1RXF14EID__EID11__LENGTH                 0x00000001

#define __C1RXF14EID__EID12__POSITION               0x0000000C
#define __C1RXF14EID__EID12__MASK                   0x00001000
#define __C1RXF14EID__EID12__LENGTH                 0x00000001

#define __C1RXF14EID__EID13__POSITION               0x0000000D
#define __C1RXF14EID__EID13__MASK                   0x00002000
#define __C1RXF14EID__EID13__LENGTH                 0x00000001

#define __C1RXF14EID__EID14__POSITION               0x0000000E
#define __C1RXF14EID__EID14__MASK                   0x00004000
#define __C1RXF14EID__EID14__LENGTH                 0x00000001

#define __C1RXF14EID__EID15__POSITION               0x0000000F
#define __C1RXF14EID__EID15__MASK                   0x00008000
#define __C1RXF14EID__EID15__LENGTH                 0x00000001

#define __C1RXF15SID__EID__POSITION                 0x00000000
#define __C1RXF15SID__EID__MASK                     0x00000003
#define __C1RXF15SID__EID__LENGTH                   0x00000002

#define __C1RXF15SID__EXIDE__POSITION               0x00000003
#define __C1RXF15SID__EXIDE__MASK                   0x00000008
#define __C1RXF15SID__EXIDE__LENGTH                 0x00000001

#define __C1RXF15SID__SID__POSITION                 0x00000005
#define __C1RXF15SID__SID__MASK                     0x0000FFE0
#define __C1RXF15SID__SID__LENGTH                   0x0000000B

#define __C1RXF15SID__EID16__POSITION               0x00000000
#define __C1RXF15SID__EID16__MASK                   0x00000001
#define __C1RXF15SID__EID16__LENGTH                 0x00000001

#define __C1RXF15SID__EID17__POSITION               0x00000001
#define __C1RXF15SID__EID17__MASK                   0x00000002
#define __C1RXF15SID__EID17__LENGTH                 0x00000001

#define __C1RXF15SID__SID0__POSITION                0x00000005
#define __C1RXF15SID__SID0__MASK                    0x00000020
#define __C1RXF15SID__SID0__LENGTH                  0x00000001

#define __C1RXF15SID__SID1__POSITION                0x00000006
#define __C1RXF15SID__SID1__MASK                    0x00000040
#define __C1RXF15SID__SID1__LENGTH                  0x00000001

#define __C1RXF15SID__SID2__POSITION                0x00000007
#define __C1RXF15SID__SID2__MASK                    0x00000080
#define __C1RXF15SID__SID2__LENGTH                  0x00000001

#define __C1RXF15SID__SID3__POSITION                0x00000008
#define __C1RXF15SID__SID3__MASK                    0x00000100
#define __C1RXF15SID__SID3__LENGTH                  0x00000001

#define __C1RXF15SID__SID4__POSITION                0x00000009
#define __C1RXF15SID__SID4__MASK                    0x00000200
#define __C1RXF15SID__SID4__LENGTH                  0x00000001

#define __C1RXF15SID__SID5__POSITION                0x0000000A
#define __C1RXF15SID__SID5__MASK                    0x00000400
#define __C1RXF15SID__SID5__LENGTH                  0x00000001

#define __C1RXF15SID__SID6__POSITION                0x0000000B
#define __C1RXF15SID__SID6__MASK                    0x00000800
#define __C1RXF15SID__SID6__LENGTH                  0x00000001

#define __C1RXF15SID__SID7__POSITION                0x0000000C
#define __C1RXF15SID__SID7__MASK                    0x00001000
#define __C1RXF15SID__SID7__LENGTH                  0x00000001

#define __C1RXF15SID__SID8__POSITION                0x0000000D
#define __C1RXF15SID__SID8__MASK                    0x00002000
#define __C1RXF15SID__SID8__LENGTH                  0x00000001

#define __C1RXF15SID__SID9__POSITION                0x0000000E
#define __C1RXF15SID__SID9__MASK                    0x00004000
#define __C1RXF15SID__SID9__LENGTH                  0x00000001

#define __C1RXF15SID__SID10__POSITION               0x0000000F
#define __C1RXF15SID__SID10__MASK                   0x00008000
#define __C1RXF15SID__SID10__LENGTH                 0x00000001

#define __C1RXF15EID__EID__POSITION                 0x00000000
#define __C1RXF15EID__EID__MASK                     0x0000FFFF
#define __C1RXF15EID__EID__LENGTH                   0x00000010

#define __C1RXF15EID__EID0__POSITION                0x00000000
#define __C1RXF15EID__EID0__MASK                    0x00000001
#define __C1RXF15EID__EID0__LENGTH                  0x00000001

#define __C1RXF15EID__EID1__POSITION                0x00000001
#define __C1RXF15EID__EID1__MASK                    0x00000002
#define __C1RXF15EID__EID1__LENGTH                  0x00000001

#define __C1RXF15EID__EID2__POSITION                0x00000002
#define __C1RXF15EID__EID2__MASK                    0x00000004
#define __C1RXF15EID__EID2__LENGTH                  0x00000001

#define __C1RXF15EID__EID3__POSITION                0x00000003
#define __C1RXF15EID__EID3__MASK                    0x00000008
#define __C1RXF15EID__EID3__LENGTH                  0x00000001

#define __C1RXF15EID__EID4__POSITION                0x00000004
#define __C1RXF15EID__EID4__MASK                    0x00000010
#define __C1RXF15EID__EID4__LENGTH                  0x00000001

#define __C1RXF15EID__EID5__POSITION                0x00000005
#define __C1RXF15EID__EID5__MASK                    0x00000020
#define __C1RXF15EID__EID5__LENGTH                  0x00000001

#define __C1RXF15EID__EID6__POSITION                0x00000006
#define __C1RXF15EID__EID6__MASK                    0x00000040
#define __C1RXF15EID__EID6__LENGTH                  0x00000001

#define __C1RXF15EID__EID7__POSITION                0x00000007
#define __C1RXF15EID__EID7__MASK                    0x00000080
#define __C1RXF15EID__EID7__LENGTH                  0x00000001

#define __C1RXF15EID__EID8__POSITION                0x00000008
#define __C1RXF15EID__EID8__MASK                    0x00000100
#define __C1RXF15EID__EID8__LENGTH                  0x00000001

#define __C1RXF15EID__EID9__POSITION                0x00000009
#define __C1RXF15EID__EID9__MASK                    0x00000200
#define __C1RXF15EID__EID9__LENGTH                  0x00000001

#define __C1RXF15EID__EID10__POSITION               0x0000000A
#define __C1RXF15EID__EID10__MASK                   0x00000400
#define __C1RXF15EID__EID10__LENGTH                 0x00000001

#define __C1RXF15EID__EID11__POSITION               0x0000000B
#define __C1RXF15EID__EID11__MASK                   0x00000800
#define __C1RXF15EID__EID11__LENGTH                 0x00000001

#define __C1RXF15EID__EID12__POSITION               0x0000000C
#define __C1RXF15EID__EID12__MASK                   0x00001000
#define __C1RXF15EID__EID12__LENGTH                 0x00000001

#define __C1RXF15EID__EID13__POSITION               0x0000000D
#define __C1RXF15EID__EID13__MASK                   0x00002000
#define __C1RXF15EID__EID13__LENGTH                 0x00000001

#define __C1RXF15EID__EID14__POSITION               0x0000000E
#define __C1RXF15EID__EID14__MASK                   0x00004000
#define __C1RXF15EID__EID14__LENGTH                 0x00000001

#define __C1RXF15EID__EID15__POSITION               0x0000000F
#define __C1RXF15EID__EID15__MASK                   0x00008000
#define __C1RXF15EID__EID15__LENGTH                 0x00000001

#define __P2TCON__PTMOD__POSITION                   0x00000000
#define __P2TCON__PTMOD__MASK                       0x00000003
#define __P2TCON__PTMOD__LENGTH                     0x00000002

#define __P2TCON__PTCKPS__POSITION                  0x00000002
#define __P2TCON__PTCKPS__MASK                      0x0000000C
#define __P2TCON__PTCKPS__LENGTH                    0x00000002

#define __P2TCON__PTOPS__POSITION                   0x00000004
#define __P2TCON__PTOPS__MASK                       0x000000F0
#define __P2TCON__PTOPS__LENGTH                     0x00000004

#define __P2TCON__PTSIDL__POSITION                  0x0000000D
#define __P2TCON__PTSIDL__MASK                      0x00002000
#define __P2TCON__PTSIDL__LENGTH                    0x00000001

#define __P2TCON__PTEN__POSITION                    0x0000000F
#define __P2TCON__PTEN__MASK                        0x00008000
#define __P2TCON__PTEN__LENGTH                      0x00000001

#define __P2TCON__PTMOD0__POSITION                  0x00000000
#define __P2TCON__PTMOD0__MASK                      0x00000001
#define __P2TCON__PTMOD0__LENGTH                    0x00000001

#define __P2TCON__PTMOD1__POSITION                  0x00000001
#define __P2TCON__PTMOD1__MASK                      0x00000002
#define __P2TCON__PTMOD1__LENGTH                    0x00000001

#define __P2TCON__PTCKPS0__POSITION                 0x00000002
#define __P2TCON__PTCKPS0__MASK                     0x00000004
#define __P2TCON__PTCKPS0__LENGTH                   0x00000001

#define __P2TCON__PTCKPS1__POSITION                 0x00000003
#define __P2TCON__PTCKPS1__MASK                     0x00000008
#define __P2TCON__PTCKPS1__LENGTH                   0x00000001

#define __P2TCON__PTOPS0__POSITION                  0x00000004
#define __P2TCON__PTOPS0__MASK                      0x00000010
#define __P2TCON__PTOPS0__LENGTH                    0x00000001

#define __P2TCON__PTOPS1__POSITION                  0x00000005
#define __P2TCON__PTOPS1__MASK                      0x00000020
#define __P2TCON__PTOPS1__LENGTH                    0x00000001

#define __P2TCON__PTOPS2__POSITION                  0x00000006
#define __P2TCON__PTOPS2__MASK                      0x00000040
#define __P2TCON__PTOPS2__LENGTH                    0x00000001

#define __P2TCON__PTOPS3__POSITION                  0x00000007
#define __P2TCON__PTOPS3__MASK                      0x00000080
#define __P2TCON__PTOPS3__LENGTH                    0x00000001

#define __P2TMR__PTMR__POSITION                     0x00000000
#define __P2TMR__PTMR__MASK                         0x00007FFF
#define __P2TMR__PTMR__LENGTH                       0x0000000F

#define __P2TMR__PTDIR__POSITION                    0x0000000F
#define __P2TMR__PTDIR__MASK                        0x00008000
#define __P2TMR__PTDIR__LENGTH                      0x00000001

#define __P2TPER__PTPER__POSITION                   0x00000000
#define __P2TPER__PTPER__MASK                       0x00007FFF
#define __P2TPER__PTPER__LENGTH                     0x0000000F

#define __P2SECMP__SEVTCMP__POSITION                0x00000000
#define __P2SECMP__SEVTCMP__MASK                    0x00007FFF
#define __P2SECMP__SEVTCMP__LENGTH                  0x0000000F

#define __P2SECMP__SEVTDIR__POSITION                0x0000000F
#define __P2SECMP__SEVTDIR__MASK                    0x00008000
#define __P2SECMP__SEVTDIR__LENGTH                  0x00000001

#define __PWM2CON1__PEN1L__POSITION                 0x00000000
#define __PWM2CON1__PEN1L__MASK                     0x00000001
#define __PWM2CON1__PEN1L__LENGTH                   0x00000001

#define __PWM2CON1__PEN1H__POSITION                 0x00000004
#define __PWM2CON1__PEN1H__MASK                     0x00000010
#define __PWM2CON1__PEN1H__LENGTH                   0x00000001

#define __PWM2CON1__PMOD1__POSITION                 0x00000008
#define __PWM2CON1__PMOD1__MASK                     0x00000100
#define __PWM2CON1__PMOD1__LENGTH                   0x00000001

#define __PWM2CON2__UDIS__POSITION                  0x00000000
#define __PWM2CON2__UDIS__MASK                      0x00000001
#define __PWM2CON2__UDIS__LENGTH                    0x00000001

#define __PWM2CON2__OSYNC__POSITION                 0x00000001
#define __PWM2CON2__OSYNC__MASK                     0x00000002
#define __PWM2CON2__OSYNC__LENGTH                   0x00000001

#define __PWM2CON2__IUE__POSITION                   0x00000002
#define __PWM2CON2__IUE__MASK                       0x00000004
#define __PWM2CON2__IUE__LENGTH                     0x00000001

#define __PWM2CON2__SEVOPS__POSITION                0x00000008
#define __PWM2CON2__SEVOPS__MASK                    0x00000F00
#define __PWM2CON2__SEVOPS__LENGTH                  0x00000004

#define __PWM2CON2__SEVOPS0__POSITION               0x00000008
#define __PWM2CON2__SEVOPS0__MASK                   0x00000100
#define __PWM2CON2__SEVOPS0__LENGTH                 0x00000001

#define __PWM2CON2__SEVOPS1__POSITION               0x00000009
#define __PWM2CON2__SEVOPS1__MASK                   0x00000200
#define __PWM2CON2__SEVOPS1__LENGTH                 0x00000001

#define __PWM2CON2__SEVOPS2__POSITION               0x0000000A
#define __PWM2CON2__SEVOPS2__MASK                   0x00000400
#define __PWM2CON2__SEVOPS2__LENGTH                 0x00000001

#define __PWM2CON2__SEVOPS3__POSITION               0x0000000B
#define __PWM2CON2__SEVOPS3__MASK                   0x00000800
#define __PWM2CON2__SEVOPS3__LENGTH                 0x00000001

#define __P2DTCON1__DTA__POSITION                   0x00000000
#define __P2DTCON1__DTA__MASK                       0x0000003F
#define __P2DTCON1__DTA__LENGTH                     0x00000006

#define __P2DTCON1__DTAPS__POSITION                 0x00000006
#define __P2DTCON1__DTAPS__MASK                     0x000000C0
#define __P2DTCON1__DTAPS__LENGTH                   0x00000002

#define __P2DTCON1__DTB__POSITION                   0x00000008
#define __P2DTCON1__DTB__MASK                       0x00003F00
#define __P2DTCON1__DTB__LENGTH                     0x00000006

#define __P2DTCON1__DTBPS__POSITION                 0x0000000E
#define __P2DTCON1__DTBPS__MASK                     0x0000C000
#define __P2DTCON1__DTBPS__LENGTH                   0x00000002

#define __P2DTCON1__DTA0__POSITION                  0x00000000
#define __P2DTCON1__DTA0__MASK                      0x00000001
#define __P2DTCON1__DTA0__LENGTH                    0x00000001

#define __P2DTCON1__DTA1__POSITION                  0x00000001
#define __P2DTCON1__DTA1__MASK                      0x00000002
#define __P2DTCON1__DTA1__LENGTH                    0x00000001

#define __P2DTCON1__DTA2__POSITION                  0x00000002
#define __P2DTCON1__DTA2__MASK                      0x00000004
#define __P2DTCON1__DTA2__LENGTH                    0x00000001

#define __P2DTCON1__DTA3__POSITION                  0x00000003
#define __P2DTCON1__DTA3__MASK                      0x00000008
#define __P2DTCON1__DTA3__LENGTH                    0x00000001

#define __P2DTCON1__DTA4__POSITION                  0x00000004
#define __P2DTCON1__DTA4__MASK                      0x00000010
#define __P2DTCON1__DTA4__LENGTH                    0x00000001

#define __P2DTCON1__DTA5__POSITION                  0x00000005
#define __P2DTCON1__DTA5__MASK                      0x00000020
#define __P2DTCON1__DTA5__LENGTH                    0x00000001

#define __P2DTCON1__DTAPS0__POSITION                0x00000006
#define __P2DTCON1__DTAPS0__MASK                    0x00000040
#define __P2DTCON1__DTAPS0__LENGTH                  0x00000001

#define __P2DTCON1__DTAPS1__POSITION                0x00000007
#define __P2DTCON1__DTAPS1__MASK                    0x00000080
#define __P2DTCON1__DTAPS1__LENGTH                  0x00000001

#define __P2DTCON1__DTB0__POSITION                  0x00000008
#define __P2DTCON1__DTB0__MASK                      0x00000100
#define __P2DTCON1__DTB0__LENGTH                    0x00000001

#define __P2DTCON1__DTB1__POSITION                  0x00000009
#define __P2DTCON1__DTB1__MASK                      0x00000200
#define __P2DTCON1__DTB1__LENGTH                    0x00000001

#define __P2DTCON1__DTB2__POSITION                  0x0000000A
#define __P2DTCON1__DTB2__MASK                      0x00000400
#define __P2DTCON1__DTB2__LENGTH                    0x00000001

#define __P2DTCON1__DTB3__POSITION                  0x0000000B
#define __P2DTCON1__DTB3__MASK                      0x00000800
#define __P2DTCON1__DTB3__LENGTH                    0x00000001

#define __P2DTCON1__DTB4__POSITION                  0x0000000C
#define __P2DTCON1__DTB4__MASK                      0x00001000
#define __P2DTCON1__DTB4__LENGTH                    0x00000001

#define __P2DTCON1__DTB5__POSITION                  0x0000000D
#define __P2DTCON1__DTB5__MASK                      0x00002000
#define __P2DTCON1__DTB5__LENGTH                    0x00000001

#define __P2DTCON1__DTBPS0__POSITION                0x0000000E
#define __P2DTCON1__DTBPS0__MASK                    0x00004000
#define __P2DTCON1__DTBPS0__LENGTH                  0x00000001

#define __P2DTCON1__DTBPS1__POSITION                0x0000000F
#define __P2DTCON1__DTBPS1__MASK                    0x00008000
#define __P2DTCON1__DTBPS1__LENGTH                  0x00000001

#define __P2DTCON2__DTS1I__POSITION                 0x00000000
#define __P2DTCON2__DTS1I__MASK                     0x00000001
#define __P2DTCON2__DTS1I__LENGTH                   0x00000001

#define __P2DTCON2__DTS1A__POSITION                 0x00000001
#define __P2DTCON2__DTS1A__MASK                     0x00000002
#define __P2DTCON2__DTS1A__LENGTH                   0x00000001

#define __P2FLTACON__FAEN1__POSITION                0x00000000
#define __P2FLTACON__FAEN1__MASK                    0x00000001
#define __P2FLTACON__FAEN1__LENGTH                  0x00000001

#define __P2FLTACON__FLTAM__POSITION                0x00000007
#define __P2FLTACON__FLTAM__MASK                    0x00000080
#define __P2FLTACON__FLTAM__LENGTH                  0x00000001

#define __P2FLTACON__FAOV1L__POSITION               0x00000008
#define __P2FLTACON__FAOV1L__MASK                   0x00000100
#define __P2FLTACON__FAOV1L__LENGTH                 0x00000001

#define __P2FLTACON__FAOV1H__POSITION               0x00000009
#define __P2FLTACON__FAOV1H__MASK                   0x00000200
#define __P2FLTACON__FAOV1H__LENGTH                 0x00000001

#define __P2OVDCON__POUT1L__POSITION                0x00000000
#define __P2OVDCON__POUT1L__MASK                    0x00000001
#define __P2OVDCON__POUT1L__LENGTH                  0x00000001

#define __P2OVDCON__POUT1H__POSITION                0x00000001
#define __P2OVDCON__POUT1H__MASK                    0x00000002
#define __P2OVDCON__POUT1H__LENGTH                  0x00000001

#define __P2OVDCON__POVD1L__POSITION                0x00000008
#define __P2OVDCON__POVD1L__MASK                    0x00000100
#define __P2OVDCON__POVD1L__LENGTH                  0x00000001

#define __P2OVDCON__POVD1H__POSITION                0x00000009
#define __P2OVDCON__POVD1H__MASK                    0x00000200
#define __P2OVDCON__POVD1H__LENGTH                  0x00000001

#define __PMCON__RDSP__POSITION                     0x00000000
#define __PMCON__RDSP__MASK                         0x00000001
#define __PMCON__RDSP__LENGTH                       0x00000001

#define __PMCON__WRSP__POSITION                     0x00000001
#define __PMCON__WRSP__MASK                         0x00000002
#define __PMCON__WRSP__LENGTH                       0x00000001

#define __PMCON__BEP__POSITION                      0x00000002
#define __PMCON__BEP__MASK                          0x00000004
#define __PMCON__BEP__LENGTH                        0x00000001

#define __PMCON__CS1P__POSITION                     0x00000003
#define __PMCON__CS1P__MASK                         0x00000008
#define __PMCON__CS1P__LENGTH                       0x00000001

#define __PMCON__ALP__POSITION                      0x00000005
#define __PMCON__ALP__MASK                          0x00000020
#define __PMCON__ALP__LENGTH                        0x00000001

#define __PMCON__CSF__POSITION                      0x00000006
#define __PMCON__CSF__MASK                          0x000000C0
#define __PMCON__CSF__LENGTH                        0x00000002

#define __PMCON__PTRDEN__POSITION                   0x00000008
#define __PMCON__PTRDEN__MASK                       0x00000100
#define __PMCON__PTRDEN__LENGTH                     0x00000001

#define __PMCON__PTWREN__POSITION                   0x00000009
#define __PMCON__PTWREN__MASK                       0x00000200
#define __PMCON__PTWREN__LENGTH                     0x00000001

#define __PMCON__PTBEEN__POSITION                   0x0000000A
#define __PMCON__PTBEEN__MASK                       0x00000400
#define __PMCON__PTBEEN__LENGTH                     0x00000001

#define __PMCON__ADRMUX__POSITION                   0x0000000B
#define __PMCON__ADRMUX__MASK                       0x00001800
#define __PMCON__ADRMUX__LENGTH                     0x00000002

#define __PMCON__PSIDL__POSITION                    0x0000000D
#define __PMCON__PSIDL__MASK                        0x00002000
#define __PMCON__PSIDL__LENGTH                      0x00000001

#define __PMCON__PMPEN__POSITION                    0x0000000F
#define __PMCON__PMPEN__MASK                        0x00008000
#define __PMCON__PMPEN__LENGTH                      0x00000001

#define __PMCON__CSF0__POSITION                     0x00000006
#define __PMCON__CSF0__MASK                         0x00000040
#define __PMCON__CSF0__LENGTH                       0x00000001

#define __PMCON__CSF1__POSITION                     0x00000007
#define __PMCON__CSF1__MASK                         0x00000080
#define __PMCON__CSF1__LENGTH                       0x00000001

#define __PMCON__ADRMUX0__POSITION                  0x0000000B
#define __PMCON__ADRMUX0__MASK                      0x00000800
#define __PMCON__ADRMUX0__LENGTH                    0x00000001

#define __PMCON__ADRMUX1__POSITION                  0x0000000C
#define __PMCON__ADRMUX1__MASK                      0x00001000
#define __PMCON__ADRMUX1__LENGTH                    0x00000001

#define __PMMODE__WAITE__POSITION                   0x00000000
#define __PMMODE__WAITE__MASK                       0x00000003
#define __PMMODE__WAITE__LENGTH                     0x00000002

#define __PMMODE__WAITM__POSITION                   0x00000002
#define __PMMODE__WAITM__MASK                       0x0000003C
#define __PMMODE__WAITM__LENGTH                     0x00000004

#define __PMMODE__WAITB__POSITION                   0x00000006
#define __PMMODE__WAITB__MASK                       0x000000C0
#define __PMMODE__WAITB__LENGTH                     0x00000002

#define __PMMODE__MODE__POSITION                    0x00000008
#define __PMMODE__MODE__MASK                        0x00000300
#define __PMMODE__MODE__LENGTH                      0x00000002

#define __PMMODE__MODE16__POSITION                  0x0000000A
#define __PMMODE__MODE16__MASK                      0x00000400
#define __PMMODE__MODE16__LENGTH                    0x00000001

#define __PMMODE__INCM__POSITION                    0x0000000B
#define __PMMODE__INCM__MASK                        0x00001800
#define __PMMODE__INCM__LENGTH                      0x00000002

#define __PMMODE__IRQM__POSITION                    0x0000000D
#define __PMMODE__IRQM__MASK                        0x00006000
#define __PMMODE__IRQM__LENGTH                      0x00000002

#define __PMMODE__BUSY__POSITION                    0x0000000F
#define __PMMODE__BUSY__MASK                        0x00008000
#define __PMMODE__BUSY__LENGTH                      0x00000001

#define __PMMODE__WAITE0__POSITION                  0x00000000
#define __PMMODE__WAITE0__MASK                      0x00000001
#define __PMMODE__WAITE0__LENGTH                    0x00000001

#define __PMMODE__WAITE1__POSITION                  0x00000001
#define __PMMODE__WAITE1__MASK                      0x00000002
#define __PMMODE__WAITE1__LENGTH                    0x00000001

#define __PMMODE__WAITM0__POSITION                  0x00000002
#define __PMMODE__WAITM0__MASK                      0x00000004
#define __PMMODE__WAITM0__LENGTH                    0x00000001

#define __PMMODE__WAITM1__POSITION                  0x00000003
#define __PMMODE__WAITM1__MASK                      0x00000008
#define __PMMODE__WAITM1__LENGTH                    0x00000001

#define __PMMODE__WAITM2__POSITION                  0x00000004
#define __PMMODE__WAITM2__MASK                      0x00000010
#define __PMMODE__WAITM2__LENGTH                    0x00000001

#define __PMMODE__WAITM3__POSITION                  0x00000005
#define __PMMODE__WAITM3__MASK                      0x00000020
#define __PMMODE__WAITM3__LENGTH                    0x00000001

#define __PMMODE__WAITB0__POSITION                  0x00000006
#define __PMMODE__WAITB0__MASK                      0x00000040
#define __PMMODE__WAITB0__LENGTH                    0x00000001

#define __PMMODE__WAITB1__POSITION                  0x00000007
#define __PMMODE__WAITB1__MASK                      0x00000080
#define __PMMODE__WAITB1__LENGTH                    0x00000001

#define __PMMODE__MODE0__POSITION                   0x00000008
#define __PMMODE__MODE0__MASK                       0x00000100
#define __PMMODE__MODE0__LENGTH                     0x00000001

#define __PMMODE__MODE1__POSITION                   0x00000009
#define __PMMODE__MODE1__MASK                       0x00000200
#define __PMMODE__MODE1__LENGTH                     0x00000001

#define __PMMODE__INCM0__POSITION                   0x0000000B
#define __PMMODE__INCM0__MASK                       0x00000800
#define __PMMODE__INCM0__LENGTH                     0x00000001

#define __PMMODE__INCM1__POSITION                   0x0000000C
#define __PMMODE__INCM1__MASK                       0x00001000
#define __PMMODE__INCM1__LENGTH                     0x00000001

#define __PMMODE__IRQM0__POSITION                   0x0000000D
#define __PMMODE__IRQM0__MASK                       0x00002000
#define __PMMODE__IRQM0__LENGTH                     0x00000001

#define __PMMODE__IRQM1__POSITION                   0x0000000E
#define __PMMODE__IRQM1__MASK                       0x00004000
#define __PMMODE__IRQM1__LENGTH                     0x00000001

#define __PMADDR__ADDR__POSITION                    0x00000000
#define __PMADDR__ADDR__MASK                        0x00003FFF
#define __PMADDR__ADDR__LENGTH                      0x0000000E

#define __PMADDR__CS1__POSITION                     0x0000000E
#define __PMADDR__CS1__MASK                         0x00004000
#define __PMADDR__CS1__LENGTH                       0x00000001

#define __PMADDR__ADDR15__POSITION                  0x0000000F
#define __PMADDR__ADDR15__MASK                      0x00008000
#define __PMADDR__ADDR15__LENGTH                    0x00000001

#define __PMADDR__ADDR0__POSITION                   0x00000000
#define __PMADDR__ADDR0__MASK                       0x00000001
#define __PMADDR__ADDR0__LENGTH                     0x00000001

#define __PMADDR__ADDR1__POSITION                   0x00000001
#define __PMADDR__ADDR1__MASK                       0x00000002
#define __PMADDR__ADDR1__LENGTH                     0x00000001

#define __PMADDR__ADDR2__POSITION                   0x00000002
#define __PMADDR__ADDR2__MASK                       0x00000004
#define __PMADDR__ADDR2__LENGTH                     0x00000001

#define __PMADDR__ADDR3__POSITION                   0x00000003
#define __PMADDR__ADDR3__MASK                       0x00000008
#define __PMADDR__ADDR3__LENGTH                     0x00000001

#define __PMADDR__ADDR4__POSITION                   0x00000004
#define __PMADDR__ADDR4__MASK                       0x00000010
#define __PMADDR__ADDR4__LENGTH                     0x00000001

#define __PMADDR__ADDR5__POSITION                   0x00000005
#define __PMADDR__ADDR5__MASK                       0x00000020
#define __PMADDR__ADDR5__LENGTH                     0x00000001

#define __PMADDR__ADDR6__POSITION                   0x00000006
#define __PMADDR__ADDR6__MASK                       0x00000040
#define __PMADDR__ADDR6__LENGTH                     0x00000001

#define __PMADDR__ADDR7__POSITION                   0x00000007
#define __PMADDR__ADDR7__MASK                       0x00000080
#define __PMADDR__ADDR7__LENGTH                     0x00000001

#define __PMADDR__ADDR8__POSITION                   0x00000008
#define __PMADDR__ADDR8__MASK                       0x00000100
#define __PMADDR__ADDR8__LENGTH                     0x00000001

#define __PMADDR__ADDR9__POSITION                   0x00000009
#define __PMADDR__ADDR9__MASK                       0x00000200
#define __PMADDR__ADDR9__LENGTH                     0x00000001

#define __PMADDR__ADDR10__POSITION                  0x0000000A
#define __PMADDR__ADDR10__MASK                      0x00000400
#define __PMADDR__ADDR10__LENGTH                    0x00000001

#define __PMADDR__ADDR11__POSITION                  0x0000000B
#define __PMADDR__ADDR11__MASK                      0x00000800
#define __PMADDR__ADDR11__LENGTH                    0x00000001

#define __PMADDR__ADDR12__POSITION                  0x0000000C
#define __PMADDR__ADDR12__MASK                      0x00001000
#define __PMADDR__ADDR12__LENGTH                    0x00000001

#define __PMADDR__ADDR13__POSITION                  0x0000000D
#define __PMADDR__ADDR13__MASK                      0x00002000
#define __PMADDR__ADDR13__LENGTH                    0x00000001

#define __PMAEN__PTEN__POSITION                     0x00000000
#define __PMAEN__PTEN__MASK                         0x000007FF
#define __PMAEN__PTEN__LENGTH                       0x0000000B

#define __PMAEN__PTEN14__POSITION                   0x0000000E
#define __PMAEN__PTEN14__MASK                       0x00004000
#define __PMAEN__PTEN14__LENGTH                     0x00000001

#define __PMAEN__PTEN0__POSITION                    0x00000000
#define __PMAEN__PTEN0__MASK                        0x00000001
#define __PMAEN__PTEN0__LENGTH                      0x00000001

#define __PMAEN__PTEN1__POSITION                    0x00000001
#define __PMAEN__PTEN1__MASK                        0x00000002
#define __PMAEN__PTEN1__LENGTH                      0x00000001

#define __PMAEN__PTEN2__POSITION                    0x00000002
#define __PMAEN__PTEN2__MASK                        0x00000004
#define __PMAEN__PTEN2__LENGTH                      0x00000001

#define __PMAEN__PTEN3__POSITION                    0x00000003
#define __PMAEN__PTEN3__MASK                        0x00000008
#define __PMAEN__PTEN3__LENGTH                      0x00000001

#define __PMAEN__PTEN4__POSITION                    0x00000004
#define __PMAEN__PTEN4__MASK                        0x00000010
#define __PMAEN__PTEN4__LENGTH                      0x00000001

#define __PMAEN__PTEN5__POSITION                    0x00000005
#define __PMAEN__PTEN5__MASK                        0x00000020
#define __PMAEN__PTEN5__LENGTH                      0x00000001

#define __PMAEN__PTEN6__POSITION                    0x00000006
#define __PMAEN__PTEN6__MASK                        0x00000040
#define __PMAEN__PTEN6__LENGTH                      0x00000001

#define __PMAEN__PTEN7__POSITION                    0x00000007
#define __PMAEN__PTEN7__MASK                        0x00000080
#define __PMAEN__PTEN7__LENGTH                      0x00000001

#define __PMAEN__PTEN8__POSITION                    0x00000008
#define __PMAEN__PTEN8__MASK                        0x00000100
#define __PMAEN__PTEN8__LENGTH                      0x00000001

#define __PMAEN__PTEN9__POSITION                    0x00000009
#define __PMAEN__PTEN9__MASK                        0x00000200
#define __PMAEN__PTEN9__LENGTH                      0x00000001

#define __PMAEN__PTEN10__POSITION                   0x0000000A
#define __PMAEN__PTEN10__MASK                       0x00000400
#define __PMAEN__PTEN10__LENGTH                     0x00000001

#define __PMSTAT__OB0E__POSITION                    0x00000000
#define __PMSTAT__OB0E__MASK                        0x00000001
#define __PMSTAT__OB0E__LENGTH                      0x00000001

#define __PMSTAT__OB1E__POSITION                    0x00000001
#define __PMSTAT__OB1E__MASK                        0x00000002
#define __PMSTAT__OB1E__LENGTH                      0x00000001

#define __PMSTAT__OB2E__POSITION                    0x00000002
#define __PMSTAT__OB2E__MASK                        0x00000004
#define __PMSTAT__OB2E__LENGTH                      0x00000001

#define __PMSTAT__OB3E__POSITION                    0x00000003
#define __PMSTAT__OB3E__MASK                        0x00000008
#define __PMSTAT__OB3E__LENGTH                      0x00000001

#define __PMSTAT__OBUF__POSITION                    0x00000006
#define __PMSTAT__OBUF__MASK                        0x00000040
#define __PMSTAT__OBUF__LENGTH                      0x00000001

#define __PMSTAT__OBE__POSITION                     0x00000007
#define __PMSTAT__OBE__MASK                         0x00000080
#define __PMSTAT__OBE__LENGTH                       0x00000001

#define __PMSTAT__IB0F__POSITION                    0x00000008
#define __PMSTAT__IB0F__MASK                        0x00000100
#define __PMSTAT__IB0F__LENGTH                      0x00000001

#define __PMSTAT__IB1F__POSITION                    0x00000009
#define __PMSTAT__IB1F__MASK                        0x00000200
#define __PMSTAT__IB1F__LENGTH                      0x00000001

#define __PMSTAT__IB2F__POSITION                    0x0000000A
#define __PMSTAT__IB2F__MASK                        0x00000400
#define __PMSTAT__IB2F__LENGTH                      0x00000001

#define __PMSTAT__IB3F__POSITION                    0x0000000B
#define __PMSTAT__IB3F__MASK                        0x00000800
#define __PMSTAT__IB3F__LENGTH                      0x00000001

#define __PMSTAT__IBOV__POSITION                    0x0000000E
#define __PMSTAT__IBOV__MASK                        0x00004000
#define __PMSTAT__IBOV__LENGTH                      0x00000001

#define __PMSTAT__IBF__POSITION                     0x0000000F
#define __PMSTAT__IBF__MASK                         0x00008000
#define __PMSTAT__IBF__LENGTH                       0x00000001

#define __ALCFGRPT__ARPT__POSITION                  0x00000000
#define __ALCFGRPT__ARPT__MASK                      0x000000FF
#define __ALCFGRPT__ARPT__LENGTH                    0x00000008

#define __ALCFGRPT__ALRMPTR__POSITION               0x00000008
#define __ALCFGRPT__ALRMPTR__MASK                   0x00000300
#define __ALCFGRPT__ALRMPTR__LENGTH                 0x00000002

#define __ALCFGRPT__AMASK__POSITION                 0x0000000A
#define __ALCFGRPT__AMASK__MASK                     0x00003C00
#define __ALCFGRPT__AMASK__LENGTH                   0x00000004

#define __ALCFGRPT__CHIME__POSITION                 0x0000000E
#define __ALCFGRPT__CHIME__MASK                     0x00004000
#define __ALCFGRPT__CHIME__LENGTH                   0x00000001

#define __ALCFGRPT__ALRMEN__POSITION                0x0000000F
#define __ALCFGRPT__ALRMEN__MASK                    0x00008000
#define __ALCFGRPT__ALRMEN__LENGTH                  0x00000001

#define __ALCFGRPT__ARPT0__POSITION                 0x00000000
#define __ALCFGRPT__ARPT0__MASK                     0x00000001
#define __ALCFGRPT__ARPT0__LENGTH                   0x00000001

#define __ALCFGRPT__ARPT1__POSITION                 0x00000001
#define __ALCFGRPT__ARPT1__MASK                     0x00000002
#define __ALCFGRPT__ARPT1__LENGTH                   0x00000001

#define __ALCFGRPT__ARPT2__POSITION                 0x00000002
#define __ALCFGRPT__ARPT2__MASK                     0x00000004
#define __ALCFGRPT__ARPT2__LENGTH                   0x00000001

#define __ALCFGRPT__ARPT3__POSITION                 0x00000003
#define __ALCFGRPT__ARPT3__MASK                     0x00000008
#define __ALCFGRPT__ARPT3__LENGTH                   0x00000001

#define __ALCFGRPT__ARPT4__POSITION                 0x00000004
#define __ALCFGRPT__ARPT4__MASK                     0x00000010
#define __ALCFGRPT__ARPT4__LENGTH                   0x00000001

#define __ALCFGRPT__ARPT5__POSITION                 0x00000005
#define __ALCFGRPT__ARPT5__MASK                     0x00000020
#define __ALCFGRPT__ARPT5__LENGTH                   0x00000001

#define __ALCFGRPT__ARPT6__POSITION                 0x00000006
#define __ALCFGRPT__ARPT6__MASK                     0x00000040
#define __ALCFGRPT__ARPT6__LENGTH                   0x00000001

#define __ALCFGRPT__ARPT7__POSITION                 0x00000007
#define __ALCFGRPT__ARPT7__MASK                     0x00000080
#define __ALCFGRPT__ARPT7__LENGTH                   0x00000001

#define __ALCFGRPT__ALRMPTR0__POSITION              0x00000008
#define __ALCFGRPT__ALRMPTR0__MASK                  0x00000100
#define __ALCFGRPT__ALRMPTR0__LENGTH                0x00000001

#define __ALCFGRPT__ALRMPTR1__POSITION              0x00000009
#define __ALCFGRPT__ALRMPTR1__MASK                  0x00000200
#define __ALCFGRPT__ALRMPTR1__LENGTH                0x00000001

#define __ALCFGRPT__AMASK0__POSITION                0x0000000A
#define __ALCFGRPT__AMASK0__MASK                    0x00000400
#define __ALCFGRPT__AMASK0__LENGTH                  0x00000001

#define __ALCFGRPT__AMASK1__POSITION                0x0000000B
#define __ALCFGRPT__AMASK1__MASK                    0x00000800
#define __ALCFGRPT__AMASK1__LENGTH                  0x00000001

#define __ALCFGRPT__AMASK2__POSITION                0x0000000C
#define __ALCFGRPT__AMASK2__MASK                    0x00001000
#define __ALCFGRPT__AMASK2__LENGTH                  0x00000001

#define __ALCFGRPT__AMASK3__POSITION                0x0000000D
#define __ALCFGRPT__AMASK3__MASK                    0x00002000
#define __ALCFGRPT__AMASK3__LENGTH                  0x00000001

#define __RCFGCAL__CAL__POSITION                    0x00000000
#define __RCFGCAL__CAL__MASK                        0x000000FF
#define __RCFGCAL__CAL__LENGTH                      0x00000008

#define __RCFGCAL__RTCPTR__POSITION                 0x00000008
#define __RCFGCAL__RTCPTR__MASK                     0x00000300
#define __RCFGCAL__RTCPTR__LENGTH                   0x00000002

#define __RCFGCAL__RTCOE__POSITION                  0x0000000A
#define __RCFGCAL__RTCOE__MASK                      0x00000400
#define __RCFGCAL__RTCOE__LENGTH                    0x00000001

#define __RCFGCAL__HALFSEC__POSITION                0x0000000B
#define __RCFGCAL__HALFSEC__MASK                    0x00000800
#define __RCFGCAL__HALFSEC__LENGTH                  0x00000001

#define __RCFGCAL__RTCSYNC__POSITION                0x0000000C
#define __RCFGCAL__RTCSYNC__MASK                    0x00001000
#define __RCFGCAL__RTCSYNC__LENGTH                  0x00000001

#define __RCFGCAL__RTCWREN__POSITION                0x0000000D
#define __RCFGCAL__RTCWREN__MASK                    0x00002000
#define __RCFGCAL__RTCWREN__LENGTH                  0x00000001

#define __RCFGCAL__RTCEN__POSITION                  0x0000000F
#define __RCFGCAL__RTCEN__MASK                      0x00008000
#define __RCFGCAL__RTCEN__LENGTH                    0x00000001

#define __RCFGCAL__CAL0__POSITION                   0x00000000
#define __RCFGCAL__CAL0__MASK                       0x00000001
#define __RCFGCAL__CAL0__LENGTH                     0x00000001

#define __RCFGCAL__CAL1__POSITION                   0x00000001
#define __RCFGCAL__CAL1__MASK                       0x00000002
#define __RCFGCAL__CAL1__LENGTH                     0x00000001

#define __RCFGCAL__CAL2__POSITION                   0x00000002
#define __RCFGCAL__CAL2__MASK                       0x00000004
#define __RCFGCAL__CAL2__LENGTH                     0x00000001

#define __RCFGCAL__CAL3__POSITION                   0x00000003
#define __RCFGCAL__CAL3__MASK                       0x00000008
#define __RCFGCAL__CAL3__LENGTH                     0x00000001

#define __RCFGCAL__CAL4__POSITION                   0x00000004
#define __RCFGCAL__CAL4__MASK                       0x00000010
#define __RCFGCAL__CAL4__LENGTH                     0x00000001

#define __RCFGCAL__CAL5__POSITION                   0x00000005
#define __RCFGCAL__CAL5__MASK                       0x00000020
#define __RCFGCAL__CAL5__LENGTH                     0x00000001

#define __RCFGCAL__CAL6__POSITION                   0x00000006
#define __RCFGCAL__CAL6__MASK                       0x00000040
#define __RCFGCAL__CAL6__LENGTH                     0x00000001

#define __RCFGCAL__CAL7__POSITION                   0x00000007
#define __RCFGCAL__CAL7__MASK                       0x00000080
#define __RCFGCAL__CAL7__LENGTH                     0x00000001

#define __RCFGCAL__RTCPTR0__POSITION                0x00000008
#define __RCFGCAL__RTCPTR0__MASK                    0x00000100
#define __RCFGCAL__RTCPTR0__LENGTH                  0x00000001

#define __RCFGCAL__RTCPTR1__POSITION                0x00000009
#define __RCFGCAL__RTCPTR1__MASK                    0x00000200
#define __RCFGCAL__RTCPTR1__LENGTH                  0x00000001

#define __CMCON__C1POS__POSITION                    0x00000000
#define __CMCON__C1POS__MASK                        0x00000001
#define __CMCON__C1POS__LENGTH                      0x00000001

#define __CMCON__C1NEG__POSITION                    0x00000001
#define __CMCON__C1NEG__MASK                        0x00000002
#define __CMCON__C1NEG__LENGTH                      0x00000001

#define __CMCON__C2POS__POSITION                    0x00000002
#define __CMCON__C2POS__MASK                        0x00000004
#define __CMCON__C2POS__LENGTH                      0x00000001

#define __CMCON__C2NEG__POSITION                    0x00000003
#define __CMCON__C2NEG__MASK                        0x00000008
#define __CMCON__C2NEG__LENGTH                      0x00000001

#define __CMCON__C1INV__POSITION                    0x00000004
#define __CMCON__C1INV__MASK                        0x00000010
#define __CMCON__C1INV__LENGTH                      0x00000001

#define __CMCON__C2INV__POSITION                    0x00000005
#define __CMCON__C2INV__MASK                        0x00000020
#define __CMCON__C2INV__LENGTH                      0x00000001

#define __CMCON__C1OUT__POSITION                    0x00000006
#define __CMCON__C1OUT__MASK                        0x00000040
#define __CMCON__C1OUT__LENGTH                      0x00000001

#define __CMCON__C2OUT__POSITION                    0x00000007
#define __CMCON__C2OUT__MASK                        0x00000080
#define __CMCON__C2OUT__LENGTH                      0x00000001

#define __CMCON__C1OUTEN__POSITION                  0x00000008
#define __CMCON__C1OUTEN__MASK                      0x00000100
#define __CMCON__C1OUTEN__LENGTH                    0x00000001

#define __CMCON__C2OUTEN__POSITION                  0x00000009
#define __CMCON__C2OUTEN__MASK                      0x00000200
#define __CMCON__C2OUTEN__LENGTH                    0x00000001

#define __CMCON__C1EN__POSITION                     0x0000000A
#define __CMCON__C1EN__MASK                         0x00000400
#define __CMCON__C1EN__LENGTH                       0x00000001

#define __CMCON__C2EN__POSITION                     0x0000000B
#define __CMCON__C2EN__MASK                         0x00000800
#define __CMCON__C2EN__LENGTH                       0x00000001

#define __CMCON__C1EVT__POSITION                    0x0000000C
#define __CMCON__C1EVT__MASK                        0x00001000
#define __CMCON__C1EVT__LENGTH                      0x00000001

#define __CMCON__C2EVT__POSITION                    0x0000000D
#define __CMCON__C2EVT__MASK                        0x00002000
#define __CMCON__C2EVT__LENGTH                      0x00000001

#define __CMCON__CMIDL__POSITION                    0x0000000F
#define __CMCON__CMIDL__MASK                        0x00008000
#define __CMCON__CMIDL__LENGTH                      0x00000001

#define __CVRCON__CVR__POSITION                     0x00000000
#define __CVRCON__CVR__MASK                         0x0000000F
#define __CVRCON__CVR__LENGTH                       0x00000004

#define __CVRCON__CVRSS__POSITION                   0x00000004
#define __CVRCON__CVRSS__MASK                       0x00000010
#define __CVRCON__CVRSS__LENGTH                     0x00000001

#define __CVRCON__CVRR__POSITION                    0x00000005
#define __CVRCON__CVRR__MASK                        0x00000020
#define __CVRCON__CVRR__LENGTH                      0x00000001

#define __CVRCON__CVROE__POSITION                   0x00000006
#define __CVRCON__CVROE__MASK                       0x00000040
#define __CVRCON__CVROE__LENGTH                     0x00000001

#define __CVRCON__CVREN__POSITION                   0x00000007
#define __CVRCON__CVREN__MASK                       0x00000080
#define __CVRCON__CVREN__LENGTH                     0x00000001

#define __CVRCON__CVR0__POSITION                    0x00000000
#define __CVRCON__CVR0__MASK                        0x00000001
#define __CVRCON__CVR0__LENGTH                      0x00000001

#define __CVRCON__CVR1__POSITION                    0x00000001
#define __CVRCON__CVR1__MASK                        0x00000002
#define __CVRCON__CVR1__LENGTH                      0x00000001

#define __CVRCON__CVR2__POSITION                    0x00000002
#define __CVRCON__CVR2__MASK                        0x00000004
#define __CVRCON__CVR2__LENGTH                      0x00000001

#define __CVRCON__CVR3__POSITION                    0x00000003
#define __CVRCON__CVR3__MASK                        0x00000008
#define __CVRCON__CVR3__LENGTH                      0x00000001

#define __CRCCON__PLEN__POSITION                    0x00000000
#define __CRCCON__PLEN__MASK                        0x0000000F
#define __CRCCON__PLEN__LENGTH                      0x00000004

#define __CRCCON__CRCGO__POSITION                   0x00000004
#define __CRCCON__CRCGO__MASK                       0x00000010
#define __CRCCON__CRCGO__LENGTH                     0x00000001

#define __CRCCON__CRCMPT__POSITION                  0x00000006
#define __CRCCON__CRCMPT__MASK                      0x00000040
#define __CRCCON__CRCMPT__LENGTH                    0x00000001

#define __CRCCON__CRCFUL__POSITION                  0x00000007
#define __CRCCON__CRCFUL__MASK                      0x00000080
#define __CRCCON__CRCFUL__LENGTH                    0x00000001

#define __CRCCON__VWORD__POSITION                   0x00000008
#define __CRCCON__VWORD__MASK                       0x00001F00
#define __CRCCON__VWORD__LENGTH                     0x00000005

#define __CRCCON__CSIDL__POSITION                   0x0000000D
#define __CRCCON__CSIDL__MASK                       0x00002000
#define __CRCCON__CSIDL__LENGTH                     0x00000001

#define __CRCCON__PLEN0__POSITION                   0x00000000
#define __CRCCON__PLEN0__MASK                       0x00000001
#define __CRCCON__PLEN0__LENGTH                     0x00000001

#define __CRCCON__PLEN1__POSITION                   0x00000001
#define __CRCCON__PLEN1__MASK                       0x00000002
#define __CRCCON__PLEN1__LENGTH                     0x00000001

#define __CRCCON__PLEN2__POSITION                   0x00000002
#define __CRCCON__PLEN2__MASK                       0x00000004
#define __CRCCON__PLEN2__LENGTH                     0x00000001

#define __CRCCON__PLEN3__POSITION                   0x00000003
#define __CRCCON__PLEN3__MASK                       0x00000008
#define __CRCCON__PLEN3__LENGTH                     0x00000001

#define __CRCCON__VWORD0__POSITION                  0x00000008
#define __CRCCON__VWORD0__MASK                      0x00000100
#define __CRCCON__VWORD0__LENGTH                    0x00000001

#define __CRCCON__VWORD1__POSITION                  0x00000009
#define __CRCCON__VWORD1__MASK                      0x00000200
#define __CRCCON__VWORD1__LENGTH                    0x00000001

#define __CRCCON__VWORD2__POSITION                  0x0000000A
#define __CRCCON__VWORD2__MASK                      0x00000400
#define __CRCCON__VWORD2__LENGTH                    0x00000001

#define __CRCCON__VWORD3__POSITION                  0x0000000B
#define __CRCCON__VWORD3__MASK                      0x00000800
#define __CRCCON__VWORD3__LENGTH                    0x00000001

#define __CRCCON__VWORD4__POSITION                  0x0000000C
#define __CRCCON__VWORD4__MASK                      0x00001000
#define __CRCCON__VWORD4__LENGTH                    0x00000001

#define __RPINR0__INT1R__POSITION                   0x00000008
#define __RPINR0__INT1R__MASK                       0x00001F00
#define __RPINR0__INT1R__LENGTH                     0x00000005

#define __RPINR0__INT1R0__POSITION                  0x00000008
#define __RPINR0__INT1R0__MASK                      0x00000100
#define __RPINR0__INT1R0__LENGTH                    0x00000001

#define __RPINR0__INT1R1__POSITION                  0x00000009
#define __RPINR0__INT1R1__MASK                      0x00000200
#define __RPINR0__INT1R1__LENGTH                    0x00000001

#define __RPINR0__INT1R2__POSITION                  0x0000000A
#define __RPINR0__INT1R2__MASK                      0x00000400
#define __RPINR0__INT1R2__LENGTH                    0x00000001

#define __RPINR0__INT1R3__POSITION                  0x0000000B
#define __RPINR0__INT1R3__MASK                      0x00000800
#define __RPINR0__INT1R3__LENGTH                    0x00000001

#define __RPINR0__INT1R4__POSITION                  0x0000000C
#define __RPINR0__INT1R4__MASK                      0x00001000
#define __RPINR0__INT1R4__LENGTH                    0x00000001

#define __RPINR1__INT2R__POSITION                   0x00000000
#define __RPINR1__INT2R__MASK                       0x0000001F
#define __RPINR1__INT2R__LENGTH                     0x00000005

#define __RPINR1__INT2R0__POSITION                  0x00000000
#define __RPINR1__INT2R0__MASK                      0x00000001
#define __RPINR1__INT2R0__LENGTH                    0x00000001

#define __RPINR1__INT2R1__POSITION                  0x00000001
#define __RPINR1__INT2R1__MASK                      0x00000002
#define __RPINR1__INT2R1__LENGTH                    0x00000001

#define __RPINR1__INT2R2__POSITION                  0x00000002
#define __RPINR1__INT2R2__MASK                      0x00000004
#define __RPINR1__INT2R2__LENGTH                    0x00000001

#define __RPINR1__INT2R3__POSITION                  0x00000003
#define __RPINR1__INT2R3__MASK                      0x00000008
#define __RPINR1__INT2R3__LENGTH                    0x00000001

#define __RPINR1__INT2R4__POSITION                  0x00000004
#define __RPINR1__INT2R4__MASK                      0x00000010
#define __RPINR1__INT2R4__LENGTH                    0x00000001

#define __RPINR3__T2CKR__POSITION                   0x00000000
#define __RPINR3__T2CKR__MASK                       0x0000001F
#define __RPINR3__T2CKR__LENGTH                     0x00000005

#define __RPINR3__T3CKR__POSITION                   0x00000008
#define __RPINR3__T3CKR__MASK                       0x00001F00
#define __RPINR3__T3CKR__LENGTH                     0x00000005

#define __RPINR3__T2CKR0__POSITION                  0x00000000
#define __RPINR3__T2CKR0__MASK                      0x00000001
#define __RPINR3__T2CKR0__LENGTH                    0x00000001

#define __RPINR3__T2CKR1__POSITION                  0x00000001
#define __RPINR3__T2CKR1__MASK                      0x00000002
#define __RPINR3__T2CKR1__LENGTH                    0x00000001

#define __RPINR3__T2CKR2__POSITION                  0x00000002
#define __RPINR3__T2CKR2__MASK                      0x00000004
#define __RPINR3__T2CKR2__LENGTH                    0x00000001

#define __RPINR3__T2CKR3__POSITION                  0x00000003
#define __RPINR3__T2CKR3__MASK                      0x00000008
#define __RPINR3__T2CKR3__LENGTH                    0x00000001

#define __RPINR3__T2CKR4__POSITION                  0x00000004
#define __RPINR3__T2CKR4__MASK                      0x00000010
#define __RPINR3__T2CKR4__LENGTH                    0x00000001

#define __RPINR3__T3CKR0__POSITION                  0x00000008
#define __RPINR3__T3CKR0__MASK                      0x00000100
#define __RPINR3__T3CKR0__LENGTH                    0x00000001

#define __RPINR3__T3CKR1__POSITION                  0x00000009
#define __RPINR3__T3CKR1__MASK                      0x00000200
#define __RPINR3__T3CKR1__LENGTH                    0x00000001

#define __RPINR3__T3CKR2__POSITION                  0x0000000A
#define __RPINR3__T3CKR2__MASK                      0x00000400
#define __RPINR3__T3CKR2__LENGTH                    0x00000001

#define __RPINR3__T3CKR3__POSITION                  0x0000000B
#define __RPINR3__T3CKR3__MASK                      0x00000800
#define __RPINR3__T3CKR3__LENGTH                    0x00000001

#define __RPINR3__T3CKR4__POSITION                  0x0000000C
#define __RPINR3__T3CKR4__MASK                      0x00001000
#define __RPINR3__T3CKR4__LENGTH                    0x00000001

#define __RPINR4__T4CKR__POSITION                   0x00000000
#define __RPINR4__T4CKR__MASK                       0x0000001F
#define __RPINR4__T4CKR__LENGTH                     0x00000005

#define __RPINR4__T5CKR__POSITION                   0x00000008
#define __RPINR4__T5CKR__MASK                       0x00001F00
#define __RPINR4__T5CKR__LENGTH                     0x00000005

#define __RPINR4__T4CKR0__POSITION                  0x00000000
#define __RPINR4__T4CKR0__MASK                      0x00000001
#define __RPINR4__T4CKR0__LENGTH                    0x00000001

#define __RPINR4__T4CKR1__POSITION                  0x00000001
#define __RPINR4__T4CKR1__MASK                      0x00000002
#define __RPINR4__T4CKR1__LENGTH                    0x00000001

#define __RPINR4__T4CKR2__POSITION                  0x00000002
#define __RPINR4__T4CKR2__MASK                      0x00000004
#define __RPINR4__T4CKR2__LENGTH                    0x00000001

#define __RPINR4__T4CKR3__POSITION                  0x00000003
#define __RPINR4__T4CKR3__MASK                      0x00000008
#define __RPINR4__T4CKR3__LENGTH                    0x00000001

#define __RPINR4__T4CKR4__POSITION                  0x00000004
#define __RPINR4__T4CKR4__MASK                      0x00000010
#define __RPINR4__T4CKR4__LENGTH                    0x00000001

#define __RPINR4__T5CKR0__POSITION                  0x00000008
#define __RPINR4__T5CKR0__MASK                      0x00000100
#define __RPINR4__T5CKR0__LENGTH                    0x00000001

#define __RPINR4__T5CKR1__POSITION                  0x00000009
#define __RPINR4__T5CKR1__MASK                      0x00000200
#define __RPINR4__T5CKR1__LENGTH                    0x00000001

#define __RPINR4__T5CKR2__POSITION                  0x0000000A
#define __RPINR4__T5CKR2__MASK                      0x00000400
#define __RPINR4__T5CKR2__LENGTH                    0x00000001

#define __RPINR4__T5CKR3__POSITION                  0x0000000B
#define __RPINR4__T5CKR3__MASK                      0x00000800
#define __RPINR4__T5CKR3__LENGTH                    0x00000001

#define __RPINR4__T5CKR4__POSITION                  0x0000000C
#define __RPINR4__T5CKR4__MASK                      0x00001000
#define __RPINR4__T5CKR4__LENGTH                    0x00000001

#define __RPINR7__IC1R__POSITION                    0x00000000
#define __RPINR7__IC1R__MASK                        0x0000001F
#define __RPINR7__IC1R__LENGTH                      0x00000005

#define __RPINR7__IC2R__POSITION                    0x00000008
#define __RPINR7__IC2R__MASK                        0x00001F00
#define __RPINR7__IC2R__LENGTH                      0x00000005

#define __RPINR7__IC1R0__POSITION                   0x00000000
#define __RPINR7__IC1R0__MASK                       0x00000001
#define __RPINR7__IC1R0__LENGTH                     0x00000001

#define __RPINR7__IC1R1__POSITION                   0x00000001
#define __RPINR7__IC1R1__MASK                       0x00000002
#define __RPINR7__IC1R1__LENGTH                     0x00000001

#define __RPINR7__IC1R2__POSITION                   0x00000002
#define __RPINR7__IC1R2__MASK                       0x00000004
#define __RPINR7__IC1R2__LENGTH                     0x00000001

#define __RPINR7__IC1R3__POSITION                   0x00000003
#define __RPINR7__IC1R3__MASK                       0x00000008
#define __RPINR7__IC1R3__LENGTH                     0x00000001

#define __RPINR7__IC1R4__POSITION                   0x00000004
#define __RPINR7__IC1R4__MASK                       0x00000010
#define __RPINR7__IC1R4__LENGTH                     0x00000001

#define __RPINR7__IC2R0__POSITION                   0x00000008
#define __RPINR7__IC2R0__MASK                       0x00000100
#define __RPINR7__IC2R0__LENGTH                     0x00000001

#define __RPINR7__IC2R1__POSITION                   0x00000009
#define __RPINR7__IC2R1__MASK                       0x00000200
#define __RPINR7__IC2R1__LENGTH                     0x00000001

#define __RPINR7__IC2R2__POSITION                   0x0000000A
#define __RPINR7__IC2R2__MASK                       0x00000400
#define __RPINR7__IC2R2__LENGTH                     0x00000001

#define __RPINR7__IC2R3__POSITION                   0x0000000B
#define __RPINR7__IC2R3__MASK                       0x00000800
#define __RPINR7__IC2R3__LENGTH                     0x00000001

#define __RPINR7__IC2R4__POSITION                   0x0000000C
#define __RPINR7__IC2R4__MASK                       0x00001000
#define __RPINR7__IC2R4__LENGTH                     0x00000001

#define __RPINR10__IC7R__POSITION                   0x00000000
#define __RPINR10__IC7R__MASK                       0x0000001F
#define __RPINR10__IC7R__LENGTH                     0x00000005

#define __RPINR10__IC8R__POSITION                   0x00000008
#define __RPINR10__IC8R__MASK                       0x00001F00
#define __RPINR10__IC8R__LENGTH                     0x00000005

#define __RPINR10__IC7R0__POSITION                  0x00000000
#define __RPINR10__IC7R0__MASK                      0x00000001
#define __RPINR10__IC7R0__LENGTH                    0x00000001

#define __RPINR10__IC7R1__POSITION                  0x00000001
#define __RPINR10__IC7R1__MASK                      0x00000002
#define __RPINR10__IC7R1__LENGTH                    0x00000001

#define __RPINR10__IC7R2__POSITION                  0x00000002
#define __RPINR10__IC7R2__MASK                      0x00000004
#define __RPINR10__IC7R2__LENGTH                    0x00000001

#define __RPINR10__IC7R3__POSITION                  0x00000003
#define __RPINR10__IC7R3__MASK                      0x00000008
#define __RPINR10__IC7R3__LENGTH                    0x00000001

#define __RPINR10__IC7R4__POSITION                  0x00000004
#define __RPINR10__IC7R4__MASK                      0x00000010
#define __RPINR10__IC7R4__LENGTH                    0x00000001

#define __RPINR10__IC8R0__POSITION                  0x00000008
#define __RPINR10__IC8R0__MASK                      0x00000100
#define __RPINR10__IC8R0__LENGTH                    0x00000001

#define __RPINR10__IC8R1__POSITION                  0x00000009
#define __RPINR10__IC8R1__MASK                      0x00000200
#define __RPINR10__IC8R1__LENGTH                    0x00000001

#define __RPINR10__IC8R2__POSITION                  0x0000000A
#define __RPINR10__IC8R2__MASK                      0x00000400
#define __RPINR10__IC8R2__LENGTH                    0x00000001

#define __RPINR10__IC8R3__POSITION                  0x0000000B
#define __RPINR10__IC8R3__MASK                      0x00000800
#define __RPINR10__IC8R3__LENGTH                    0x00000001

#define __RPINR10__IC8R4__POSITION                  0x0000000C
#define __RPINR10__IC8R4__MASK                      0x00001000
#define __RPINR10__IC8R4__LENGTH                    0x00000001

#define __RPINR11__OCFAR__POSITION                  0x00000000
#define __RPINR11__OCFAR__MASK                      0x0000001F
#define __RPINR11__OCFAR__LENGTH                    0x00000005

#define __RPINR11__OCFAR0__POSITION                 0x00000000
#define __RPINR11__OCFAR0__MASK                     0x00000001
#define __RPINR11__OCFAR0__LENGTH                   0x00000001

#define __RPINR11__OCFAR1__POSITION                 0x00000001
#define __RPINR11__OCFAR1__MASK                     0x00000002
#define __RPINR11__OCFAR1__LENGTH                   0x00000001

#define __RPINR11__OCFAR2__POSITION                 0x00000002
#define __RPINR11__OCFAR2__MASK                     0x00000004
#define __RPINR11__OCFAR2__LENGTH                   0x00000001

#define __RPINR11__OCFAR3__POSITION                 0x00000003
#define __RPINR11__OCFAR3__MASK                     0x00000008
#define __RPINR11__OCFAR3__LENGTH                   0x00000001

#define __RPINR11__OCFAR4__POSITION                 0x00000004
#define __RPINR11__OCFAR4__MASK                     0x00000010
#define __RPINR11__OCFAR4__LENGTH                   0x00000001

#define __RPINR12__FLTA1R__POSITION                 0x00000000
#define __RPINR12__FLTA1R__MASK                     0x0000001F
#define __RPINR12__FLTA1R__LENGTH                   0x00000005

#define __RPINR12__FLTA1R0__POSITION                0x00000000
#define __RPINR12__FLTA1R0__MASK                    0x00000001
#define __RPINR12__FLTA1R0__LENGTH                  0x00000001

#define __RPINR12__FLTA1R1__POSITION                0x00000001
#define __RPINR12__FLTA1R1__MASK                    0x00000002
#define __RPINR12__FLTA1R1__LENGTH                  0x00000001

#define __RPINR12__FLTA1R2__POSITION                0x00000002
#define __RPINR12__FLTA1R2__MASK                    0x00000004
#define __RPINR12__FLTA1R2__LENGTH                  0x00000001

#define __RPINR12__FLTA1R3__POSITION                0x00000003
#define __RPINR12__FLTA1R3__MASK                    0x00000008
#define __RPINR12__FLTA1R3__LENGTH                  0x00000001

#define __RPINR12__FLTA1R4__POSITION                0x00000004
#define __RPINR12__FLTA1R4__MASK                    0x00000010
#define __RPINR12__FLTA1R4__LENGTH                  0x00000001

#define __RPINR13__FLTA2R__POSITION                 0x00000000
#define __RPINR13__FLTA2R__MASK                     0x0000001F
#define __RPINR13__FLTA2R__LENGTH                   0x00000005

#define __RPINR13__FLTA2R0__POSITION                0x00000000
#define __RPINR13__FLTA2R0__MASK                    0x00000001
#define __RPINR13__FLTA2R0__LENGTH                  0x00000001

#define __RPINR13__FLTA2R1__POSITION                0x00000001
#define __RPINR13__FLTA2R1__MASK                    0x00000002
#define __RPINR13__FLTA2R1__LENGTH                  0x00000001

#define __RPINR13__FLTA2R2__POSITION                0x00000002
#define __RPINR13__FLTA2R2__MASK                    0x00000004
#define __RPINR13__FLTA2R2__LENGTH                  0x00000001

#define __RPINR13__FLTA2R3__POSITION                0x00000003
#define __RPINR13__FLTA2R3__MASK                    0x00000008
#define __RPINR13__FLTA2R3__LENGTH                  0x00000001

#define __RPINR13__FLTA2R4__POSITION                0x00000004
#define __RPINR13__FLTA2R4__MASK                    0x00000010
#define __RPINR13__FLTA2R4__LENGTH                  0x00000001

#define __RPINR14__QEA1R__POSITION                  0x00000000
#define __RPINR14__QEA1R__MASK                      0x0000001F
#define __RPINR14__QEA1R__LENGTH                    0x00000005

#define __RPINR14__QEB1R__POSITION                  0x00000008
#define __RPINR14__QEB1R__MASK                      0x00001F00
#define __RPINR14__QEB1R__LENGTH                    0x00000005

#define __RPINR14__QEA1R0__POSITION                 0x00000000
#define __RPINR14__QEA1R0__MASK                     0x00000001
#define __RPINR14__QEA1R0__LENGTH                   0x00000001

#define __RPINR14__QEA1R1__POSITION                 0x00000001
#define __RPINR14__QEA1R1__MASK                     0x00000002
#define __RPINR14__QEA1R1__LENGTH                   0x00000001

#define __RPINR14__QEA1R2__POSITION                 0x00000002
#define __RPINR14__QEA1R2__MASK                     0x00000004
#define __RPINR14__QEA1R2__LENGTH                   0x00000001

#define __RPINR14__QEA1R3__POSITION                 0x00000003
#define __RPINR14__QEA1R3__MASK                     0x00000008
#define __RPINR14__QEA1R3__LENGTH                   0x00000001

#define __RPINR14__QEA1R4__POSITION                 0x00000004
#define __RPINR14__QEA1R4__MASK                     0x00000010
#define __RPINR14__QEA1R4__LENGTH                   0x00000001

#define __RPINR14__QEB1R0__POSITION                 0x00000008
#define __RPINR14__QEB1R0__MASK                     0x00000100
#define __RPINR14__QEB1R0__LENGTH                   0x00000001

#define __RPINR14__QEB1R1__POSITION                 0x00000009
#define __RPINR14__QEB1R1__MASK                     0x00000200
#define __RPINR14__QEB1R1__LENGTH                   0x00000001

#define __RPINR14__QEB1R2__POSITION                 0x0000000A
#define __RPINR14__QEB1R2__MASK                     0x00000400
#define __RPINR14__QEB1R2__LENGTH                   0x00000001

#define __RPINR14__QEB1R3__POSITION                 0x0000000B
#define __RPINR14__QEB1R3__MASK                     0x00000800
#define __RPINR14__QEB1R3__LENGTH                   0x00000001

#define __RPINR14__QEB1R4__POSITION                 0x0000000C
#define __RPINR14__QEB1R4__MASK                     0x00001000
#define __RPINR14__QEB1R4__LENGTH                   0x00000001

#define __RPINR15__INDX1R__POSITION                 0x00000000
#define __RPINR15__INDX1R__MASK                     0x0000001F
#define __RPINR15__INDX1R__LENGTH                   0x00000005

#define __RPINR15__INDX1R0__POSITION                0x00000000
#define __RPINR15__INDX1R0__MASK                    0x00000001
#define __RPINR15__INDX1R0__LENGTH                  0x00000001

#define __RPINR15__INDX1R1__POSITION                0x00000001
#define __RPINR15__INDX1R1__MASK                    0x00000002
#define __RPINR15__INDX1R1__LENGTH                  0x00000001

#define __RPINR15__INDX1R2__POSITION                0x00000002
#define __RPINR15__INDX1R2__MASK                    0x00000004
#define __RPINR15__INDX1R2__LENGTH                  0x00000001

#define __RPINR15__INDX1R3__POSITION                0x00000003
#define __RPINR15__INDX1R3__MASK                    0x00000008
#define __RPINR15__INDX1R3__LENGTH                  0x00000001

#define __RPINR15__INDX1R4__POSITION                0x00000004
#define __RPINR15__INDX1R4__MASK                    0x00000010
#define __RPINR15__INDX1R4__LENGTH                  0x00000001

#define __RPINR16__QEA2R__POSITION                  0x00000000
#define __RPINR16__QEA2R__MASK                      0x0000001F
#define __RPINR16__QEA2R__LENGTH                    0x00000005

#define __RPINR16__QEB2R__POSITION                  0x00000008
#define __RPINR16__QEB2R__MASK                      0x00001F00
#define __RPINR16__QEB2R__LENGTH                    0x00000005

#define __RPINR16__QEA2R0__POSITION                 0x00000000
#define __RPINR16__QEA2R0__MASK                     0x00000001
#define __RPINR16__QEA2R0__LENGTH                   0x00000001

#define __RPINR16__QEA2R1__POSITION                 0x00000001
#define __RPINR16__QEA2R1__MASK                     0x00000002
#define __RPINR16__QEA2R1__LENGTH                   0x00000001

#define __RPINR16__QEA2R2__POSITION                 0x00000002
#define __RPINR16__QEA2R2__MASK                     0x00000004
#define __RPINR16__QEA2R2__LENGTH                   0x00000001

#define __RPINR16__QEA2R3__POSITION                 0x00000003
#define __RPINR16__QEA2R3__MASK                     0x00000008
#define __RPINR16__QEA2R3__LENGTH                   0x00000001

#define __RPINR16__QEA2R4__POSITION                 0x00000004
#define __RPINR16__QEA2R4__MASK                     0x00000010
#define __RPINR16__QEA2R4__LENGTH                   0x00000001

#define __RPINR16__QEB2R0__POSITION                 0x00000008
#define __RPINR16__QEB2R0__MASK                     0x00000100
#define __RPINR16__QEB2R0__LENGTH                   0x00000001

#define __RPINR16__QEB2R1__POSITION                 0x00000009
#define __RPINR16__QEB2R1__MASK                     0x00000200
#define __RPINR16__QEB2R1__LENGTH                   0x00000001

#define __RPINR16__QEB2R2__POSITION                 0x0000000A
#define __RPINR16__QEB2R2__MASK                     0x00000400
#define __RPINR16__QEB2R2__LENGTH                   0x00000001

#define __RPINR16__QEB2R3__POSITION                 0x0000000B
#define __RPINR16__QEB2R3__MASK                     0x00000800
#define __RPINR16__QEB2R3__LENGTH                   0x00000001

#define __RPINR16__QEB2R4__POSITION                 0x0000000C
#define __RPINR16__QEB2R4__MASK                     0x00001000
#define __RPINR16__QEB2R4__LENGTH                   0x00000001

#define __RPINR17__INDX2R__POSITION                 0x00000000
#define __RPINR17__INDX2R__MASK                     0x0000001F
#define __RPINR17__INDX2R__LENGTH                   0x00000005

#define __RPINR17__INDX2R0__POSITION                0x00000000
#define __RPINR17__INDX2R0__MASK                    0x00000001
#define __RPINR17__INDX2R0__LENGTH                  0x00000001

#define __RPINR17__INDX2R1__POSITION                0x00000001
#define __RPINR17__INDX2R1__MASK                    0x00000002
#define __RPINR17__INDX2R1__LENGTH                  0x00000001

#define __RPINR17__INDX2R2__POSITION                0x00000002
#define __RPINR17__INDX2R2__MASK                    0x00000004
#define __RPINR17__INDX2R2__LENGTH                  0x00000001

#define __RPINR17__INDX2R3__POSITION                0x00000003
#define __RPINR17__INDX2R3__MASK                    0x00000008
#define __RPINR17__INDX2R3__LENGTH                  0x00000001

#define __RPINR17__INDX2R4__POSITION                0x00000004
#define __RPINR17__INDX2R4__MASK                    0x00000010
#define __RPINR17__INDX2R4__LENGTH                  0x00000001

#define __RPINR18__U1RXR__POSITION                  0x00000000
#define __RPINR18__U1RXR__MASK                      0x0000001F
#define __RPINR18__U1RXR__LENGTH                    0x00000005

#define __RPINR18__U1CTSR__POSITION                 0x00000008
#define __RPINR18__U1CTSR__MASK                     0x00001F00
#define __RPINR18__U1CTSR__LENGTH                   0x00000005

#define __RPINR18__U1RXR0__POSITION                 0x00000000
#define __RPINR18__U1RXR0__MASK                     0x00000001
#define __RPINR18__U1RXR0__LENGTH                   0x00000001

#define __RPINR18__U1RXR1__POSITION                 0x00000001
#define __RPINR18__U1RXR1__MASK                     0x00000002
#define __RPINR18__U1RXR1__LENGTH                   0x00000001

#define __RPINR18__U1RXR2__POSITION                 0x00000002
#define __RPINR18__U1RXR2__MASK                     0x00000004
#define __RPINR18__U1RXR2__LENGTH                   0x00000001

#define __RPINR18__U1RXR3__POSITION                 0x00000003
#define __RPINR18__U1RXR3__MASK                     0x00000008
#define __RPINR18__U1RXR3__LENGTH                   0x00000001

#define __RPINR18__U1RXR4__POSITION                 0x00000004
#define __RPINR18__U1RXR4__MASK                     0x00000010
#define __RPINR18__U1RXR4__LENGTH                   0x00000001

#define __RPINR18__U1CTSR0__POSITION                0x00000008
#define __RPINR18__U1CTSR0__MASK                    0x00000100
#define __RPINR18__U1CTSR0__LENGTH                  0x00000001

#define __RPINR18__U1CTSR1__POSITION                0x00000009
#define __RPINR18__U1CTSR1__MASK                    0x00000200
#define __RPINR18__U1CTSR1__LENGTH                  0x00000001

#define __RPINR18__U1CTSR2__POSITION                0x0000000A
#define __RPINR18__U1CTSR2__MASK                    0x00000400
#define __RPINR18__U1CTSR2__LENGTH                  0x00000001

#define __RPINR18__U1CTSR3__POSITION                0x0000000B
#define __RPINR18__U1CTSR3__MASK                    0x00000800
#define __RPINR18__U1CTSR3__LENGTH                  0x00000001

#define __RPINR18__U1CTSR4__POSITION                0x0000000C
#define __RPINR18__U1CTSR4__MASK                    0x00001000
#define __RPINR18__U1CTSR4__LENGTH                  0x00000001

#define __RPINR19__U2RXR__POSITION                  0x00000000
#define __RPINR19__U2RXR__MASK                      0x0000001F
#define __RPINR19__U2RXR__LENGTH                    0x00000005

#define __RPINR19__U2CTSR__POSITION                 0x00000008
#define __RPINR19__U2CTSR__MASK                     0x00001F00
#define __RPINR19__U2CTSR__LENGTH                   0x00000005

#define __RPINR19__U2RXR0__POSITION                 0x00000000
#define __RPINR19__U2RXR0__MASK                     0x00000001
#define __RPINR19__U2RXR0__LENGTH                   0x00000001

#define __RPINR19__U2RXR1__POSITION                 0x00000001
#define __RPINR19__U2RXR1__MASK                     0x00000002
#define __RPINR19__U2RXR1__LENGTH                   0x00000001

#define __RPINR19__U2RXR2__POSITION                 0x00000002
#define __RPINR19__U2RXR2__MASK                     0x00000004
#define __RPINR19__U2RXR2__LENGTH                   0x00000001

#define __RPINR19__U2RXR3__POSITION                 0x00000003
#define __RPINR19__U2RXR3__MASK                     0x00000008
#define __RPINR19__U2RXR3__LENGTH                   0x00000001

#define __RPINR19__U2RXR4__POSITION                 0x00000004
#define __RPINR19__U2RXR4__MASK                     0x00000010
#define __RPINR19__U2RXR4__LENGTH                   0x00000001

#define __RPINR19__U2CTSR0__POSITION                0x00000008
#define __RPINR19__U2CTSR0__MASK                    0x00000100
#define __RPINR19__U2CTSR0__LENGTH                  0x00000001

#define __RPINR19__U2CTSR1__POSITION                0x00000009
#define __RPINR19__U2CTSR1__MASK                    0x00000200
#define __RPINR19__U2CTSR1__LENGTH                  0x00000001

#define __RPINR19__U2CTSR2__POSITION                0x0000000A
#define __RPINR19__U2CTSR2__MASK                    0x00000400
#define __RPINR19__U2CTSR2__LENGTH                  0x00000001

#define __RPINR19__U2CTSR3__POSITION                0x0000000B
#define __RPINR19__U2CTSR3__MASK                    0x00000800
#define __RPINR19__U2CTSR3__LENGTH                  0x00000001

#define __RPINR19__U2CTSR4__POSITION                0x0000000C
#define __RPINR19__U2CTSR4__MASK                    0x00001000
#define __RPINR19__U2CTSR4__LENGTH                  0x00000001

#define __RPINR20__SDI1R__POSITION                  0x00000000
#define __RPINR20__SDI1R__MASK                      0x0000001F
#define __RPINR20__SDI1R__LENGTH                    0x00000005

#define __RPINR20__SCK1R__POSITION                  0x00000008
#define __RPINR20__SCK1R__MASK                      0x00001F00
#define __RPINR20__SCK1R__LENGTH                    0x00000005

#define __RPINR20__SDI1R0__POSITION                 0x00000000
#define __RPINR20__SDI1R0__MASK                     0x00000001
#define __RPINR20__SDI1R0__LENGTH                   0x00000001

#define __RPINR20__SDI1R1__POSITION                 0x00000001
#define __RPINR20__SDI1R1__MASK                     0x00000002
#define __RPINR20__SDI1R1__LENGTH                   0x00000001

#define __RPINR20__SDI1R2__POSITION                 0x00000002
#define __RPINR20__SDI1R2__MASK                     0x00000004
#define __RPINR20__SDI1R2__LENGTH                   0x00000001

#define __RPINR20__SDI1R3__POSITION                 0x00000003
#define __RPINR20__SDI1R3__MASK                     0x00000008
#define __RPINR20__SDI1R3__LENGTH                   0x00000001

#define __RPINR20__SDI1R4__POSITION                 0x00000004
#define __RPINR20__SDI1R4__MASK                     0x00000010
#define __RPINR20__SDI1R4__LENGTH                   0x00000001

#define __RPINR20__SCK1R0__POSITION                 0x00000008
#define __RPINR20__SCK1R0__MASK                     0x00000100
#define __RPINR20__SCK1R0__LENGTH                   0x00000001

#define __RPINR20__SCK1R1__POSITION                 0x00000009
#define __RPINR20__SCK1R1__MASK                     0x00000200
#define __RPINR20__SCK1R1__LENGTH                   0x00000001

#define __RPINR20__SCK1R2__POSITION                 0x0000000A
#define __RPINR20__SCK1R2__MASK                     0x00000400
#define __RPINR20__SCK1R2__LENGTH                   0x00000001

#define __RPINR20__SCK1R3__POSITION                 0x0000000B
#define __RPINR20__SCK1R3__MASK                     0x00000800
#define __RPINR20__SCK1R3__LENGTH                   0x00000001

#define __RPINR20__SCK1R4__POSITION                 0x0000000C
#define __RPINR20__SCK1R4__MASK                     0x00001000
#define __RPINR20__SCK1R4__LENGTH                   0x00000001

#define __RPINR21__SS1R__POSITION                   0x00000000
#define __RPINR21__SS1R__MASK                       0x0000001F
#define __RPINR21__SS1R__LENGTH                     0x00000005

#define __RPINR21__SS1R0__POSITION                  0x00000000
#define __RPINR21__SS1R0__MASK                      0x00000001
#define __RPINR21__SS1R0__LENGTH                    0x00000001

#define __RPINR21__SS1R1__POSITION                  0x00000001
#define __RPINR21__SS1R1__MASK                      0x00000002
#define __RPINR21__SS1R1__LENGTH                    0x00000001

#define __RPINR21__SS1R2__POSITION                  0x00000002
#define __RPINR21__SS1R2__MASK                      0x00000004
#define __RPINR21__SS1R2__LENGTH                    0x00000001

#define __RPINR21__SS1R3__POSITION                  0x00000003
#define __RPINR21__SS1R3__MASK                      0x00000008
#define __RPINR21__SS1R3__LENGTH                    0x00000001

#define __RPINR21__SS1R4__POSITION                  0x00000004
#define __RPINR21__SS1R4__MASK                      0x00000010
#define __RPINR21__SS1R4__LENGTH                    0x00000001

#define __RPINR22__SDI2R__POSITION                  0x00000000
#define __RPINR22__SDI2R__MASK                      0x0000001F
#define __RPINR22__SDI2R__LENGTH                    0x00000005

#define __RPINR22__SCK2R__POSITION                  0x00000008
#define __RPINR22__SCK2R__MASK                      0x00001F00
#define __RPINR22__SCK2R__LENGTH                    0x00000005

#define __RPINR22__SDI2R0__POSITION                 0x00000000
#define __RPINR22__SDI2R0__MASK                     0x00000001
#define __RPINR22__SDI2R0__LENGTH                   0x00000001

#define __RPINR22__SDI2R1__POSITION                 0x00000001
#define __RPINR22__SDI2R1__MASK                     0x00000002
#define __RPINR22__SDI2R1__LENGTH                   0x00000001

#define __RPINR22__SDI2R2__POSITION                 0x00000002
#define __RPINR22__SDI2R2__MASK                     0x00000004
#define __RPINR22__SDI2R2__LENGTH                   0x00000001

#define __RPINR22__SDI2R3__POSITION                 0x00000003
#define __RPINR22__SDI2R3__MASK                     0x00000008
#define __RPINR22__SDI2R3__LENGTH                   0x00000001

#define __RPINR22__SDI2R4__POSITION                 0x00000004
#define __RPINR22__SDI2R4__MASK                     0x00000010
#define __RPINR22__SDI2R4__LENGTH                   0x00000001

#define __RPINR22__SCK2R0__POSITION                 0x00000008
#define __RPINR22__SCK2R0__MASK                     0x00000100
#define __RPINR22__SCK2R0__LENGTH                   0x00000001

#define __RPINR22__SCK2R1__POSITION                 0x00000009
#define __RPINR22__SCK2R1__MASK                     0x00000200
#define __RPINR22__SCK2R1__LENGTH                   0x00000001

#define __RPINR22__SCK2R2__POSITION                 0x0000000A
#define __RPINR22__SCK2R2__MASK                     0x00000400
#define __RPINR22__SCK2R2__LENGTH                   0x00000001

#define __RPINR22__SCK2R3__POSITION                 0x0000000B
#define __RPINR22__SCK2R3__MASK                     0x00000800
#define __RPINR22__SCK2R3__LENGTH                   0x00000001

#define __RPINR22__SCK2R4__POSITION                 0x0000000C
#define __RPINR22__SCK2R4__MASK                     0x00001000
#define __RPINR22__SCK2R4__LENGTH                   0x00000001

#define __RPINR23__SS2R__POSITION                   0x00000000
#define __RPINR23__SS2R__MASK                       0x0000001F
#define __RPINR23__SS2R__LENGTH                     0x00000005

#define __RPINR23__SS2R0__POSITION                  0x00000000
#define __RPINR23__SS2R0__MASK                      0x00000001
#define __RPINR23__SS2R0__LENGTH                    0x00000001

#define __RPINR23__SS2R1__POSITION                  0x00000001
#define __RPINR23__SS2R1__MASK                      0x00000002
#define __RPINR23__SS2R1__LENGTH                    0x00000001

#define __RPINR23__SS2R2__POSITION                  0x00000002
#define __RPINR23__SS2R2__MASK                      0x00000004
#define __RPINR23__SS2R2__LENGTH                    0x00000001

#define __RPINR23__SS2R3__POSITION                  0x00000003
#define __RPINR23__SS2R3__MASK                      0x00000008
#define __RPINR23__SS2R3__LENGTH                    0x00000001

#define __RPINR23__SS2R4__POSITION                  0x00000004
#define __RPINR23__SS2R4__MASK                      0x00000010
#define __RPINR23__SS2R4__LENGTH                    0x00000001

#define __RPINR26__C1RXR__POSITION                  0x00000000
#define __RPINR26__C1RXR__MASK                      0x0000001F
#define __RPINR26__C1RXR__LENGTH                    0x00000005

#define __RPINR26__C1RXR0__POSITION                 0x00000000
#define __RPINR26__C1RXR0__MASK                     0x00000001
#define __RPINR26__C1RXR0__LENGTH                   0x00000001

#define __RPINR26__C1RXR1__POSITION                 0x00000001
#define __RPINR26__C1RXR1__MASK                     0x00000002
#define __RPINR26__C1RXR1__LENGTH                   0x00000001

#define __RPINR26__C1RXR2__POSITION                 0x00000002
#define __RPINR26__C1RXR2__MASK                     0x00000004
#define __RPINR26__C1RXR2__LENGTH                   0x00000001

#define __RPINR26__C1RXR3__POSITION                 0x00000003
#define __RPINR26__C1RXR3__MASK                     0x00000008
#define __RPINR26__C1RXR3__LENGTH                   0x00000001

#define __RPINR26__C1RXR4__POSITION                 0x00000004
#define __RPINR26__C1RXR4__MASK                     0x00000010
#define __RPINR26__C1RXR4__LENGTH                   0x00000001

#define __RPOR0__RP0R__POSITION                     0x00000000
#define __RPOR0__RP0R__MASK                         0x0000001F
#define __RPOR0__RP0R__LENGTH                       0x00000005

#define __RPOR0__RP1R__POSITION                     0x00000008
#define __RPOR0__RP1R__MASK                         0x00001F00
#define __RPOR0__RP1R__LENGTH                       0x00000005

#define __RPOR0__RP0R0__POSITION                    0x00000000
#define __RPOR0__RP0R0__MASK                        0x00000001
#define __RPOR0__RP0R0__LENGTH                      0x00000001

#define __RPOR0__RP0R1__POSITION                    0x00000001
#define __RPOR0__RP0R1__MASK                        0x00000002
#define __RPOR0__RP0R1__LENGTH                      0x00000001

#define __RPOR0__RP0R2__POSITION                    0x00000002
#define __RPOR0__RP0R2__MASK                        0x00000004
#define __RPOR0__RP0R2__LENGTH                      0x00000001

#define __RPOR0__RP0R3__POSITION                    0x00000003
#define __RPOR0__RP0R3__MASK                        0x00000008
#define __RPOR0__RP0R3__LENGTH                      0x00000001

#define __RPOR0__RP0R4__POSITION                    0x00000004
#define __RPOR0__RP0R4__MASK                        0x00000010
#define __RPOR0__RP0R4__LENGTH                      0x00000001

#define __RPOR0__RP1R0__POSITION                    0x00000008
#define __RPOR0__RP1R0__MASK                        0x00000100
#define __RPOR0__RP1R0__LENGTH                      0x00000001

#define __RPOR0__RP1R1__POSITION                    0x00000009
#define __RPOR0__RP1R1__MASK                        0x00000200
#define __RPOR0__RP1R1__LENGTH                      0x00000001

#define __RPOR0__RP1R2__POSITION                    0x0000000A
#define __RPOR0__RP1R2__MASK                        0x00000400
#define __RPOR0__RP1R2__LENGTH                      0x00000001

#define __RPOR0__RP1R3__POSITION                    0x0000000B
#define __RPOR0__RP1R3__MASK                        0x00000800
#define __RPOR0__RP1R3__LENGTH                      0x00000001

#define __RPOR0__RP1R4__POSITION                    0x0000000C
#define __RPOR0__RP1R4__MASK                        0x00001000
#define __RPOR0__RP1R4__LENGTH                      0x00000001

#define __RPOR1__RP2R__POSITION                     0x00000000
#define __RPOR1__RP2R__MASK                         0x0000001F
#define __RPOR1__RP2R__LENGTH                       0x00000005

#define __RPOR1__RP3R__POSITION                     0x00000008
#define __RPOR1__RP3R__MASK                         0x00001F00
#define __RPOR1__RP3R__LENGTH                       0x00000005

#define __RPOR1__RP2R0__POSITION                    0x00000000
#define __RPOR1__RP2R0__MASK                        0x00000001
#define __RPOR1__RP2R0__LENGTH                      0x00000001

#define __RPOR1__RP2R1__POSITION                    0x00000001
#define __RPOR1__RP2R1__MASK                        0x00000002
#define __RPOR1__RP2R1__LENGTH                      0x00000001

#define __RPOR1__RP2R2__POSITION                    0x00000002
#define __RPOR1__RP2R2__MASK                        0x00000004
#define __RPOR1__RP2R2__LENGTH                      0x00000001

#define __RPOR1__RP2R3__POSITION                    0x00000003
#define __RPOR1__RP2R3__MASK                        0x00000008
#define __RPOR1__RP2R3__LENGTH                      0x00000001

#define __RPOR1__RP2R4__POSITION                    0x00000004
#define __RPOR1__RP2R4__MASK                        0x00000010
#define __RPOR1__RP2R4__LENGTH                      0x00000001

#define __RPOR1__RP3R0__POSITION                    0x00000008
#define __RPOR1__RP3R0__MASK                        0x00000100
#define __RPOR1__RP3R0__LENGTH                      0x00000001

#define __RPOR1__RP3R1__POSITION                    0x00000009
#define __RPOR1__RP3R1__MASK                        0x00000200
#define __RPOR1__RP3R1__LENGTH                      0x00000001

#define __RPOR1__RP3R2__POSITION                    0x0000000A
#define __RPOR1__RP3R2__MASK                        0x00000400
#define __RPOR1__RP3R2__LENGTH                      0x00000001

#define __RPOR1__RP3R3__POSITION                    0x0000000B
#define __RPOR1__RP3R3__MASK                        0x00000800
#define __RPOR1__RP3R3__LENGTH                      0x00000001

#define __RPOR1__RP3R4__POSITION                    0x0000000C
#define __RPOR1__RP3R4__MASK                        0x00001000
#define __RPOR1__RP3R4__LENGTH                      0x00000001

#define __RPOR2__RP4R__POSITION                     0x00000000
#define __RPOR2__RP4R__MASK                         0x0000001F
#define __RPOR2__RP4R__LENGTH                       0x00000005

#define __RPOR2__RP5R__POSITION                     0x00000008
#define __RPOR2__RP5R__MASK                         0x00001F00
#define __RPOR2__RP5R__LENGTH                       0x00000005

#define __RPOR2__RP4R0__POSITION                    0x00000000
#define __RPOR2__RP4R0__MASK                        0x00000001
#define __RPOR2__RP4R0__LENGTH                      0x00000001

#define __RPOR2__RP4R1__POSITION                    0x00000001
#define __RPOR2__RP4R1__MASK                        0x00000002
#define __RPOR2__RP4R1__LENGTH                      0x00000001

#define __RPOR2__RP4R2__POSITION                    0x00000002
#define __RPOR2__RP4R2__MASK                        0x00000004
#define __RPOR2__RP4R2__LENGTH                      0x00000001

#define __RPOR2__RP4R3__POSITION                    0x00000003
#define __RPOR2__RP4R3__MASK                        0x00000008
#define __RPOR2__RP4R3__LENGTH                      0x00000001

#define __RPOR2__RP4R4__POSITION                    0x00000004
#define __RPOR2__RP4R4__MASK                        0x00000010
#define __RPOR2__RP4R4__LENGTH                      0x00000001

#define __RPOR2__RP5R0__POSITION                    0x00000008
#define __RPOR2__RP5R0__MASK                        0x00000100
#define __RPOR2__RP5R0__LENGTH                      0x00000001

#define __RPOR2__RP5R1__POSITION                    0x00000009
#define __RPOR2__RP5R1__MASK                        0x00000200
#define __RPOR2__RP5R1__LENGTH                      0x00000001

#define __RPOR2__RP5R2__POSITION                    0x0000000A
#define __RPOR2__RP5R2__MASK                        0x00000400
#define __RPOR2__RP5R2__LENGTH                      0x00000001

#define __RPOR2__RP5R3__POSITION                    0x0000000B
#define __RPOR2__RP5R3__MASK                        0x00000800
#define __RPOR2__RP5R3__LENGTH                      0x00000001

#define __RPOR2__RP5R4__POSITION                    0x0000000C
#define __RPOR2__RP5R4__MASK                        0x00001000
#define __RPOR2__RP5R4__LENGTH                      0x00000001

#define __RPOR3__RP6R__POSITION                     0x00000000
#define __RPOR3__RP6R__MASK                         0x0000001F
#define __RPOR3__RP6R__LENGTH                       0x00000005

#define __RPOR3__RP7R__POSITION                     0x00000008
#define __RPOR3__RP7R__MASK                         0x00001F00
#define __RPOR3__RP7R__LENGTH                       0x00000005

#define __RPOR3__RP6R0__POSITION                    0x00000000
#define __RPOR3__RP6R0__MASK                        0x00000001
#define __RPOR3__RP6R0__LENGTH                      0x00000001

#define __RPOR3__RP6R1__POSITION                    0x00000001
#define __RPOR3__RP6R1__MASK                        0x00000002
#define __RPOR3__RP6R1__LENGTH                      0x00000001

#define __RPOR3__RP6R2__POSITION                    0x00000002
#define __RPOR3__RP6R2__MASK                        0x00000004
#define __RPOR3__RP6R2__LENGTH                      0x00000001

#define __RPOR3__RP6R3__POSITION                    0x00000003
#define __RPOR3__RP6R3__MASK                        0x00000008
#define __RPOR3__RP6R3__LENGTH                      0x00000001

#define __RPOR3__RP6R4__POSITION                    0x00000004
#define __RPOR3__RP6R4__MASK                        0x00000010
#define __RPOR3__RP6R4__LENGTH                      0x00000001

#define __RPOR3__RP7R0__POSITION                    0x00000008
#define __RPOR3__RP7R0__MASK                        0x00000100
#define __RPOR3__RP7R0__LENGTH                      0x00000001

#define __RPOR3__RP7R1__POSITION                    0x00000009
#define __RPOR3__RP7R1__MASK                        0x00000200
#define __RPOR3__RP7R1__LENGTH                      0x00000001

#define __RPOR3__RP7R2__POSITION                    0x0000000A
#define __RPOR3__RP7R2__MASK                        0x00000400
#define __RPOR3__RP7R2__LENGTH                      0x00000001

#define __RPOR3__RP7R3__POSITION                    0x0000000B
#define __RPOR3__RP7R3__MASK                        0x00000800
#define __RPOR3__RP7R3__LENGTH                      0x00000001

#define __RPOR3__RP7R4__POSITION                    0x0000000C
#define __RPOR3__RP7R4__MASK                        0x00001000
#define __RPOR3__RP7R4__LENGTH                      0x00000001

#define __RPOR4__RP8R__POSITION                     0x00000000
#define __RPOR4__RP8R__MASK                         0x0000001F
#define __RPOR4__RP8R__LENGTH                       0x00000005

#define __RPOR4__RP9R__POSITION                     0x00000008
#define __RPOR4__RP9R__MASK                         0x00001F00
#define __RPOR4__RP9R__LENGTH                       0x00000005

#define __RPOR4__RP8R0__POSITION                    0x00000000
#define __RPOR4__RP8R0__MASK                        0x00000001
#define __RPOR4__RP8R0__LENGTH                      0x00000001

#define __RPOR4__RP8R1__POSITION                    0x00000001
#define __RPOR4__RP8R1__MASK                        0x00000002
#define __RPOR4__RP8R1__LENGTH                      0x00000001

#define __RPOR4__RP8R2__POSITION                    0x00000002
#define __RPOR4__RP8R2__MASK                        0x00000004
#define __RPOR4__RP8R2__LENGTH                      0x00000001

#define __RPOR4__RP8R3__POSITION                    0x00000003
#define __RPOR4__RP8R3__MASK                        0x00000008
#define __RPOR4__RP8R3__LENGTH                      0x00000001

#define __RPOR4__RP8R4__POSITION                    0x00000004
#define __RPOR4__RP8R4__MASK                        0x00000010
#define __RPOR4__RP8R4__LENGTH                      0x00000001

#define __RPOR4__RP9R0__POSITION                    0x00000008
#define __RPOR4__RP9R0__MASK                        0x00000100
#define __RPOR4__RP9R0__LENGTH                      0x00000001

#define __RPOR4__RP9R1__POSITION                    0x00000009
#define __RPOR4__RP9R1__MASK                        0x00000200
#define __RPOR4__RP9R1__LENGTH                      0x00000001

#define __RPOR4__RP9R2__POSITION                    0x0000000A
#define __RPOR4__RP9R2__MASK                        0x00000400
#define __RPOR4__RP9R2__LENGTH                      0x00000001

#define __RPOR4__RP9R3__POSITION                    0x0000000B
#define __RPOR4__RP9R3__MASK                        0x00000800
#define __RPOR4__RP9R3__LENGTH                      0x00000001

#define __RPOR4__RP9R4__POSITION                    0x0000000C
#define __RPOR4__RP9R4__MASK                        0x00001000
#define __RPOR4__RP9R4__LENGTH                      0x00000001

#define __RPOR5__RP10R__POSITION                    0x00000000
#define __RPOR5__RP10R__MASK                        0x0000001F
#define __RPOR5__RP10R__LENGTH                      0x00000005

#define __RPOR5__RP11R__POSITION                    0x00000008
#define __RPOR5__RP11R__MASK                        0x00001F00
#define __RPOR5__RP11R__LENGTH                      0x00000005

#define __RPOR5__RP10R0__POSITION                   0x00000000
#define __RPOR5__RP10R0__MASK                       0x00000001
#define __RPOR5__RP10R0__LENGTH                     0x00000001

#define __RPOR5__RP10R1__POSITION                   0x00000001
#define __RPOR5__RP10R1__MASK                       0x00000002
#define __RPOR5__RP10R1__LENGTH                     0x00000001

#define __RPOR5__RP10R2__POSITION                   0x00000002
#define __RPOR5__RP10R2__MASK                       0x00000004
#define __RPOR5__RP10R2__LENGTH                     0x00000001

#define __RPOR5__RP10R3__POSITION                   0x00000003
#define __RPOR5__RP10R3__MASK                       0x00000008
#define __RPOR5__RP10R3__LENGTH                     0x00000001

#define __RPOR5__RP10R4__POSITION                   0x00000004
#define __RPOR5__RP10R4__MASK                       0x00000010
#define __RPOR5__RP10R4__LENGTH                     0x00000001

#define __RPOR5__RP11R0__POSITION                   0x00000008
#define __RPOR5__RP11R0__MASK                       0x00000100
#define __RPOR5__RP11R0__LENGTH                     0x00000001

#define __RPOR5__RP11R1__POSITION                   0x00000009
#define __RPOR5__RP11R1__MASK                       0x00000200
#define __RPOR5__RP11R1__LENGTH                     0x00000001

#define __RPOR5__RP11R2__POSITION                   0x0000000A
#define __RPOR5__RP11R2__MASK                       0x00000400
#define __RPOR5__RP11R2__LENGTH                     0x00000001

#define __RPOR5__RP11R3__POSITION                   0x0000000B
#define __RPOR5__RP11R3__MASK                       0x00000800
#define __RPOR5__RP11R3__LENGTH                     0x00000001

#define __RPOR5__RP11R4__POSITION                   0x0000000C
#define __RPOR5__RP11R4__MASK                       0x00001000
#define __RPOR5__RP11R4__LENGTH                     0x00000001

#define __RPOR6__RP12R__POSITION                    0x00000000
#define __RPOR6__RP12R__MASK                        0x0000001F
#define __RPOR6__RP12R__LENGTH                      0x00000005

#define __RPOR6__RP13R__POSITION                    0x00000008
#define __RPOR6__RP13R__MASK                        0x00001F00
#define __RPOR6__RP13R__LENGTH                      0x00000005

#define __RPOR6__RP12R0__POSITION                   0x00000000
#define __RPOR6__RP12R0__MASK                       0x00000001
#define __RPOR6__RP12R0__LENGTH                     0x00000001

#define __RPOR6__RP12R1__POSITION                   0x00000001
#define __RPOR6__RP12R1__MASK                       0x00000002
#define __RPOR6__RP12R1__LENGTH                     0x00000001

#define __RPOR6__RP12R2__POSITION                   0x00000002
#define __RPOR6__RP12R2__MASK                       0x00000004
#define __RPOR6__RP12R2__LENGTH                     0x00000001

#define __RPOR6__RP12R3__POSITION                   0x00000003
#define __RPOR6__RP12R3__MASK                       0x00000008
#define __RPOR6__RP12R3__LENGTH                     0x00000001

#define __RPOR6__RP12R4__POSITION                   0x00000004
#define __RPOR6__RP12R4__MASK                       0x00000010
#define __RPOR6__RP12R4__LENGTH                     0x00000001

#define __RPOR6__RP13R0__POSITION                   0x00000008
#define __RPOR6__RP13R0__MASK                       0x00000100
#define __RPOR6__RP13R0__LENGTH                     0x00000001

#define __RPOR6__RP13R1__POSITION                   0x00000009
#define __RPOR6__RP13R1__MASK                       0x00000200
#define __RPOR6__RP13R1__LENGTH                     0x00000001

#define __RPOR6__RP13R2__POSITION                   0x0000000A
#define __RPOR6__RP13R2__MASK                       0x00000400
#define __RPOR6__RP13R2__LENGTH                     0x00000001

#define __RPOR6__RP13R3__POSITION                   0x0000000B
#define __RPOR6__RP13R3__MASK                       0x00000800
#define __RPOR6__RP13R3__LENGTH                     0x00000001

#define __RPOR6__RP13R4__POSITION                   0x0000000C
#define __RPOR6__RP13R4__MASK                       0x00001000
#define __RPOR6__RP13R4__LENGTH                     0x00000001

#define __RPOR7__RP14R__POSITION                    0x00000000
#define __RPOR7__RP14R__MASK                        0x0000001F
#define __RPOR7__RP14R__LENGTH                      0x00000005

#define __RPOR7__RP15R__POSITION                    0x00000008
#define __RPOR7__RP15R__MASK                        0x00001F00
#define __RPOR7__RP15R__LENGTH                      0x00000005

#define __RPOR7__RP14R0__POSITION                   0x00000000
#define __RPOR7__RP14R0__MASK                       0x00000001
#define __RPOR7__RP14R0__LENGTH                     0x00000001

#define __RPOR7__RP14R1__POSITION                   0x00000001
#define __RPOR7__RP14R1__MASK                       0x00000002
#define __RPOR7__RP14R1__LENGTH                     0x00000001

#define __RPOR7__RP14R2__POSITION                   0x00000002
#define __RPOR7__RP14R2__MASK                       0x00000004
#define __RPOR7__RP14R2__LENGTH                     0x00000001

#define __RPOR7__RP14R3__POSITION                   0x00000003
#define __RPOR7__RP14R3__MASK                       0x00000008
#define __RPOR7__RP14R3__LENGTH                     0x00000001

#define __RPOR7__RP14R4__POSITION                   0x00000004
#define __RPOR7__RP14R4__MASK                       0x00000010
#define __RPOR7__RP14R4__LENGTH                     0x00000001

#define __RPOR7__RP15R0__POSITION                   0x00000008
#define __RPOR7__RP15R0__MASK                       0x00000100
#define __RPOR7__RP15R0__LENGTH                     0x00000001

#define __RPOR7__RP15R1__POSITION                   0x00000009
#define __RPOR7__RP15R1__MASK                       0x00000200
#define __RPOR7__RP15R1__LENGTH                     0x00000001

#define __RPOR7__RP15R2__POSITION                   0x0000000A
#define __RPOR7__RP15R2__MASK                       0x00000400
#define __RPOR7__RP15R2__LENGTH                     0x00000001

#define __RPOR7__RP15R3__POSITION                   0x0000000B
#define __RPOR7__RP15R3__MASK                       0x00000800
#define __RPOR7__RP15R3__LENGTH                     0x00000001

#define __RPOR7__RP15R4__POSITION                   0x0000000C
#define __RPOR7__RP15R4__MASK                       0x00001000
#define __RPOR7__RP15R4__LENGTH                     0x00000001

#define __RPOR8__RP16R__POSITION                    0x00000000
#define __RPOR8__RP16R__MASK                        0x0000001F
#define __RPOR8__RP16R__LENGTH                      0x00000005

#define __RPOR8__RP17R__POSITION                    0x00000008
#define __RPOR8__RP17R__MASK                        0x00001F00
#define __RPOR8__RP17R__LENGTH                      0x00000005

#define __RPOR8__RP16R0__POSITION                   0x00000000
#define __RPOR8__RP16R0__MASK                       0x00000001
#define __RPOR8__RP16R0__LENGTH                     0x00000001

#define __RPOR8__RP16R1__POSITION                   0x00000001
#define __RPOR8__RP16R1__MASK                       0x00000002
#define __RPOR8__RP16R1__LENGTH                     0x00000001

#define __RPOR8__RP16R2__POSITION                   0x00000002
#define __RPOR8__RP16R2__MASK                       0x00000004
#define __RPOR8__RP16R2__LENGTH                     0x00000001

#define __RPOR8__RP16R3__POSITION                   0x00000003
#define __RPOR8__RP16R3__MASK                       0x00000008
#define __RPOR8__RP16R3__LENGTH                     0x00000001

#define __RPOR8__RP16R4__POSITION                   0x00000004
#define __RPOR8__RP16R4__MASK                       0x00000010
#define __RPOR8__RP16R4__LENGTH                     0x00000001

#define __RPOR8__RP17R0__POSITION                   0x00000008
#define __RPOR8__RP17R0__MASK                       0x00000100
#define __RPOR8__RP17R0__LENGTH                     0x00000001

#define __RPOR8__RP17R1__POSITION                   0x00000009
#define __RPOR8__RP17R1__MASK                       0x00000200
#define __RPOR8__RP17R1__LENGTH                     0x00000001

#define __RPOR8__RP17R2__POSITION                   0x0000000A
#define __RPOR8__RP17R2__MASK                       0x00000400
#define __RPOR8__RP17R2__LENGTH                     0x00000001

#define __RPOR8__RP17R3__POSITION                   0x0000000B
#define __RPOR8__RP17R3__MASK                       0x00000800
#define __RPOR8__RP17R3__LENGTH                     0x00000001

#define __RPOR8__RP17R4__POSITION                   0x0000000C
#define __RPOR8__RP17R4__MASK                       0x00001000
#define __RPOR8__RP17R4__LENGTH                     0x00000001

#define __RPOR9__RP18R__POSITION                    0x00000000
#define __RPOR9__RP18R__MASK                        0x0000001F
#define __RPOR9__RP18R__LENGTH                      0x00000005

#define __RPOR9__RP19R__POSITION                    0x00000008
#define __RPOR9__RP19R__MASK                        0x00001F00
#define __RPOR9__RP19R__LENGTH                      0x00000005

#define __RPOR9__RP18R0__POSITION                   0x00000000
#define __RPOR9__RP18R0__MASK                       0x00000001
#define __RPOR9__RP18R0__LENGTH                     0x00000001

#define __RPOR9__RP18R1__POSITION                   0x00000001
#define __RPOR9__RP18R1__MASK                       0x00000002
#define __RPOR9__RP18R1__LENGTH                     0x00000001

#define __RPOR9__RP18R2__POSITION                   0x00000002
#define __RPOR9__RP18R2__MASK                       0x00000004
#define __RPOR9__RP18R2__LENGTH                     0x00000001

#define __RPOR9__RP18R3__POSITION                   0x00000003
#define __RPOR9__RP18R3__MASK                       0x00000008
#define __RPOR9__RP18R3__LENGTH                     0x00000001

#define __RPOR9__RP18R4__POSITION                   0x00000004
#define __RPOR9__RP18R4__MASK                       0x00000010
#define __RPOR9__RP18R4__LENGTH                     0x00000001

#define __RPOR9__RP19R0__POSITION                   0x00000008
#define __RPOR9__RP19R0__MASK                       0x00000100
#define __RPOR9__RP19R0__LENGTH                     0x00000001

#define __RPOR9__RP19R1__POSITION                   0x00000009
#define __RPOR9__RP19R1__MASK                       0x00000200
#define __RPOR9__RP19R1__LENGTH                     0x00000001

#define __RPOR9__RP19R2__POSITION                   0x0000000A
#define __RPOR9__RP19R2__MASK                       0x00000400
#define __RPOR9__RP19R2__LENGTH                     0x00000001

#define __RPOR9__RP19R3__POSITION                   0x0000000B
#define __RPOR9__RP19R3__MASK                       0x00000800
#define __RPOR9__RP19R3__LENGTH                     0x00000001

#define __RPOR9__RP19R4__POSITION                   0x0000000C
#define __RPOR9__RP19R4__MASK                       0x00001000
#define __RPOR9__RP19R4__LENGTH                     0x00000001

#define __RPOR10__RP20R__POSITION                   0x00000000
#define __RPOR10__RP20R__MASK                       0x0000001F
#define __RPOR10__RP20R__LENGTH                     0x00000005

#define __RPOR10__RP21R__POSITION                   0x00000008
#define __RPOR10__RP21R__MASK                       0x00001F00
#define __RPOR10__RP21R__LENGTH                     0x00000005

#define __RPOR10__RP20R0__POSITION                  0x00000000
#define __RPOR10__RP20R0__MASK                      0x00000001
#define __RPOR10__RP20R0__LENGTH                    0x00000001

#define __RPOR10__RP20R1__POSITION                  0x00000001
#define __RPOR10__RP20R1__MASK                      0x00000002
#define __RPOR10__RP20R1__LENGTH                    0x00000001

#define __RPOR10__RP20R2__POSITION                  0x00000002
#define __RPOR10__RP20R2__MASK                      0x00000004
#define __RPOR10__RP20R2__LENGTH                    0x00000001

#define __RPOR10__RP20R3__POSITION                  0x00000003
#define __RPOR10__RP20R3__MASK                      0x00000008
#define __RPOR10__RP20R3__LENGTH                    0x00000001

#define __RPOR10__RP20R4__POSITION                  0x00000004
#define __RPOR10__RP20R4__MASK                      0x00000010
#define __RPOR10__RP20R4__LENGTH                    0x00000001

#define __RPOR10__RP21R0__POSITION                  0x00000008
#define __RPOR10__RP21R0__MASK                      0x00000100
#define __RPOR10__RP21R0__LENGTH                    0x00000001

#define __RPOR10__RP21R1__POSITION                  0x00000009
#define __RPOR10__RP21R1__MASK                      0x00000200
#define __RPOR10__RP21R1__LENGTH                    0x00000001

#define __RPOR10__RP21R2__POSITION                  0x0000000A
#define __RPOR10__RP21R2__MASK                      0x00000400
#define __RPOR10__RP21R2__LENGTH                    0x00000001

#define __RPOR10__RP21R3__POSITION                  0x0000000B
#define __RPOR10__RP21R3__MASK                      0x00000800
#define __RPOR10__RP21R3__LENGTH                    0x00000001

#define __RPOR10__RP21R4__POSITION                  0x0000000C
#define __RPOR10__RP21R4__MASK                      0x00001000
#define __RPOR10__RP21R4__LENGTH                    0x00000001

#define __RPOR11__RP22R__POSITION                   0x00000000
#define __RPOR11__RP22R__MASK                       0x0000001F
#define __RPOR11__RP22R__LENGTH                     0x00000005

#define __RPOR11__RP23R__POSITION                   0x00000008
#define __RPOR11__RP23R__MASK                       0x00001F00
#define __RPOR11__RP23R__LENGTH                     0x00000005

#define __RPOR11__RP22R0__POSITION                  0x00000000
#define __RPOR11__RP22R0__MASK                      0x00000001
#define __RPOR11__RP22R0__LENGTH                    0x00000001

#define __RPOR11__RP22R1__POSITION                  0x00000001
#define __RPOR11__RP22R1__MASK                      0x00000002
#define __RPOR11__RP22R1__LENGTH                    0x00000001

#define __RPOR11__RP22R2__POSITION                  0x00000002
#define __RPOR11__RP22R2__MASK                      0x00000004
#define __RPOR11__RP22R2__LENGTH                    0x00000001

#define __RPOR11__RP22R3__POSITION                  0x00000003
#define __RPOR11__RP22R3__MASK                      0x00000008
#define __RPOR11__RP22R3__LENGTH                    0x00000001

#define __RPOR11__RP22R4__POSITION                  0x00000004
#define __RPOR11__RP22R4__MASK                      0x00000010
#define __RPOR11__RP22R4__LENGTH                    0x00000001

#define __RPOR11__RP23R0__POSITION                  0x00000008
#define __RPOR11__RP23R0__MASK                      0x00000100
#define __RPOR11__RP23R0__LENGTH                    0x00000001

#define __RPOR11__RP23R1__POSITION                  0x00000009
#define __RPOR11__RP23R1__MASK                      0x00000200
#define __RPOR11__RP23R1__LENGTH                    0x00000001

#define __RPOR11__RP23R2__POSITION                  0x0000000A
#define __RPOR11__RP23R2__MASK                      0x00000400
#define __RPOR11__RP23R2__LENGTH                    0x00000001

#define __RPOR11__RP23R3__POSITION                  0x0000000B
#define __RPOR11__RP23R3__MASK                      0x00000800
#define __RPOR11__RP23R3__LENGTH                    0x00000001

#define __RPOR11__RP23R4__POSITION                  0x0000000C
#define __RPOR11__RP23R4__MASK                      0x00001000
#define __RPOR11__RP23R4__LENGTH                    0x00000001

#define __RPOR12__RP24R__POSITION                   0x00000000
#define __RPOR12__RP24R__MASK                       0x0000001F
#define __RPOR12__RP24R__LENGTH                     0x00000005

#define __RPOR12__RP25R__POSITION                   0x00000008
#define __RPOR12__RP25R__MASK                       0x00001F00
#define __RPOR12__RP25R__LENGTH                     0x00000005

#define __RPOR12__RP24R0__POSITION                  0x00000000
#define __RPOR12__RP24R0__MASK                      0x00000001
#define __RPOR12__RP24R0__LENGTH                    0x00000001

#define __RPOR12__RP24R1__POSITION                  0x00000001
#define __RPOR12__RP24R1__MASK                      0x00000002
#define __RPOR12__RP24R1__LENGTH                    0x00000001

#define __RPOR12__RP24R2__POSITION                  0x00000002
#define __RPOR12__RP24R2__MASK                      0x00000004
#define __RPOR12__RP24R2__LENGTH                    0x00000001

#define __RPOR12__RP24R3__POSITION                  0x00000003
#define __RPOR12__RP24R3__MASK                      0x00000008
#define __RPOR12__RP24R3__LENGTH                    0x00000001

#define __RPOR12__RP24R4__POSITION                  0x00000004
#define __RPOR12__RP24R4__MASK                      0x00000010
#define __RPOR12__RP24R4__LENGTH                    0x00000001

#define __RPOR12__RP25R0__POSITION                  0x00000008
#define __RPOR12__RP25R0__MASK                      0x00000100
#define __RPOR12__RP25R0__LENGTH                    0x00000001

#define __RPOR12__RP25R1__POSITION                  0x00000009
#define __RPOR12__RP25R1__MASK                      0x00000200
#define __RPOR12__RP25R1__LENGTH                    0x00000001

#define __RPOR12__RP25R2__POSITION                  0x0000000A
#define __RPOR12__RP25R2__MASK                      0x00000400
#define __RPOR12__RP25R2__LENGTH                    0x00000001

#define __RPOR12__RP25R3__POSITION                  0x0000000B
#define __RPOR12__RP25R3__MASK                      0x00000800
#define __RPOR12__RP25R3__LENGTH                    0x00000001

#define __RPOR12__RP25R4__POSITION                  0x0000000C
#define __RPOR12__RP25R4__MASK                      0x00001000
#define __RPOR12__RP25R4__LENGTH                    0x00000001

#define __RCON__POR__POSITION                       0x00000000
#define __RCON__POR__MASK                           0x00000001
#define __RCON__POR__LENGTH                         0x00000001

#define __RCON__BOR__POSITION                       0x00000001
#define __RCON__BOR__MASK                           0x00000002
#define __RCON__BOR__LENGTH                         0x00000001

#define __RCON__IDLE__POSITION                      0x00000002
#define __RCON__IDLE__MASK                          0x00000004
#define __RCON__IDLE__LENGTH                        0x00000001

#define __RCON__SLEEP__POSITION                     0x00000003
#define __RCON__SLEEP__MASK                         0x00000008
#define __RCON__SLEEP__LENGTH                       0x00000001

#define __RCON__WDTO__POSITION                      0x00000004
#define __RCON__WDTO__MASK                          0x00000010
#define __RCON__WDTO__LENGTH                        0x00000001

#define __RCON__SWDTEN__POSITION                    0x00000005
#define __RCON__SWDTEN__MASK                        0x00000020
#define __RCON__SWDTEN__LENGTH                      0x00000001

#define __RCON__SWR__POSITION                       0x00000006
#define __RCON__SWR__MASK                           0x00000040
#define __RCON__SWR__LENGTH                         0x00000001

#define __RCON__EXTR__POSITION                      0x00000007
#define __RCON__EXTR__MASK                          0x00000080
#define __RCON__EXTR__LENGTH                        0x00000001

#define __RCON__VREGS__POSITION                     0x00000008
#define __RCON__VREGS__MASK                         0x00000100
#define __RCON__VREGS__LENGTH                       0x00000001

#define __RCON__CM__POSITION                        0x00000009
#define __RCON__CM__MASK                            0x00000200
#define __RCON__CM__LENGTH                          0x00000001

#define __RCON__IOPUWR__POSITION                    0x0000000E
#define __RCON__IOPUWR__MASK                        0x00004000
#define __RCON__IOPUWR__LENGTH                      0x00000001

#define __RCON__TRAPR__POSITION                     0x0000000F
#define __RCON__TRAPR__MASK                         0x00008000
#define __RCON__TRAPR__LENGTH                       0x00000001

#define __OSCCON__OSWEN__POSITION                   0x00000000
#define __OSCCON__OSWEN__MASK                       0x00000001
#define __OSCCON__OSWEN__LENGTH                     0x00000001

#define __OSCCON__LPOSCEN__POSITION                 0x00000001
#define __OSCCON__LPOSCEN__MASK                     0x00000002
#define __OSCCON__LPOSCEN__LENGTH                   0x00000001

#define __OSCCON__CF__POSITION                      0x00000003
#define __OSCCON__CF__MASK                          0x00000008
#define __OSCCON__CF__LENGTH                        0x00000001

#define __OSCCON__LOCK__POSITION                    0x00000005
#define __OSCCON__LOCK__MASK                        0x00000020
#define __OSCCON__LOCK__LENGTH                      0x00000001

#define __OSCCON__IOLOCK__POSITION                  0x00000006
#define __OSCCON__IOLOCK__MASK                      0x00000040
#define __OSCCON__IOLOCK__LENGTH                    0x00000001

#define __OSCCON__CLKLOCK__POSITION                 0x00000007
#define __OSCCON__CLKLOCK__MASK                     0x00000080
#define __OSCCON__CLKLOCK__LENGTH                   0x00000001

#define __OSCCON__NOSC__POSITION                    0x00000008
#define __OSCCON__NOSC__MASK                        0x00000700
#define __OSCCON__NOSC__LENGTH                      0x00000003

#define __OSCCON__COSC__POSITION                    0x0000000C
#define __OSCCON__COSC__MASK                        0x00007000
#define __OSCCON__COSC__LENGTH                      0x00000003

#define __OSCCON__NOSC0__POSITION                   0x00000008
#define __OSCCON__NOSC0__MASK                       0x00000100
#define __OSCCON__NOSC0__LENGTH                     0x00000001

#define __OSCCON__NOSC1__POSITION                   0x00000009
#define __OSCCON__NOSC1__MASK                       0x00000200
#define __OSCCON__NOSC1__LENGTH                     0x00000001

#define __OSCCON__NOSC2__POSITION                   0x0000000A
#define __OSCCON__NOSC2__MASK                       0x00000400
#define __OSCCON__NOSC2__LENGTH                     0x00000001

#define __OSCCON__COSC0__POSITION                   0x0000000C
#define __OSCCON__COSC0__MASK                       0x00001000
#define __OSCCON__COSC0__LENGTH                     0x00000001

#define __OSCCON__COSC1__POSITION                   0x0000000D
#define __OSCCON__COSC1__MASK                       0x00002000
#define __OSCCON__COSC1__LENGTH                     0x00000001

#define __OSCCON__COSC2__POSITION                   0x0000000E
#define __OSCCON__COSC2__MASK                       0x00004000
#define __OSCCON__COSC2__LENGTH                     0x00000001

#define __CLKDIV__PLLPRE__POSITION                  0x00000000
#define __CLKDIV__PLLPRE__MASK                      0x0000001F
#define __CLKDIV__PLLPRE__LENGTH                    0x00000005

#define __CLKDIV__PLLPOST__POSITION                 0x00000006
#define __CLKDIV__PLLPOST__MASK                     0x000000C0
#define __CLKDIV__PLLPOST__LENGTH                   0x00000002

#define __CLKDIV__FRCDIV__POSITION                  0x00000008
#define __CLKDIV__FRCDIV__MASK                      0x00000700
#define __CLKDIV__FRCDIV__LENGTH                    0x00000003

#define __CLKDIV__DOZEN__POSITION                   0x0000000B
#define __CLKDIV__DOZEN__MASK                       0x00000800
#define __CLKDIV__DOZEN__LENGTH                     0x00000001

#define __CLKDIV__DOZE__POSITION                    0x0000000C
#define __CLKDIV__DOZE__MASK                        0x00007000
#define __CLKDIV__DOZE__LENGTH                      0x00000003

#define __CLKDIV__ROI__POSITION                     0x0000000F
#define __CLKDIV__ROI__MASK                         0x00008000
#define __CLKDIV__ROI__LENGTH                       0x00000001

#define __CLKDIV__PLLPRE0__POSITION                 0x00000000
#define __CLKDIV__PLLPRE0__MASK                     0x00000001
#define __CLKDIV__PLLPRE0__LENGTH                   0x00000001

#define __CLKDIV__PLLPRE1__POSITION                 0x00000001
#define __CLKDIV__PLLPRE1__MASK                     0x00000002
#define __CLKDIV__PLLPRE1__LENGTH                   0x00000001

#define __CLKDIV__PLLPRE2__POSITION                 0x00000002
#define __CLKDIV__PLLPRE2__MASK                     0x00000004
#define __CLKDIV__PLLPRE2__LENGTH                   0x00000001

#define __CLKDIV__PLLPRE3__POSITION                 0x00000003
#define __CLKDIV__PLLPRE3__MASK                     0x00000008
#define __CLKDIV__PLLPRE3__LENGTH                   0x00000001

#define __CLKDIV__PLLPRE4__POSITION                 0x00000004
#define __CLKDIV__PLLPRE4__MASK                     0x00000010
#define __CLKDIV__PLLPRE4__LENGTH                   0x00000001

#define __CLKDIV__PLLPOST0__POSITION                0x00000006
#define __CLKDIV__PLLPOST0__MASK                    0x00000040
#define __CLKDIV__PLLPOST0__LENGTH                  0x00000001

#define __CLKDIV__PLLPOST1__POSITION                0x00000007
#define __CLKDIV__PLLPOST1__MASK                    0x00000080
#define __CLKDIV__PLLPOST1__LENGTH                  0x00000001

#define __CLKDIV__FRCDIV0__POSITION                 0x00000008
#define __CLKDIV__FRCDIV0__MASK                     0x00000100
#define __CLKDIV__FRCDIV0__LENGTH                   0x00000001

#define __CLKDIV__FRCDIV1__POSITION                 0x00000009
#define __CLKDIV__FRCDIV1__MASK                     0x00000200
#define __CLKDIV__FRCDIV1__LENGTH                   0x00000001

#define __CLKDIV__FRCDIV2__POSITION                 0x0000000A
#define __CLKDIV__FRCDIV2__MASK                     0x00000400
#define __CLKDIV__FRCDIV2__LENGTH                   0x00000001

#define __CLKDIV__DOZE0__POSITION                   0x0000000C
#define __CLKDIV__DOZE0__MASK                       0x00001000
#define __CLKDIV__DOZE0__LENGTH                     0x00000001

#define __CLKDIV__DOZE1__POSITION                   0x0000000D
#define __CLKDIV__DOZE1__MASK                       0x00002000
#define __CLKDIV__DOZE1__LENGTH                     0x00000001

#define __CLKDIV__DOZE2__POSITION                   0x0000000E
#define __CLKDIV__DOZE2__MASK                       0x00004000
#define __CLKDIV__DOZE2__LENGTH                     0x00000001

#define __PLLFBD__PLLDIV__POSITION                  0x00000000
#define __PLLFBD__PLLDIV__MASK                      0x000001FF
#define __PLLFBD__PLLDIV__LENGTH                    0x00000009

#define __PLLFBD__PLLDIV0__POSITION                 0x00000000
#define __PLLFBD__PLLDIV0__MASK                     0x00000001
#define __PLLFBD__PLLDIV0__LENGTH                   0x00000001

#define __PLLFBD__PLLDIV1__POSITION                 0x00000001
#define __PLLFBD__PLLDIV1__MASK                     0x00000002
#define __PLLFBD__PLLDIV1__LENGTH                   0x00000001

#define __PLLFBD__PLLDIV2__POSITION                 0x00000002
#define __PLLFBD__PLLDIV2__MASK                     0x00000004
#define __PLLFBD__PLLDIV2__LENGTH                   0x00000001

#define __PLLFBD__PLLDIV3__POSITION                 0x00000003
#define __PLLFBD__PLLDIV3__MASK                     0x00000008
#define __PLLFBD__PLLDIV3__LENGTH                   0x00000001

#define __PLLFBD__PLLDIV4__POSITION                 0x00000004
#define __PLLFBD__PLLDIV4__MASK                     0x00000010
#define __PLLFBD__PLLDIV4__LENGTH                   0x00000001

#define __PLLFBD__PLLDIV5__POSITION                 0x00000005
#define __PLLFBD__PLLDIV5__MASK                     0x00000020
#define __PLLFBD__PLLDIV5__LENGTH                   0x00000001

#define __PLLFBD__PLLDIV6__POSITION                 0x00000006
#define __PLLFBD__PLLDIV6__MASK                     0x00000040
#define __PLLFBD__PLLDIV6__LENGTH                   0x00000001

#define __PLLFBD__PLLDIV7__POSITION                 0x00000007
#define __PLLFBD__PLLDIV7__MASK                     0x00000080
#define __PLLFBD__PLLDIV7__LENGTH                   0x00000001

#define __PLLFBD__PLLDIV8__POSITION                 0x00000008
#define __PLLFBD__PLLDIV8__MASK                     0x00000100
#define __PLLFBD__PLLDIV8__LENGTH                   0x00000001

#define __OSCTUN__TUN__POSITION                     0x00000000
#define __OSCTUN__TUN__MASK                         0x0000003F
#define __OSCTUN__TUN__LENGTH                       0x00000006

#define __OSCTUN__TUN0__POSITION                    0x00000000
#define __OSCTUN__TUN0__MASK                        0x00000001
#define __OSCTUN__TUN0__LENGTH                      0x00000001

#define __OSCTUN__TUN1__POSITION                    0x00000001
#define __OSCTUN__TUN1__MASK                        0x00000002
#define __OSCTUN__TUN1__LENGTH                      0x00000001

#define __OSCTUN__TUN2__POSITION                    0x00000002
#define __OSCTUN__TUN2__MASK                        0x00000004
#define __OSCTUN__TUN2__LENGTH                      0x00000001

#define __OSCTUN__TUN3__POSITION                    0x00000003
#define __OSCTUN__TUN3__MASK                        0x00000008
#define __OSCTUN__TUN3__LENGTH                      0x00000001

#define __OSCTUN__TUN4__POSITION                    0x00000004
#define __OSCTUN__TUN4__MASK                        0x00000010
#define __OSCTUN__TUN4__LENGTH                      0x00000001

#define __OSCTUN__TUN5__POSITION                    0x00000005
#define __OSCTUN__TUN5__MASK                        0x00000020
#define __OSCTUN__TUN5__LENGTH                      0x00000001

#define __ACLKCON__ASRCSEL__POSITION                0x00000007
#define __ACLKCON__ASRCSEL__MASK                    0x00000080
#define __ACLKCON__ASRCSEL__LENGTH                  0x00000001

#define __ACLKCON__APSTSCLR__POSITION               0x00000008
#define __ACLKCON__APSTSCLR__MASK                   0x00000700
#define __ACLKCON__APSTSCLR__LENGTH                 0x00000003

#define __ACLKCON__AOSCMD__POSITION                 0x0000000B
#define __ACLKCON__AOSCMD__MASK                     0x00001800
#define __ACLKCON__AOSCMD__LENGTH                   0x00000002

#define __ACLKCON__SELACLK__POSITION                0x0000000D
#define __ACLKCON__SELACLK__MASK                    0x00002000
#define __ACLKCON__SELACLK__LENGTH                  0x00000001

#define __ACLKCON__APSTSCLR0__POSITION              0x00000008
#define __ACLKCON__APSTSCLR0__MASK                  0x00000100
#define __ACLKCON__APSTSCLR0__LENGTH                0x00000001

#define __ACLKCON__APSTSCLR1__POSITION              0x00000009
#define __ACLKCON__APSTSCLR1__MASK                  0x00000200
#define __ACLKCON__APSTSCLR1__LENGTH                0x00000001

#define __ACLKCON__APSTSCLR2__POSITION              0x0000000A
#define __ACLKCON__APSTSCLR2__MASK                  0x00000400
#define __ACLKCON__APSTSCLR2__LENGTH                0x00000001

#define __ACLKCON__AOSCMD0__POSITION                0x0000000B
#define __ACLKCON__AOSCMD0__MASK                    0x00000800
#define __ACLKCON__AOSCMD0__LENGTH                  0x00000001

#define __ACLKCON__AOSCMD1__POSITION                0x0000000C
#define __ACLKCON__AOSCMD1__MASK                    0x00001000
#define __ACLKCON__AOSCMD1__LENGTH                  0x00000001

#define __BSRAM__RL__BSR__POSITION                   0x00000000
#define __BSRAM__RL__BSR__MASK                       0x00000001
#define __BSRAM__RL__BSR__LENGTH                     0x00000001

#define __BSRAM__IR__BSR__POSITION                   0x00000001
#define __BSRAM__IR__BSR__MASK                       0x00000002
#define __BSRAM__IR__BSR__LENGTH                     0x00000001

#define __BSRAM__IW__BSR__POSITION                   0x00000002
#define __BSRAM__IW__BSR__MASK                       0x00000004
#define __BSRAM__IW__BSR__LENGTH                     0x00000001

#define __SSRAM__RL__SSR__POSITION                   0x00000000
#define __SSRAM__RL__SSR__MASK                       0x00000001
#define __SSRAM__RL__SSR__LENGTH                     0x00000001

#define __SSRAM__IR__SSR__POSITION                   0x00000001
#define __SSRAM__IR__SSR__MASK                       0x00000002
#define __SSRAM__IR__SSR__LENGTH                     0x00000001

#define __SSRAM__IW__SSR__POSITION                   0x00000002
#define __SSRAM__IW__SSR__MASK                       0x00000004
#define __SSRAM__IW__SSR__LENGTH                     0x00000001

#define __NVMCON__NVMOP__POSITION                   0x00000000
#define __NVMCON__NVMOP__MASK                       0x0000000F
#define __NVMCON__NVMOP__LENGTH                     0x00000004

#define __NVMCON__ERASE__POSITION                   0x00000006
#define __NVMCON__ERASE__MASK                       0x00000040
#define __NVMCON__ERASE__LENGTH                     0x00000001

#define __NVMCON__WRERR__POSITION                   0x0000000D
#define __NVMCON__WRERR__MASK                       0x00002000
#define __NVMCON__WRERR__LENGTH                     0x00000001

#define __NVMCON__WREN__POSITION                    0x0000000E
#define __NVMCON__WREN__MASK                        0x00004000
#define __NVMCON__WREN__LENGTH                      0x00000001

#define __NVMCON__WR__POSITION                      0x0000000F
#define __NVMCON__WR__MASK                          0x00008000
#define __NVMCON__WR__LENGTH                        0x00000001

#define __NVMCON__NVMOP0__POSITION                  0x00000000
#define __NVMCON__NVMOP0__MASK                      0x00000001
#define __NVMCON__NVMOP0__LENGTH                    0x00000001

#define __NVMCON__NVMOP1__POSITION                  0x00000001
#define __NVMCON__NVMOP1__MASK                      0x00000002
#define __NVMCON__NVMOP1__LENGTH                    0x00000001

#define __NVMCON__NVMOP2__POSITION                  0x00000002
#define __NVMCON__NVMOP2__MASK                      0x00000004
#define __NVMCON__NVMOP2__LENGTH                    0x00000001

#define __NVMCON__NVMOP3__POSITION                  0x00000003
#define __NVMCON__NVMOP3__MASK                      0x00000008
#define __NVMCON__NVMOP3__LENGTH                    0x00000001

#define __PMD1__AD1MD__POSITION                     0x00000000
#define __PMD1__AD1MD__MASK                         0x00000001
#define __PMD1__AD1MD__LENGTH                       0x00000001

#define __PMD1__C1MD__POSITION                      0x00000001
#define __PMD1__C1MD__MASK                          0x00000002
#define __PMD1__C1MD__LENGTH                        0x00000001

#define __PMD1__SPI1MD__POSITION                    0x00000003
#define __PMD1__SPI1MD__MASK                        0x00000008
#define __PMD1__SPI1MD__LENGTH                      0x00000001

#define __PMD1__SPI2MD__POSITION                    0x00000004
#define __PMD1__SPI2MD__MASK                        0x00000010
#define __PMD1__SPI2MD__LENGTH                      0x00000001

#define __PMD1__U1MD__POSITION                      0x00000005
#define __PMD1__U1MD__MASK                          0x00000020
#define __PMD1__U1MD__LENGTH                        0x00000001

#define __PMD1__U2MD__POSITION                      0x00000006
#define __PMD1__U2MD__MASK                          0x00000040
#define __PMD1__U2MD__LENGTH                        0x00000001

#define __PMD1__I2C1MD__POSITION                    0x00000007
#define __PMD1__I2C1MD__MASK                        0x00000080
#define __PMD1__I2C1MD__LENGTH                      0x00000001

#define __PMD1__PWM1MD__POSITION                    0x00000009
#define __PMD1__PWM1MD__MASK                        0x00000200
#define __PMD1__PWM1MD__LENGTH                      0x00000001

#define __PMD1__QEI1MD__POSITION                    0x0000000A
#define __PMD1__QEI1MD__MASK                        0x00000400
#define __PMD1__QEI1MD__LENGTH                      0x00000001

#define __PMD1__T1MD__POSITION                      0x0000000B
#define __PMD1__T1MD__MASK                          0x00000800
#define __PMD1__T1MD__LENGTH                        0x00000001

#define __PMD1__T2MD__POSITION                      0x0000000C
#define __PMD1__T2MD__MASK                          0x00001000
#define __PMD1__T2MD__LENGTH                        0x00000001

#define __PMD1__T3MD__POSITION                      0x0000000D
#define __PMD1__T3MD__MASK                          0x00002000
#define __PMD1__T3MD__LENGTH                        0x00000001

#define __PMD1__T4MD__POSITION                      0x0000000E
#define __PMD1__T4MD__MASK                          0x00004000
#define __PMD1__T4MD__LENGTH                        0x00000001

#define __PMD1__T5MD__POSITION                      0x0000000F
#define __PMD1__T5MD__MASK                          0x00008000
#define __PMD1__T5MD__LENGTH                        0x00000001

#define __PMD2__OC1MD__POSITION                     0x00000000
#define __PMD2__OC1MD__MASK                         0x00000001
#define __PMD2__OC1MD__LENGTH                       0x00000001

#define __PMD2__OC2MD__POSITION                     0x00000001
#define __PMD2__OC2MD__MASK                         0x00000002
#define __PMD2__OC2MD__LENGTH                       0x00000001

#define __PMD2__OC3MD__POSITION                     0x00000002
#define __PMD2__OC3MD__MASK                         0x00000004
#define __PMD2__OC3MD__LENGTH                       0x00000001

#define __PMD2__OC4MD__POSITION                     0x00000003
#define __PMD2__OC4MD__MASK                         0x00000008
#define __PMD2__OC4MD__LENGTH                       0x00000001

#define __PMD2__IC1MD__POSITION                     0x00000008
#define __PMD2__IC1MD__MASK                         0x00000100
#define __PMD2__IC1MD__LENGTH                       0x00000001

#define __PMD2__IC2MD__POSITION                     0x00000009
#define __PMD2__IC2MD__MASK                         0x00000200
#define __PMD2__IC2MD__LENGTH                       0x00000001

#define __PMD2__IC7MD__POSITION                     0x0000000E
#define __PMD2__IC7MD__MASK                         0x00004000
#define __PMD2__IC7MD__LENGTH                       0x00000001

#define __PMD2__IC8MD__POSITION                     0x0000000F
#define __PMD2__IC8MD__MASK                         0x00008000
#define __PMD2__IC8MD__LENGTH                       0x00000001

#define __PMD3__PWM2MD__POSITION                    0x00000004
#define __PMD3__PWM2MD__MASK                        0x00000010
#define __PMD3__PWM2MD__LENGTH                      0x00000001

#define __PMD3__QEI2MD__POSITION                    0x00000005
#define __PMD3__QEI2MD__MASK                        0x00000020
#define __PMD3__QEI2MD__LENGTH                      0x00000001

#define __PMD3__DAC1MD__POSITION                    0x00000006
#define __PMD3__DAC1MD__MASK                        0x00000040
#define __PMD3__DAC1MD__LENGTH                      0x00000001

#define __PMD3__CRCMD__POSITION                     0x00000007
#define __PMD3__CRCMD__MASK                         0x00000080
#define __PMD3__CRCMD__LENGTH                       0x00000001

#define __PMD3__PMPMD__POSITION                     0x00000008
#define __PMD3__PMPMD__MASK                         0x00000100
#define __PMD3__PMPMD__LENGTH                       0x00000001

#define __PMD3__RTCCMD__POSITION                    0x00000009
#define __PMD3__RTCCMD__MASK                        0x00000200
#define __PMD3__RTCCMD__LENGTH                      0x00000001

#define __PMD3__CMPMD__POSITION                     0x0000000A
#define __PMD3__CMPMD__MASK                         0x00000400
#define __PMD3__CMPMD__LENGTH                       0x00000001


/* -------------------------------------------------------- */
/* al declaration for DMA memory base address         */
/*                                                          */
/* For example:                                             */
/*                                                          */
/*   unsigned int addr = (unsigned int) &__DMA__BASE;         */
/*                                                          */
/* Note: Use ____builtin__dmaoffset() to calculate offsets     */
/*       within DMA memory.                                 */
/*                                                          */
/* -------------------------------------------------------- */

 void *__DMA__BASE;


/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FBS (0xf80000)                               */

  int __FBS;
#define __FBS(x) ((section("____FBS.sec"),space(prog))) int __FBS = (x);

/*
** Only one invocation of FBS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FBS.
** Multiple options may be combined, as shown:
**
** __FBS( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   Boot Segment Write Protect:
**     BWRP__WRPROTECT__ON    Boot segment is write-protected
**     BWRP__WRPROTECT__OFF   Boot Segment may be written
**
**   Boot Segment Program Flash Code Protection:
**     BSS__LARGE__FLASH__HIGH High Security, Large-sized Boot Flash
**     BSS__HIGH__LARGE__BOOT__CODEHigh Security, Large-sized Boot Flash
**     BSS__MEDIUM__FLASH__HIGHHigh Security, Medium-sized Boot Flash
**     BSS__HIGH__MEDIUM__BOOT__CODEHigh Security, Medium-sized Boot Flash
**     BSS__SMALL__FLASH__HIGH High Security, Small-sized Boot Flash
**     BSS__HIGH__SMALL__BOOT__CODEHigh Security, Small-sized Boot Flash
**     BSS__LARGE__FLASH__STD  Standard Security, Large-sized Boot Flash
**     BSS__STRD__LARGE__BOOT__CODEStandard Security, Large-sized Boot Flash
**     BSS__MEDIUM__FLASH__STD Standard Security, Medium-sized Boot Flash
**     BSS__STRD__MEDIUM__BOOT__CODEStandard Security, Medium-sized Boot Flash
**     BSS__SMALL__FLASH__STD  Standard Security, Small-sized Boot Flash
**     BSS__STRD__SMALL__BOOT__CODEStandard Security, Small-sized Boot Flash
**     BSS__NO__FLASH         No Boot program Flash segment
**     BSS__NO__BOOT__CODE     No Boot program Flash segment
**
**   Boot Segment RAM Protection:
**     RBS__LARGE__RAM        Large-sized Boot RAM
**     RBS__LARGE__BOOT__RAM   Large-sized Boot RAM
**     RBS__MEDIUM__RAM       Medium-sized Boot RAM
**     RBS__MEDIUM__BOOT__RAM  Medium-sized Boot RAM
**     RBS__SMALL__RAM        Small-sized Boot RAM
**     RBS__SMALL__BOOT__RAM   Small-sized Boot RAM
**     RBS__NO__RAM           No Boot RAM
**     RBS__NO__BOOT__RAM      No Boot RAM
**
*/

#define BWRP__WRPROTECT__ON    0xFFFE
#define BWRP__WRPROTECT__OFF   0xFFFF

#define BSS__LARGE__FLASH__HIGH 0xFFF1
#define BSS__HIGH__LARGE__BOOT__CODE 0xFFF1
#define BSS__MEDIUM__FLASH__HIGH 0xFFF3
#define BSS__HIGH__MEDIUM__BOOT__CODE 0xFFF3
#define BSS__SMALL__FLASH__HIGH 0xFFF5
#define BSS__HIGH__SMALL__BOOT__CODE 0xFFF5
#define BSS__LARGE__FLASH__STD  0xFFF9
#define BSS__STRD__LARGE__BOOT__CODE 0xFFF9
#define BSS__MEDIUM__FLASH__STD 0xFFFB
#define BSS__STRD__MEDIUM__BOOT__CODE 0xFFFB
#define BSS__SMALL__FLASH__STD  0xFFFD
#define BSS__STRD__SMALL__BOOT__CODE 0xFFFD
#define BSS__NO__FLASH         0xFFFF
#define BSS__NO__BOOT__CODE     0xFFFF

#define RBS__LARGE__RAM        0xFF3F
#define RBS__LARGE__BOOT__RAM   0xFF3F
#define RBS__MEDIUM__RAM       0xFF7F
#define RBS__MEDIUM__BOOT__RAM  0xFF7F
#define RBS__SMALL__RAM        0xFFBF
#define RBS__SMALL__BOOT__RAM   0xFFBF
#define RBS__NO__RAM           0xFFFF
#define RBS__NO__BOOT__RAM      0xFFFF

/* Register FSS (0xf80002)                               */

  int __FSS;
#define __FSS(x) ((section("____FSS.sec"),space(prog))) int __FSS = (x);

/*
** Only one invocation of FSS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FSS.
** Multiple options may be combined, as shown:
**
** __FSS( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   Secure Segment Program Write Protect:
**     SWRP__WRPROTECT__ON    Secure segment is write-protected
**     SWRP__WRPROTECT__OFF   Secure segment may be written
**
**   Secure Segment Program Flash Code Protection:
**     SSS__LARGE__FLASH__HIGH High Security, Large-sized Secure Flash
**     SSS__HIGH__LARGE__SEC__CODEHigh Security, Large-sized Secure Flash
**     SSS__MEDIUM__FLASH__HIGHHigh Security, Medium-sized Secure Flash
**     SSS__HIGH__MEDIUM__SEC__CODEHigh Security, Medium-sized Secure Flash
**     SSS__SMALL__FLASH__HIGH High Security, Small-sized Secure Flash
**     SSS__HIGH__SMALL__SEC__CODEHigh Security, Small-sized Secure Flash
**     SSS__LARGE__FLASH__STD  Standard Security, Large-sized Secure Flash
**     SSS__STRD__LARGE__SEC__CODEStandard Security, Large-sized Secure Flash
**     SSS__MEDIUM__FLASH__STD Standard Security, Medium-sized Secure Flash
**     SSS__STRD__MEDIUM__SEC__CODEStandard Security, Medium-sized Secure Flash
**     SSS__SMALL__FLASH__STD  Standard Security, Small-sized Secure Flash
**     SSS__STRD__SMALL__SEC__CODEStandard Security, Small-sized Secure Flash
**     SSS__NO__FLASH         No Secure Segment
**     SSS__NO__SEC__CODE      No Secure Segment
**
**   Secure Segment Data RAM Protection:
**     RSS__LARGE__RAM        Large-sized Secure RAM
**     RSS__LARGE__SEC__RAM    Large-sized Secure RAM
**     RSS__MEDIUM__RAM       Medium-sized Secure RAM
**     RSS__MEDIUM__SEC__RAM   Medium-sized Secure RAM
**     RSS__SMALL__RAM        Small-sized Secure RAM
**     RSS__SMALL__SEC__RAM    Small-sized Secure RAM
**     RSS__NO__RAM           No Secure RAM
**     RSS__NO__SEC__RAM       No Secure RAM
**
*/

#define SWRP__WRPROTECT__ON    0xFFFE
#define SWRP__WRPROTECT__OFF   0xFFFF

#define SSS__LARGE__FLASH__HIGH 0xFFF1
#define SSS__HIGH__LARGE__SEC__CODE 0xFFF1
#define SSS__MEDIUM__FLASH__HIGH 0xFFF3
#define SSS__HIGH__MEDIUM__SEC__CODE 0xFFF3
#define SSS__SMALL__FLASH__HIGH 0xFFF5
#define SSS__HIGH__SMALL__SEC__CODE 0xFFF5
#define SSS__LARGE__FLASH__STD  0xFFF9
#define SSS__STRD__LARGE__SEC__CODE 0xFFF9
#define SSS__MEDIUM__FLASH__STD 0xFFFB
#define SSS__STRD__MEDIUM__SEC__CODE 0xFFFB
#define SSS__SMALL__FLASH__STD  0xFFFD
#define SSS__STRD__SMALL__SEC__CODE 0xFFFD
#define SSS__NO__FLASH         0xFFFF
#define SSS__NO__SEC__CODE      0xFFFF

#define RSS__LARGE__RAM        0xFF3F
#define RSS__LARGE__SEC__RAM    0xFF3F
#define RSS__MEDIUM__RAM       0xFF7F
#define RSS__MEDIUM__SEC__RAM   0xFF7F
#define RSS__SMALL__RAM        0xFFBF
#define RSS__SMALL__SEC__RAM    0xFFBF
#define RSS__NO__RAM           0xFFFF
#define RSS__NO__SEC__RAM       0xFFFF

/* Register FGS (0xf80004)                               */

  int __FGS;
#define __FGS(x) ((section("____FGS.sec"),space(prog))) int __FGS = (x);

/*
** Only one invocation of FGS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FGS.
** Multiple options may be combined, as shown:
**
** __FGS( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   General Code Segment Write Protect:
**     GWRP__ON              User program memory is write-protected
**     GWRP__OFF             User program memory is not write-protected
**
**   General Segment Code Protection:
**     GSS__HIGH             High Security Code Protection is Enabled
**     GSS__STD              Standard Security Code Protection is Enabled
**     GCP__ON               Standard Security Code Protection is Enabled
**     GSS__OFF              User program memory is not code-protected
**     GCP__OFF              User program memory is not code-protected
**
*/

#define GWRP__ON              0xFFFE
#define GWRP__OFF             0xFFFF

#define GSS__HIGH             0xFFFB
#define GSS__STD              0xFFFD
#define GCP__ON               0xFFFD
#define GSS__OFF              0xFFFF
#define GCP__OFF              0xFFFF

/* Register FOSCSEL (0xf80006)                               */

  int __FOSCSEL;
#define __FOSCSEL(x) ((section("____FOSCSEL.sec"),space(prog))) int __FOSCSEL = (x);

/*
** Only one invocation of FOSCSEL should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSCSEL.
** Multiple options may be combined, as shown:
**
** __FOSCSEL( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   Oscillator Mode:
**     FNOSC__FRC            Internal Fast RC (FRC)
**     FNOSC__FRCPLL         Internal Fast RC (FRC) w/ PLL
**     FNOSC__PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC__PRIPLL         Primary Oscillator (XT, HS, EC) w/ PLL
**     FNOSC__SOSC           Secondary Oscillator (SOSC)
**     FNOSC__LPRC           Low Power RC Oscillator (LPRC)
**     FNOSC__FRCDIV16       Internal Fast RC (FRC) divide by 16
**     FNOSC__LPRCDIVN       Internal Fast RC (FRC) with divide by N
**
**   Internal al Switch Over Mode:
**     IESO__OFF             Start-up device with user-selected oscillator source
**     IESO__ON              Start-up device with FRC, then automatically switch to user-selected oscillator source when ready
**
*/

#define FNOSC__FRC            0xFFF8
#define FNOSC__FRCPLL         0xFFF9
#define FNOSC__PRI            0xFFFA
#define FNOSC__PRIPLL         0xFFFB
#define FNOSC__SOSC           0xFFFC
#define FNOSC__LPRC           0xFFFD
#define FNOSC__FRCDIV16       0xFFFE
#define FNOSC__LPRCDIVN       0xFFFF

#define IESO__OFF             0xFF7F
#define IESO__ON              0xFFFF

/* Register FOSC (0xf80008)                               */

  int __FOSC;
#define __FOSC(x) ((section("____FOSC.sec"),space(prog))) int __FOSC = (x);

/*
** Only one invocation of FOSC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSC.
** Multiple options may be combined, as shown:
**
** __FOSC( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   Primary Oscillator Source:
**     POSCMD__EC            EC Oscillator Mode
**     POSCMD__XT            XT Oscillator Mode
**     POSCMD__HS            HS Oscillator Mode
**     POSCMD__NONE          Primary Oscillator Disabled
**
**   OSC2 Pin Function:
**     OSCIOFNC__ON          OSC2 pin has digital I/O function
**     OSCIOFNC__OFF         OSC2 pin has clock out function
**
**   Peripheral Pin Select Configuration:
**     IOL1WAY__OFF          Allow Multiple Re-configurations
**     IOL1WAY__ON           Allow Only One Re-configuration
**
**   Clock Switching and Monitor:
**     FCKSM__CSECME         Both Clock Switching and Fail-Safe Clock Monitor are enabled
**     FCKSM__CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
**     FCKSM__CSDCMD         Both Clock Switching and Fail-Safe Clock Monitor are disabled
**
*/

#define POSCMD__EC            0xFFFC
#define POSCMD__XT            0xFFFD
#define POSCMD__HS            0xFFFE
#define POSCMD__NONE          0xFFFF

#define OSCIOFNC__ON          0xFFFB
#define OSCIOFNC__OFF         0xFFFF

#define IOL1WAY__OFF          0xFFDF
#define IOL1WAY__ON           0xFFFF

#define FCKSM__CSECME         0xFF3F
#define FCKSM__CSECMD         0xFF7F
#define FCKSM__CSDCMD         0xFFBF

/* Register FWDT (0xf8000a)                               */

  int __FWDT;
#define __FWDT(x) ((section("____FWDT.sec"),space(prog))) int __FWDT = (x);

/*
** Only one invocation of FWDT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FWDT.
** Multiple options may be combined, as shown:
**
** __FWDT( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   Watchdog Timer Postscaler:
**     WDTPOST__PS1          1:1
**     WDTPOST__PS2          1:2
**     WDTPOST__PS4          1:4
**     WDTPOST__PS8          1:8
**     WDTPOST__PS16         1:16
**     WDTPOST__PS32         1:32
**     WDTPOST__PS64         1:64
**     WDTPOST__PS128        1:128
**     WDTPOST__PS256        1:256
**     WDTPOST__PS512        1:512
**     WDTPOST__PS1024       1:1,024
**     WDTPOST__PS2048       1:2,048
**     WDTPOST__PS4096       1:4,096
**     WDTPOST__PS8192       1:8,192
**     WDTPOST__PS16384      1:16,384
**     WDTPOST__PS32768      1:32,768
**
**   WDT Prescaler:
**     WDTPRE__PR32          1:32
**     WDTPRE__PR128         1:128
**
**   Watchdog Timer Window:
**     WINDIS__ON            Watchdog Timer in Window mode
**     WINDIS__OFF           Watchdog Timer in Non-Window mode
**
**   Watchdog Timer Enable:
**     FWDTEN__OFF           Watchdog timer enabled/disabled by user software
**     FWDTEN__ON            Watchdog timer always enabled
**
*/

#define WDTPOST__PS1          0xFFF0
#define WDTPOST__PS2          0xFFF1
#define WDTPOST__PS4          0xFFF2
#define WDTPOST__PS8          0xFFF3
#define WDTPOST__PS16         0xFFF4
#define WDTPOST__PS32         0xFFF5
#define WDTPOST__PS64         0xFFF6
#define WDTPOST__PS128        0xFFF7
#define WDTPOST__PS256        0xFFF8
#define WDTPOST__PS512        0xFFF9
#define WDTPOST__PS1024       0xFFFA
#define WDTPOST__PS2048       0xFFFB
#define WDTPOST__PS4096       0xFFFC
#define WDTPOST__PS8192       0xFFFD
#define WDTPOST__PS16384      0xFFFE
#define WDTPOST__PS32768      0xFFFF

#define WDTPRE__PR32          0xFFEF
#define WDTPRE__PR128         0xFFFF

#define WINDIS__ON            0xFFBF
#define WINDIS__OFF           0xFFFF

#define FWDTEN__OFF           0xFF7F
#define FWDTEN__ON            0xFFFF

/* Register FPOR (0xf8000c)                               */

  int __FPOR;
#define __FPOR(x) ((section("____FPOR.sec"),space(prog))) int __FPOR = (x);

/*
** Only one invocation of FPOR should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FPOR.
** Multiple options may be combined, as shown:
**
** __FPOR( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   POR Timer Value:
**     FPWRT__PWR1           Disabled
**     FPWRT__PWR2           2ms
**     FPWRT__PWR4           4ms
**     FPWRT__PWR8           8ms
**     FPWRT__PWR16          16ms
**     FPWRT__PWR32          32ms
**     FPWRT__PWR64          64ms
**     FPWRT__PWR128         128ms
**
**   Alternate I2C  pins:
**     ALTI2C__ON            I2C mapped to ASDA1/ASCL1 pins
**     ALTI2C__OFF           I2C mapped to SDA1/SCL1 pins
**
**   Motor Control PWM Low Side Polarity bit:
**     LPOL__OFF             PWM module low side output pins have active-low output polarity
**     LPOL__ON              PWM module low side output pins have active-high output polarity
**
**   Motor Control PWM High Side Polarity bit:
**     HPOL__OFF             PWM module high side output pins have active-low output polarity
**     HPOL__ON              PWM module high side output pins have active-high output polarity
**
**   Motor Control PWM Module Pin Mode bit:
**     PWMPIN__OFF           PWM module pins controlled by PWM module at device Reset
**     PWMPIN__ON            PWM module pins controlled by PORT register at device Reset
**
*/

#define FPWRT__PWR1           0xFFF8
#define FPWRT__PWR2           0xFFF9
#define FPWRT__PWR4           0xFFFA
#define FPWRT__PWR8           0xFFFB
#define FPWRT__PWR16          0xFFFC
#define FPWRT__PWR32          0xFFFD
#define FPWRT__PWR64          0xFFFE
#define FPWRT__PWR128         0xFFFF

#define ALTI2C__ON            0xFFEF
#define ALTI2C__OFF           0xFFFF

#define LPOL__OFF             0xFFDF
#define LPOL__ON              0xFFFF

#define HPOL__OFF             0xFFBF
#define HPOL__ON              0xFFFF

#define PWMPIN__OFF           0xFF7F
#define PWMPIN__ON            0xFFFF

/* Register FICD (0xf8000e)                               */

  int __FICD;
#define __FICD(x) ((section("____FICD.sec"),space(prog))) int __FICD = (x);

/*
** Only one invocation of FICD should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FICD.
** Multiple options may be combined, as shown:
**
** __FICD( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   Comm Channel Select:
**     ICS__PGD3             Communicate on PGC3/EMUC3 and PGD3/EMUD3
**     ICS__PGD2             Communicate on PGC2/EMUC2 and PGD2/EMUD2
**     ICS__PGD1             Communicate on PGC1/EMUC1 and PGD1/EMUD1
**
**   JTAG Port Enable:
**     JTAGEN__OFF           JTAG is Disabled
**     JTAGEN__ON            JTAG is Enabled
**
*/

#define ICS__PGD3             0xFFFD
#define ICS__PGD2             0xFFFE
#define ICS__PGD1             0xFFFF

#define JTAGEN__OFF           0xFFDF
#define JTAGEN__ON            0xFFFF

/* Register FUID0 (0xf80010)                               */

  int __FUID0;
#define __FUID0(x) ((section("____FUID0.sec"),space(prog))) int __FUID0 = (x);

/*
** Only one invocation of FUID0 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID0.
** Multiple options may be combined, as shown:
**
** __FUID0( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   :
**
*/


/* Register FUID1 (0xf80012)                               */

  int __FUID1;
#define __FUID1(x) ((section("____FUID1.sec"),space(prog))) int __FUID1 = (x);

/*
** Only one invocation of FUID1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID1.
** Multiple options may be combined, as shown:
**
** __FUID1( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   :
**
*/


/* Register FUID2 (0xf80014)                               */

  int __FUID2;
#define __FUID2(x) ((section("____FUID2.sec"),space(prog))) int __FUID2 = (x);

/*
** Only one invocation of FUID2 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID2.
** Multiple options may be combined, as shown:
**
** __FUID2( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   :
**
*/


/* Register FUID3 (0xf80016)                               */

  int __FUID3;
#define __FUID3(x) ((section("____FUID3.sec"),space(prog))) int __FUID3 = (x);

/*
** Only one invocation of FUID3 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID3.
** Multiple options may be combined, as shown:
**
** __FUID3( OPT1__ON & OPT2__OFF & OPT3__PLL )
**
**   :
**
*/



#endif