//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBWorkbook : NSObject
{
}

+ (ChVector_cc6fdd32 *)createSheetNamesFromWorkbook:(id)arg1;
+ (id)readWithState:(id)arg1 reader:(id)arg2;
+ (int)xlSheetTypeEnumFromEDSheet:(id)arg1;
+ (void)setupProcessors:(id)arg1;
+ (void)readDocumentPresentation:(id)arg1 state:(id)arg2;
+ (void)readDocumentProperties:(id)arg1 state:(id)arg2;

@end

