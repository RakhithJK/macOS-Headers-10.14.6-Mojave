//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMLineShapeBuilder.h>

@class OADPath;

__attribute__((visibility("hidden")))
@interface CMFreeFormShapeBuilder : CMLineShapeBuilder
{
    OADPath *_path;
    struct CGSize _space;
}

- (void).cxx_destruct;
- (struct CGPoint)_renderPathElement:(id)arg1 withTransform:(struct CGAffineTransform)arg2 inPath:(struct CGPath *)arg3;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)affineTransform;
- (void)setSpace:(struct CGSize)arg1;
- (void)setPath:(id)arg1;

@end

