//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarImageProvider : NSObject
{
}

+ (id)sharedProvider;
- (BOOL)_suppressHairlineThickeningForImageName:(id)arg1 styleAttributes:(id)arg2;
- (BOOL)_automaticallyFlipRightToLeftLayoutDirectionForImageNamed:(id)arg1 styleAttributes:(id)arg2;
- (struct UIEdgeInsets)_alignmentInsetsForImageNamed:(id)arg1 styleAttributes:(id)arg2;
- (id)imageNamed:(id)arg1 styleAttributes:(id)arg2;

@end

