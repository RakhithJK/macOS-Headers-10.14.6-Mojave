//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPListFormatInspector.h"

@interface CPArrowInspector : CPListFormatInspector
{
    id mSize;
    id mWidth;
    id mSample;
}

+ (id)sharedInspector;
+ (id)inspectorDidChangeNotification;
+ (Class)wellClass;
- (void)update:(id)arg1;
- (void)refresh;
- (id)listFormats;
- (id)arrow;
- (id)windowNibName;
- (id)title;

@end

