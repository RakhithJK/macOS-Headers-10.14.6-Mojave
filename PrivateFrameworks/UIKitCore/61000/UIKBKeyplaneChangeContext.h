//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneChangeContext : NSObject
{
    BOOL _sizeDidChange;
    BOOL _splitWidthsChanged;
    BOOL _selfSizingChanged;
    BOOL _updateAssistantView;
    struct CGSize _size;
}

+ (id)keyplaneChangeContextWithSize:(struct CGSize)arg1;
+ (id)keyplaneChangeContext;
@property(nonatomic) BOOL updateAssistantView; // @synthesize updateAssistantView=_updateAssistantView;
@property(nonatomic) BOOL selfSizingChanged; // @synthesize selfSizingChanged=_selfSizingChanged;
@property(nonatomic) BOOL splitWidthsChanged; // @synthesize splitWidthsChanged=_splitWidthsChanged;
@property(readonly, nonatomic) BOOL sizeDidChange; // @synthesize sizeDidChange=_sizeDidChange;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@end

