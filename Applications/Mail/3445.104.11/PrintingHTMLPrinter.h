//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSWindowDelegate-Protocol.h"

@class MUIWebDocumentView, NSMutableArray, NSPrintInfo, NSString;

@interface PrintingHTMLPrinter : NSObject <NSWindowDelegate>
{
    BOOL _hasPrinted;
    NSString *_printingHTML;
    NSMutableArray *_attachments;
    NSPrintInfo *_printInfo;
    NSString *_jobTitle;
    MUIWebDocumentView *_printView;
    long long _messageContentTypeToBlock;
    PrintingHTMLPrinter *_activePrinter;
    CDUnknownBlockType _finishedPrintingCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishedPrintingCompletionBlock; // @synthesize finishedPrintingCompletionBlock=_finishedPrintingCompletionBlock;
@property(retain, nonatomic) PrintingHTMLPrinter *activePrinter; // @synthesize activePrinter=_activePrinter;
@property(nonatomic) long long messageContentTypeToBlock; // @synthesize messageContentTypeToBlock=_messageContentTypeToBlock;
@property(nonatomic) BOOL hasPrinted; // @synthesize hasPrinted=_hasPrinted;
@property(retain, nonatomic) MUIWebDocumentView *printView; // @synthesize printView=_printView;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSPrintInfo *printInfo; // @synthesize printInfo=_printInfo;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSString *printingHTML; // @synthesize printingHTML=_printingHTML;
- (void).cxx_destruct;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)_runPrintOperation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)run:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPrintingHTML:(id)arg1 attachments:(id)arg2 printInfo:(id)arg3 jobTitle:(id)arg4 messageContentTypeToBlock:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

