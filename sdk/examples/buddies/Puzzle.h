/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * Copyright <c> 2012 Sifteo, Inc. All rights reserved.
 */
 
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef BUDDIES_PUZZLE_H_
#define BUDDIES_PUZZLE_H_

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Piece.h"
#include "Config.h"
#include <sifteo/cube.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

namespace Buddies {

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

class Puzzle
{
public:
    Puzzle(
        const char *chapterTitle,
        const char *cutsceneTextStart,
        const char *cutsceneTextEnd,
        const char *clue,
        unsigned int numBuddies,
        const Piece startState[kMaxBuddies][NUM_SIDES],
        const Piece endState[kMaxBuddies][NUM_SIDES]);
    
    const char *GetChapterTitle() const;
    const char *GetCutsceneTextStart() const;
    const char *GetCutsceneTextEnd() const;
    const char *GetClue() const;
    
    unsigned int GetNumBuddies() const;
    
    const Piece &GetStartState(unsigned int buddy, Sifteo::Cube::Side side) const;
    const Piece &GetEndState(unsigned int buddy, Sifteo::Cube::Side side) const;
    
private:
    char mChapterTitle[64];
    char mCutsceneTextStart[64];
    char mCutsceneTextEnd[64];
    char mClue[64];
    unsigned int mNumBuddies;
    Piece mStartState[kMaxBuddies][NUM_SIDES];
    Piece mEndState[kMaxBuddies][NUM_SIDES];    
};

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
