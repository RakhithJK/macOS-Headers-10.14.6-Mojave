//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDString, EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellTextMapper : CMMapper
{
    EDString *edString;
    EDStyle *edStyle;
}

+ (double)contentWidthForString:(id)arg1 style:(id)arg2;
- (void).cxx_destruct;
- (void)mapTextRunsAt:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2 columnWidth:(double)arg3 height:(double)arg4 spreadLeft:(BOOL)arg5;
- (double)contentWidth;
- (id)initWithEDString:(id)arg1 style:(id)arg2 parent:(id)arg3;
- (void)mapVerticalTextAt:(id)arg1 withState:(id)arg2 width:(double)arg3 height:(double)arg4;

@end

